/*
 * XREFs of IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8
 * Callers:
 *     FreeThreadBufferWithTag @ 0x1C000B380 (FreeThreadBufferWithTag.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     NtDCompositionDiscardFrame @ 0x1C0045800 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionRetireFrame @ 0x1C0045A60 (NtDCompositionRetireFrame.c)
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0047C90 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC (-Release@CRegion@@QEBAJXZ.c)
 *     HMFreeObject @ 0x1C004F9B0 (HMFreeObject.c)
 *     FreeTmpBuffer @ 0x1C00534E0 (FreeTmpBuffer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsWin32FreePoolImplSupported_0()
{
  return IsWin32FreePoolImplSupported();
}
