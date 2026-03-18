/*
 * XREFs of ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180152154
 * Callers:
 *     ?GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180151E80 (-GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180151FF0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v2; // esi
  int v3; // eax
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 48LL))(
          *((_QWORD *)this + 9) + 16LL,
          0LL,
          v5) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 56LL))(
           *((_QWORD *)this + 9) + 16LL,
           v5,
           *((_QWORD *)this + 6));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1B9u);
  }
  return v2;
}
