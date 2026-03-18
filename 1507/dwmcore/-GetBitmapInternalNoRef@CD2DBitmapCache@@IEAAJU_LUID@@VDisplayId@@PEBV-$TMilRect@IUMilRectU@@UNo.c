/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18001B640
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180007BA0 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18001E810 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800DD2FC (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourc.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180019BBC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18001B870 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x18001BAA0 (-GetAdapterLuid@CD2DBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x1800DD3DC (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180151BF4 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x180151FF0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternalNoRef(
        CD2DBitmapCache *this,
        struct _LUID a2,
        int a3,
        __m128i *a4,
        _QWORD *a5)
{
  char *v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rbx
  struct _LUID (__fastcall *v9)(CD2DBitmap *__hidden); // rsi
  _QWORD *AdapterLuid; // rax
  struct _LUID v11; // rdx
  int v12; // eax
  bool (__fastcall *v13)(CD2DBitmap *__hidden); // rsi
  bool v14; // al
  __int64 result; // rax
  unsigned __int32 v16; // r14d
  unsigned __int32 v17; // ebx
  unsigned __int32 v18; // r13d
  unsigned int v19; // esi
  unsigned int v20; // r13d
  struct CSecondaryD2DBitmap *v21; // r14
  _QWORD *v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  __m128i v25; // [rsp+30h] [rbp-40h] BYREF
  struct CSecondaryD2DBitmap *v26; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int32 v27; // [rsp+48h] [rbp-28h]
  unsigned __int32 v28; // [rsp+4Ch] [rbp-24h]
  unsigned int v29; // [rsp+50h] [rbp-20h] BYREF

  v5 = 0LL;
  v6 = *((_QWORD *)this + 6);
  *a5 = 0LL;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0xD8u);
    return 2291674884LL;
  }
  if ( a4 )
  {
    v25 = *a4;
    v16 = v25.m128i_i32[1] - 1;
    v17 = v25.m128i_i32[2] + 1;
    v18 = v25.m128i_i32[3] + 1;
    v19 = _mm_cvtsi128_si32(v25) - 1;
    CD2DBitmapCache::GetBitmapRect(this, (struct MilRectU *)&v26);
    if ( (unsigned int)v26 > v19 )
      v19 = (unsigned int)v26;
    v25.m128i_i32[0] = v19;
    if ( HIDWORD(v26) > v16 )
      v16 = HIDWORD(v26);
    v25.m128i_i32[1] = v16;
    if ( v27 < v17 )
      v17 = v27;
    v25.m128i_i32[2] = v17;
    if ( v28 < v18 )
      v18 = v28;
    v25.m128i_i32[3] = v18;
    if ( v17 <= v19 || v18 <= v16 )
      v25 = 0uLL;
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v25) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xF7u);
      return 2147942487LL;
    }
  }
  else
  {
    v29 = 0;
    LODWORD(v26) = 0;
    (*(void (__fastcall **)(__int64, unsigned int *, struct CSecondaryD2DBitmap **))(*(_QWORD *)v6 + 24LL))(
      v6,
      &v29,
      &v26);
    v25.m128i_i64[1] = __PAIR64__((unsigned int)v26, v29);
    v25.m128i_i64[0] = 0LL;
  }
  v8 = *((_QWORD *)this + 7);
  if ( !v8 )
    goto LABEL_35;
  v9 = *(struct _LUID (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v8 + 24LL);
  if ( v9 == CD2DBitmap::GetAdapterLuid )
    AdapterLuid = (_QWORD *)CD2DBitmap::GetAdapterLuid(*((CD2DBitmap **)this + 7));
  else
    AdapterLuid = (_QWORD *)((__int64 (__fastcall *)(_QWORD, struct CSecondaryD2DBitmap **))v9)(
                              *((_QWORD *)this + 7),
                              &v26);
  v11 = a2;
  if ( *AdapterLuid == a2 )
  {
    v12 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)this + 6) + 48LL))(
                       *((_QWORD *)this + 6),
                       &v26);
    if ( v12 == DisplayId::None || v12 == a3 || a3 == DisplayId::All )
    {
      v13 = *(bool (__fastcall **)(CD2DBitmap *__hidden))(**((_QWORD **)this + 7) + 40LL);
      v14 = v13 == CD2DBitmap::IsHardwareProtected
          ? CD2DBitmap::IsHardwareProtected(*((CD2DBitmap **)this + 7))
          : v13(*((CD2DBitmap **)this + 7));
      if ( !v14 || CComposition::s_cHwProtectedEntities && !CComposition::s_bHwProtectionTempDisabled )
      {
        *a5 = *((_QWORD *)this + 7);
        return 0LL;
      }
    }
LABEL_35:
    v11 = a2;
  }
  v20 = 0;
  v26 = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v21 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)this + 10) + 8LL * v20);
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)v21 + 13) + 24LL))(
                        (__int64)v21 + 104,
                        &v29);
      v11 = a2;
      if ( *v22 == a2 )
        break;
      if ( ++v20 >= *((_DWORD *)this + 26) )
        goto LABEL_39;
    }
  }
  else
  {
LABEL_39:
    v23 = CD2DBitmapCache::CreateAndCacheBitmap(this, v11, &v26);
    v24 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x122u);
      return v24;
    }
    v21 = v26;
  }
  result = CD2DBitmapCache::UpdateCachedBitmap(this);
  v24 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x125u);
    return v24;
  }
  if ( v21 )
    v5 = (char *)v21 + 104;
  *a5 = v5;
  return result;
}
