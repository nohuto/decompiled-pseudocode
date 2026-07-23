/*
 * XREFs of NtGetDevicePowerState @ 0x140670820
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1403EEF00 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PopLockGetDoDevicePowerState @ 0x140205B08 (PopLockGetDoDevicePowerState.c)
 *     IoGetRelatedTargetDevice @ 0x1403F01C8 (IoGetRelatedTargetDevice.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
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
    if ( (unsigned __int64)PowerState >= 0x7FFFFFFF0000LL )
      PowerState = (PDEVICE_POWER_STATE)0x7FFFFFFF0000LL;
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
