/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14008DD68
 * Callers:
 *     IopSetDiskIoAttributionFromProcess @ 0x14006E854 (IopSetDiskIoAttributionFromProcess.c)
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x14008D7C8 (IoUpdateIrpIoAttributionHandle.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008D7D8 (IoMakeAssociatedIrpPriv.c)
 *     IoSynchronousPageWriteEx @ 0x14008DAC8 (IoSynchronousPageWriteEx.c)
 *     IoPropagateIrpExtensionEx @ 0x14008DC60 (IoPropagateIrpExtensionEx.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400E9DD0 (IoSetDiskIoAttributionFromThread.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14008DD94 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 16) = a2;
  return 0LL;
}
