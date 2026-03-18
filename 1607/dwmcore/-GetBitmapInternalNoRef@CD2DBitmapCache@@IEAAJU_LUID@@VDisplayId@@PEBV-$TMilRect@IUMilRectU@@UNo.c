/*
 * XREFs of ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18009F8C4
 * Callers:
 *     ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x180010510 (-GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18010EF8C (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourc.c)
 * Callees:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18001063C (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180010764 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180034308 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180081744 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x18009FAE0 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@CD2DBitmap@@UEBA?AU_LUID@@XZ @ 0x18009FB90 (-GetAdapterLuid@CD2DBitmap@@UEBA-AU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z @ 0x18010EF3C (-GetBitmapRect@CD2DBitmapCache@@IEBAXPEAUMilRectU@@@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmapInternalNoRef(
        CD2DBitmapCache *this,
        struct _LUID a2,
        int a3,
        __m128i *a4,
        _QWORD *a5)
{
  char *v5; // rsi
  unsigned int v7; // r14d
  __int64 v8; // rcx
  CD2DBitmap *v9; // rcx
  struct _LUID (__fastcall *v10)(CD2DBitmap *__hidden); // rax
  _QWORD *AdapterLuid; // rax
  struct _LUID v12; // rdx
  int v13; // eax
  CD2DBitmap *v14; // rcx
  bool (__fastcall *v15)(CD2DBitmap *__hidden); // rax
  char v16; // al
  unsigned int v18; // edi
  int updated; // eax
  struct CSecondaryD2DBitmap *v20; // rbx
  _QWORD *v21; // rax
  int v22; // r9d
  unsigned __int32 v23; // r13d
  unsigned __int32 v24; // ebx
  unsigned int v25; // edi
  unsigned __int32 v26; // eax
  unsigned int v27; // [rsp+20h] [rbp-50h]
  struct CSecondaryD2DBitmap *v28[2]; // [rsp+30h] [rbp-40h] BYREF
  __m128i v29; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int32 v31; // [rsp+54h] [rbp-1Ch]
  unsigned __int32 v32; // [rsp+58h] [rbp-18h]
  unsigned __int32 v33; // [rsp+5Ch] [rbp-14h]

  v5 = 0LL;
  v7 = 0;
  v8 = *((_QWORD *)this + 6);
  *a5 = 0LL;
  if ( !v8 )
  {
    v7 = -2003292412;
    v27 = 216;
LABEL_26:
    v22 = v7;
LABEL_50:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v27);
    return v7;
  }
  if ( !a4 )
  {
    v30 = 0;
    LODWORD(v28[0]) = 0;
    (*(void (__fastcall **)(__int64, unsigned int *, struct CSecondaryD2DBitmap **))(*(_QWORD *)v8 + 24LL))(
      v8,
      &v30,
      v28);
    v29.m128i_i64[1] = __PAIR64__((unsigned int)v28[0], v30);
    v29.m128i_i64[0] = 0LL;
    goto LABEL_4;
  }
  v29 = *a4;
  v23 = v29.m128i_i32[1] - 1;
  v24 = v29.m128i_i32[2] + 1;
  v25 = _mm_cvtsi128_si32(v29) - 1;
  LODWORD(v28[0]) = v29.m128i_i32[3] + 1;
  CD2DBitmapCache::GetBitmapRect(this, (struct MilRectU *)&v30);
  v26 = v29.m128i_i32[3] + 1;
  if ( v30 > v25 )
    v25 = v30;
  v29.m128i_i32[0] = v25;
  if ( v31 > v23 )
    v23 = v31;
  v29.m128i_i32[1] = v23;
  if ( v32 < v24 )
    v24 = v32;
  v29.m128i_i32[2] = v24;
  if ( v33 < v26 )
    v26 = v33;
  v29.m128i_i32[3] = v26;
  if ( v24 <= v25 || v26 <= v23 )
    v29 = 0uLL;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v29) )
  {
    v7 = -2147024809;
    v27 = 247;
    goto LABEL_26;
  }
LABEL_4:
  v9 = (CD2DBitmap *)*((_QWORD *)this + 7);
  if ( !v9 )
  {
LABEL_44:
    v12 = a2;
    goto LABEL_16;
  }
  v10 = *(struct _LUID (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v9 + 24LL);
  if ( v10 == CD2DBitmap::GetAdapterLuid )
    AdapterLuid = (_QWORD *)CD2DBitmap::GetAdapterLuid(v9);
  else
    AdapterLuid = (_QWORD *)((__int64 (__fastcall *)(CD2DBitmap *, struct CSecondaryD2DBitmap **))v10)(v9, v28);
  v12 = a2;
  if ( *AdapterLuid == a2 )
  {
    v13 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct CSecondaryD2DBitmap **))(**((_QWORD **)this + 6) + 48LL))(
                       *((_QWORD *)this + 6),
                       v28);
    if ( v13 == DisplayId::None || v13 == a3 || a3 == DisplayId::All )
    {
      v14 = (CD2DBitmap *)*((_QWORD *)this + 7);
      v15 = *(bool (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v14 + 40LL);
      v16 = v15 == CD2DBitmap::IsHardwareProtected ? CD2DBitmap::IsHardwareProtected(v14) : ((__int64 (*)(void))v15)();
      if ( !v16 || !(unsigned __int8)CD3DDeviceManager::IsHardwareProtectionDisabled() )
      {
        *a5 = *((_QWORD *)this + 7);
        return v7;
      }
    }
    goto LABEL_44;
  }
LABEL_16:
  v18 = 0;
  v28[0] = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v20 = *(struct CSecondaryD2DBitmap **)(*((_QWORD *)this + 10) + 8LL * v18);
      v21 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, unsigned int *))(*((_QWORD *)v20 + 13) + 24LL))(
                        (__int64)v20 + 104,
                        &v30);
      v12 = a2;
      if ( *v21 == a2 )
        break;
      if ( ++v18 >= *((_DWORD *)this + 26) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    updated = CD2DBitmapCache::CreateAndCacheBitmap(this, v12, v28);
    v7 = updated;
    if ( updated < 0 )
    {
      v27 = 290;
LABEL_49:
      v22 = updated;
      goto LABEL_50;
    }
    v20 = v28[0];
  }
  updated = CD2DBitmapCache::UpdateCachedBitmap(this, (__int64)&v29, (__int64)v20);
  v7 = updated;
  if ( updated < 0 )
  {
    v27 = 293;
    goto LABEL_49;
  }
  if ( v20 )
    v5 = (char *)v20 + 104;
  *a5 = v5;
  return v7;
}
