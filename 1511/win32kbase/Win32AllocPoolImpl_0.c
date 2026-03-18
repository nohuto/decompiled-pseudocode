/*
 * XREFs of Win32AllocPoolImpl_0 @ 0x1C0002BF0
 * Callers:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     NtDCompositionBeginFrame @ 0x1C003AE80 (NtDCompositionBeginFrame.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     HMAllocObject @ 0x1C0041A20 (HMAllocObject.c)
 *     AllocFreeTmpBuffer @ 0x1C0042C00 (AllocFreeTmpBuffer.c)
 *     AllocThreadBufferWithTag @ 0x1C006DB50 (AllocThreadBufferWithTag.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Win32AllocPoolImpl_0()
{
  return Win32AllocPoolImpl();
}
