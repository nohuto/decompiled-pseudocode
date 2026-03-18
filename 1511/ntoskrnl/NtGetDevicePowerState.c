/*
 * XREFs of NtGetDevicePowerState @ 0x1406382F0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1404BB8EC (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PopLockGetDoDevicePowerState @ 0x1401ECE90 (PopLockGetDoDevicePowerState.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IoGetRelatedTargetDevice @ 0x14049188C (IoGetRelatedTargetDevice.c)
 */

NTSTATUS __stdcall NtGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE PowerState)
{
  PDEVICE_POWER_STATE v2; // rsi
  NTSTATUS result; // eax
  NTSTATUS RelatedTargetDevice; // ebx
  PVOID v5; // rdi
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = PowerState;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)PowerState >= MmUserProbeAddress )
      PowerState = (PDEVICE_POWER_STATE)MmUserProbeAddress;
    *PowerState = *PowerState;
  }
  result = ObReferenceObjectByHandle(
             Device,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &v7);
    ObfDereferenceObject(Object);
    if ( RelatedTargetDevice >= 0 )
    {
      v5 = v7;
      *v2 = PopLockGetDoDevicePowerState(*((_QWORD *)v7 + 39));
      ObfDereferenceObject(v5);
    }
    return RelatedTargetDevice;
  }
  return result;
}
