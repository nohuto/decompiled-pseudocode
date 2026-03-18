/*
 * XREFs of Win32AllocPoolImpl_0 @ 0x1C0002BC0
 * Callers:
 *     AllocThreadBufferWithTag @ 0x1C00044B0 (AllocThreadBufferWithTag.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     NtDCompositionBeginFrame @ 0x1C0045E30 (NtDCompositionBeginFrame.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0047AD0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     HMAllocObject @ 0x1C004FB70 (HMAllocObject.c)
 *     AllocFreeTmpBuffer @ 0x1C0053560 (AllocFreeTmpBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Win32AllocPoolImpl_0()
{
  return Win32AllocPoolImpl();
}
