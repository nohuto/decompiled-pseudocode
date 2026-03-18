/*
 * XREFs of IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z @ 0x1C0022CF0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKK@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0023BD0 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C002A260 (Win32AllocateFromPagedLookasideList.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002B3F8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002CD50 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsWin32AllocateFromPagedLookasideListImplSupported_0()
{
  return IsWin32AllocateFromPagedLookasideListImplSupported();
}
