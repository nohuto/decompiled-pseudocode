/*
 * XREFs of VfGetDmaAdapter @ 0x140707428
 * Callers:
 *     <none>
 * Callees:
 *     xHalUnmaskInterrupt @ 0x14014CC60 (xHalUnmaskInterrupt.c)
 *     IoGetDmaAdapter @ 0x140577C34 (IoGetDmaAdapter.c)
 *     VF_ASSERT_IRQL @ 0x140705F68 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x1407060D8 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x140707C40 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x140709C74 (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x14070A24C (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  ULONG_PTR *v6; // rax
  _QWORD *DmaAdapter; // rax
  _QWORD *v8; // rdi
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
      v6 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((__int64)PhysicalDeviceObject);
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
  off_1402F2620();
  DmaAdapter = (_QWORD *)pXdvIoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  v8 = DmaAdapter;
  if ( !DmaAdapter )
    return 0LL;
  v10 = ViHookDmaAdapter(DmaAdapter);
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD *))(v8[1] + 8LL))(v8);
    return 0LL;
  }
  *(_QWORD *)(v10 + 24) = PhysicalDeviceObject;
  *(_QWORD *)(v10 + 40) = retaddr;
  return (struct _DMA_ADAPTER *)v8;
}
