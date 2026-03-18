/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18001063C
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18009F8C4 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 * Callees:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180010484 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800105A0 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180011E00 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 (__fastcall *v7)(__int64, __int64, _BYTE *); // rax
  char IsValid; // al
  int v9; // eax
  int v11; // eax
  int updated; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3 + 264;
  v5 = 0;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)(a3 + 264) + 48LL);
  if ( (char *)v7 == (char *)CSecondaryBitmap::IsValid )
    IsValid = CSecondaryBitmap::IsValid(v3, a2, v16);
  else
    IsValid = v7(v3, a2, v16);
  if ( !IsValid )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 80LL))(*((_QWORD *)this + 6)) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v16, *((_QWORD *)this + 6));
      v5 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x17Eu);
    }
    else
    {
      v11 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x182u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL)
                                                                            + 48LL))(
                  *((_QWORD *)this + 9) + 16LL,
                  a2,
                  0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v5 = updated, updated >= 0) )
      {
        v13 = *((_QWORD *)this + 9);
        if ( v13 )
          v14 = v13 + 96;
        else
          v14 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v16, v14);
        v5 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x18Cu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x186u);
      }
    }
  }
  return v5;
}
