/*
 * XREFs of VfGetDmaAdapter @ 0x14073BD44
 * Callers:
 *     <none>
 * Callees:
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     IoGetDmaAdapter @ 0x1405B8614 (IoGetDmaAdapter.c)
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x14073A7C4 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x14073C5B0 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x14073E9E0 (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x14073F00C (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  _LIST_ENTRY *v6; // rax
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v8; // rdi
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( !ViVerifyDma || ViDMADisabledNoRebootNeeded == 1 || (unsigned int)VfIsPCIBus() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (MmVerifierData & 0x20000) == 0 )
    VF_ASSERT_IRQL(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v6 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v6 )
        break;
      ViReleaseDmaAdapter((ULONG_PTR)v6);
    }
  }
  if ( ViDoubleBufferDma )
  {
    if ( *NumberOfMapRegisters > 0x20 )
      *NumberOfMapRegisters = 32;
  }
  off_140321AD0();
  DmaAdapter = pXdvIoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  v8 = DmaAdapter;
  if ( !DmaAdapter )
    return 0LL;
  v10 = ViHookDmaAdapter(DmaAdapter);
  if ( !v10 )
  {
    ((void (__fastcall *)(struct _DMA_ADAPTER *))v8->DmaOperations->PutDmaAdapter)(v8);
    return 0LL;
  }
  *(_QWORD *)(v10 + 24) = PhysicalDeviceObject;
  *(_QWORD *)(v10 + 40) = retaddr;
  return v8;
}
