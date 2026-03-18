/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18014E050
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180046A20 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CDxHandleStereoBitmapRealization *this,
        const struct CRegion *a2)
{
  int v4; // eax
  unsigned int v5; // esi

  v4 = CBitmapRealization::AddDirtyRegion(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *((_QWORD *)this + 59) )
      (*(void (__fastcall **)(char *, const struct CRegion *))(*((_QWORD *)this + 62) + 40LL))((char *)this + 496, a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x76u);
  }
  return v5;
}
