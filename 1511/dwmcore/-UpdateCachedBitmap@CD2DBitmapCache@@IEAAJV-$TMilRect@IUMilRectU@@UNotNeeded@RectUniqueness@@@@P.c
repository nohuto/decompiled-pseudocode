/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18000D1A4
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18000D040 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18000D0E8 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v6; // edi
  int v7; // eax
  int v8; // eax
  int updated; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  _BYTE v14[16]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a3 + 264;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)(a3 + 264) + 48LL))(a3 + 264, a2, v14) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 80LL))(*((_QWORD *)this + 6)) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v14, *((_QWORD *)this + 6));
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17Eu);
    }
    else
    {
      v8 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL)
                                                                         + 48LL))(
               *((_QWORD *)this + 9) + 16LL,
               a2,
               0LL)
          || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v6 = updated, updated >= 0) )
        {
          v10 = *((_QWORD *)this + 9);
          if ( v10 )
            v11 = v10 + 96;
          else
            v11 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v14, v11);
          v6 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x18Cu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x186u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x182u);
      }
    }
  }
  return v6;
}
