/*
 * XREFs of ACPIBusIrpStartDevice @ 0x1C0082A70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIModuleFilterStartResources @ 0x1C0046E5C (ACPIModuleFilterStartResources.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C00905F8 (PcisuppAcquirePciInterfaces.c)
 *     AcpiArblibCommitResources @ 0x1C0099718 (AcpiArblibCommitResources.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A28B8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A2AA4 (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // rbp
  __int64 StartContext; // rbx
  int result; // eax
  __int64 v7; // r13
  _QWORD *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF
  void *ThreadHandle; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  StartContext = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  if ( (*(_DWORD *)(StartContext + 8) & 0x2000000) != 0 )
  {
    result = PcisuppAcquirePciInterfaces(DeviceObject);
    if ( result < 0 )
      return result;
    if ( !*(_QWORD *)(StartContext + 296) )
    {
      KeInitializeEvent((PRKEVENT)(StartContext + 248), SynchronizationEvent, 0);
      KeInitializeEvent((PRKEVENT)(StartContext + 272), SynchronizationEvent, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 (PKSTART_ROUTINE)PciRootBusBiosMethodDispatcherOnResume,
                 (PVOID)StartContext);
      if ( result < 0 )
        return result;
      ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(StartContext + 296) = Object;
      ZwClose(ThreadHandle);
    }
  }
  if ( (*(_QWORD *)(StartContext + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(StartContext + 184) )
  {
    ACPIModuleFilterStartResources(0x2000000000LL, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    v7 = *(_QWORD *)(v2 + 8);
    v8 = (_QWORD *)(StartContext + 192);
    v9 = 0;
    while ( 1 )
    {
      v10 = *v8;
      result = AcpiArblibCommitResources(*v8, v7);
      if ( result < 0 )
        break;
      if ( *(_DWORD *)(v10 + 168) == 3 )
      {
        result = ArbAddInaccessibleAllocationRange(v10 + 136, *(_QWORD *)(v10 + 176));
        if ( result < 0 )
          break;
        result = ArbAddMmConfigRangeAsBootReserved(v10 + 136, *(_QWORD *)(v10 + 176));
        if ( result < 0 )
          break;
      }
      v11 = *v8;
      ++v9;
      ++v8;
      *(_BYTE *)(v11 + 130) = 1;
      if ( v9 >= 3 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    result = ACPIInitStartDevice(
               (ULONG_PTR)DeviceObject,
               v2,
               (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIBusIrpStartDeviceCompletion,
               a2,
               a2);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
