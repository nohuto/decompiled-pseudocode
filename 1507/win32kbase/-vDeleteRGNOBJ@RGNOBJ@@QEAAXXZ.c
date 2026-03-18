/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     vRestoreRegion @ 0x1C000D2F0 (vRestoreRegion.c)
 *     GreCreateRectRgn @ 0x1C0011BD0 (GreCreateRectRgn.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C002422C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C003DBA0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0042990 (GreCreateRectRgnIndirect.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C004A358 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C004C104 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0068FF0 (GreCreatePolyPolygonRgnInternal.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 *     ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00A4064 (-bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(__int16 **this)
{
  __int16 *v1; // rbx

  v1 = *this;
  if ( !*this || v1 == (__int16 *)prgnDefault )
  {
    *this = 0LL;
  }
  else if ( v1[7] >= 0 )
  {
    Win32FreePool();
    *this = 0LL;
  }
  else
  {
    if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      Win32FreeToPagedLookasideListImpl_0();
    *this = 0LL;
  }
}
