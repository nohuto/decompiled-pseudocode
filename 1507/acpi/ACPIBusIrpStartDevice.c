/*
 * XREFs of ACPIBusIrpStartDevice @ 0x1C00686B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     ACPIModuleFilterStartResources @ 0x1C00362AC (ACPIModuleFilterStartResources.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0072FA4 (PcisuppAcquirePciInterfaces.c)
 *     AcpiArblibCommitResources @ 0x1C0078E2C (AcpiArblibCommitResources.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C0080AD8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080CC4 (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // rbp
  struct _KEVENT *StartContext; // rbx
  int result; // eax
  __int64 v7; // r13
  _LIST_ENTRY **p_Blink; // rdi
  unsigned int v9; // esi
  _LIST_ENTRY *v10; // rbx
  _LIST_ENTRY *v11; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF
  void *ThreadHandle; // [rsp+B8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  StartContext = (struct _KEVENT *)ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  if ( (StartContext->Header.LockNV & 0x2000000) != 0 )
  {
    result = PcisuppAcquirePciInterfaces(DeviceObject);
    if ( result < 0 )
      return result;
    if ( !*(_QWORD *)&StartContext[12].Header.Lock )
    {
      KeInitializeEvent(StartContext + 10, SynchronizationEvent, 0);
      KeInitializeEvent(StartContext + 11, SynchronizationEvent, 0);
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
                 StartContext);
      if ( result < 0 )
        return result;
      ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)&StartContext[12].Header.Lock = Object;
      ZwClose(ThreadHandle);
    }
  }
  if ( (*(_QWORD *)&StartContext->Header.Lock & 0x2000000000LL) != 0
    && LOBYTE(StartContext[7].Header.WaitListHead.Flink) )
  {
    ACPIModuleFilterStartResources(0x2000000000LL, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    v7 = *(_QWORD *)(v2 + 8);
    p_Blink = &StartContext[7].Header.WaitListHead.Blink;
    v9 = 0;
    while ( 1 )
    {
      v10 = *p_Blink;
      result = AcpiArblibCommitResources(*p_Blink, v7);
      if ( result < 0 )
        break;
      if ( LODWORD(v10[10].Blink) == 3 )
      {
        result = ArbAddInaccessibleAllocationRange(&v10[8].Blink, v10[11].Flink);
        if ( result < 0 )
          break;
        result = ArbAddMmConfigRangeAsBootReserved(&v10[8].Blink, v10[11].Flink);
        if ( result < 0 )
          break;
      }
      v11 = *p_Blink;
      ++v9;
      ++p_Blink;
      BYTE2(v11[8].Flink) = 1;
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
               (void (__fastcall *)(__int64, __int64, _QWORD))ACPIBusIrpStartDeviceCompletion,
               a2,
               a2);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
