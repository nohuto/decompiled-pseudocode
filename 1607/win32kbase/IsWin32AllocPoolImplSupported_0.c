/*
 * XREFs of IsWin32AllocPoolImplSupported_0 @ 0x1C0002BE8
 * Callers:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00181B0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     AllocThreadBufferWithTag @ 0x1C006EB30 (AllocThreadBufferWithTag.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsWin32AllocPoolImplSupported_0()
{
  return IsWin32AllocPoolImplSupported();
}
