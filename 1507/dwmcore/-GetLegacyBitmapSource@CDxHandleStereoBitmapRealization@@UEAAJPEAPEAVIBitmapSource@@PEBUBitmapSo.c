/*
 * XREFs of ?GetLegacyBitmapSource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18014E460
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z @ 0x18014E6FC (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@IEBA_NW4StereoContext@@@Z.c)
 *     ?GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180151E80 (-GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetLegacyBitmapSource(
        CDxHandleStereoBitmapRealization *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  char *v5; // rcx
  __int64 v7; // rdx
  int LegacyBitmapSource; // eax
  unsigned int v9; // ebx
  int v10; // eax

  v5 = (char *)this - 16;
  if ( a3 )
    v7 = *((unsigned int *)a3 + 3);
  else
    v7 = 0LL;
  if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v5, v7) )
  {
    LegacyBitmapSource = CD2DBitmapCache::GetLegacyBitmapSource(this, a2, a3);
    v9 = LegacyBitmapSource;
    if ( LegacyBitmapSource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LegacyBitmapSource, 0x65u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(char *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*((_QWORD *)this + 60) + 72LL))(
            (char *)this + 480,
            a2,
            a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6Au);
  }
  return v9;
}
