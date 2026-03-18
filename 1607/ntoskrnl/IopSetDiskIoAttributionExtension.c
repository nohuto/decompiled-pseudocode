/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14008E608
 * Callers:
 *     IopSetDiskIoAttributionFromProcess @ 0x14006ECD4 (IopSetDiskIoAttributionFromProcess.c)
 *     IoAsynchronousPageWrite @ 0x14008DEA4 (IoAsynchronousPageWrite.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x14008E068 (IoUpdateIrpIoAttributionHandle.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008E078 (IoMakeAssociatedIrpPriv.c)
 *     IoSynchronousPageWriteEx @ 0x14008E368 (IoSynchronousPageWriteEx.c)
 *     IoPropagateIrpExtensionEx @ 0x14008E500 (IoPropagateIrpExtensionEx.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400EBF60 (IoSetDiskIoAttributionFromThread.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14008E634 (IopAllocateIrpExtension.c)
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
