/*
 * XREFs of IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C004BDB0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C004BEAC (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     AllocateObject @ 0x1C004C110 (AllocateObject.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C004C220 (Win32AllocateFromPagedLookasideList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsWin32AllocateFromPagedLookasideListImplSupported_0()
{
  return IsWin32AllocateFromPagedLookasideListImplSupported();
}
