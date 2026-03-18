/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x18000D440 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800326A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800F9F2C (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourc.c)
 * Callees:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18000D1A4 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18000D308 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002D40C (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x180030940 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x180030B80 (-GetAdapterLuid@CD2DBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x1800F9E74 (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternalNoRef(
        CD2DBitmapCache *this,
        struct _LUID a2,
        int a3,
        __m128i *a4,
        _QWORD *a5)
{
  char *v5; // r14
  __int64 v6; // rdi
  unsigned int v8; // r15d
  __int64 v9; // rbx
  struct _LUID (__fastcall *v10)(CD2DBitmap *__hidden); // rdi
  _QWORD *AdapterLuid; // rax
  struct _LUID v12; // rdx
  int v13; // eax
  bool (__fastcall *v14)(CD2DBitmap *__hidden); // rdi
  bool v15; // al
  int updated; // eax
  struct CSecondaryD2DBitmap *v18; // rsi
  _QWORD *v19; // rax
  unsigned __int32 v20; // esi
  unsigned __int32 v21; // ebx
  unsigned int v22; // edi
  unsigned __int32 v23; // eax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-50h]
  struct CSecondaryD2DBitmap *v26[2]; // [rsp+30h] [rbp-40h] BYREF
  __m128i v27; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int32 v29; // [rsp+54h] [rbp-1Ch]
  unsigned __int32 v30; // [rsp+58h] [rbp-18h]
  unsigned __int32 v31; // [rsp+5Ch] [rbp-14h]

  v5 = 0LL;
  v6 = *((_QWORD *)this + 6);
  v8 = 0;
  *a5 = 0LL;
  if ( !v6 )
  {
    v8 = -2003292412;
    v25 = 216;
LABEL_41:
    v24 = v8;
LABEL_52:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v25);
    return v8;
  }
  if ( !a4 )
  {
    v28 = 0;
    LODWORD(v26[0]) = 0;
    (*(void (__fastcall **)(__int64, unsigned int *, struct CSecondaryD2DBitmap **))(*(_QWORD *)v6 + 24LL))(
      v6,
      &v28,
      v26);
    v27.m128i_i64[1] = __PAIR64__((unsigned int)v26[0], v28);
    v27.m128i_i64[0] = 0LL;
    goto LABEL_4;
  }
  v27 = *a4;
  v20 = v27.m128i_i32[1] - 1;
  v21 = v27.m128i_i32[2] + 1;
  v22 = _mm_cvtsi128_si32(v27) - 1;
  LODWORD(v26[0]) = v27.m128i_i32[3] + 1;
  CD2DBitmapCache::GetBitmapRect(this, (struct MilRectU *)&v28);
  v23 = v27.m128i_i32[3] + 1;
  if ( v28 > v22 )
    v22 = v28;
  v27.m128i_i32[0] = v22;
  if ( v29 > v20 )
    v20 = v29;
  v27.m128i_i32[1] = v20;
  if ( v30 < v21 )
    v21 = v30;
  v27.m128i_i32[2] = v21;
  if ( v31 < v23 )
    v23 = v31;
  v27.m128i_i32[3] = v23;
  if ( v21 <= v22 || v23 <= v20 )
    v27 = 0uLL;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v27) )
  {
    v8 = -2147024809;
    v25 = 247;
    goto LABEL_41;
  }
LABEL_4:
  v9 = *((_QWORD *)this + 7);
  if ( !v9 )
  {
LABEL_46:
    v12 = a2;
    goto LABEL_16;
  }
  v10 = *(struct _LUID (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v9 + 24LL);
  if ( v10 == CD2DBitmap::GetAdapterLuid )
    AdapterLuid = (_QWORD *)CD2DBitmap::GetAdapterLuid(*((CD2DBitmap **)this + 7));
  else
    AdapterLuid = (_QWORD *)((__int64 (__fastcall *)(_QWORD, struct CSecondaryD2DBitmap **))v10)(
                              *((_QWORD *)this + 7),
                              v26);
  v12 = a2;
  if ( *AdapterLuid == a2 )
  {
    v13 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)this + 6) + 48LL))(
                       *((_QWORD *)this + 6),
                       v26);
    if ( v13 == DisplayId::None || v13 == a3 || a3 == DisplayId::All )
    {
      v14 = *(bool (__fastcall **)(CD2DBitmap *__hidden))(**((_QWORD **)this + 7) + 40LL);
      v15 = v14 == CD2DBitmap::IsHardwareProtected
          ? CD2DBitmap::IsHardwareProtected(*((CD2DBitmap **)this + 7))
          : v14(*((CD2DBitmap **)this + 7));
      if ( !v15 || CComposition::s_cHwProtectedEntities && !CComposition::s_bHwProtectionTempDisabled )
      {
        *a5 = *((_QWORD *)this + 7);
        return v8;
      }
    }
    goto LABEL_46;
  }
LABEL_16:
  v26[0] = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v18 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)this + 10) + 8LL * v8);
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)v18 + 13) + 24LL))(
                        (__int64)v18 + 104,
                        &v28);
      v12 = a2;
      if ( *v19 == a2 )
        break;
      if ( ++v8 >= *((_DWORD *)this + 26) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    updated = CD2DBitmapCache::CreateAndCacheBitmap(this, v12, v26);
    v8 = updated;
    if ( updated < 0 )
    {
      v25 = 290;
LABEL_51:
      v24 = updated;
      goto LABEL_52;
    }
    v18 = v26[0];
  }
  updated = CD2DBitmapCache::UpdateCachedBitmap(this, (__int64)&v27, (__int64)v18);
  v8 = updated;
  if ( updated < 0 )
  {
    v25 = 293;
    goto LABEL_51;
  }
  if ( v18 )
    v5 = (char *)v18 + 104;
  *a5 = v5;
  return v8;
}
