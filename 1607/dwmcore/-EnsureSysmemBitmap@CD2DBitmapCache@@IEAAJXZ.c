/*
 * XREFs of ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800105A0
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x18001063C (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 *     ?GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180132CC0 (-GetLegacyBitmapSource@CD2DBitmapCache@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z @ 0x18001F2D0 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::EnsureSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v1; // ebx
  char *v2; // rbp
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (char *)this + 72;
  if ( !*((_QWORD *)this + 9) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 6) + 24LL))(
      *((_QWORD *)this + 6),
      &v10,
      &v9);
    v4 = *((_QWORD *)this + 6);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    v7 = CSecondarySysmemBitmap::Create(v10, v9, v6, v5, *((_DWORD *)this + 16), v2);
    v1 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1A5u);
  }
  return v1;
}
