/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180018D88
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z @ 0x180018838 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800A4418 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  _DWORD *v1; // rbx
  int v3; // eax
  WPF *v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  void **v9; // [rsp+20h] [rbp-18h]

  v1 = (_DWORD *)((char *)this + 120);
  v3 = HrCalcDWordAlignedScanlineStride(
         *((_DWORD *)this + 28),
         *((enum DXGI_FORMAT *)this + 31),
         (unsigned int *)this + 30);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x35u);
  }
  else
  {
    v6 = WPF::HrMalloc(v4, (unsigned int)*v1, *((unsigned int *)this + 29), (unsigned __int64)this + 136, v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Cu);
    }
    else
    {
      v7 = -1;
      if ( *((unsigned int *)this + 29) * (unsigned __int64)(unsigned int)*v1 <= 0xFFFFFFFF )
        v7 = *((_DWORD *)this + 29) * *v1;
      *((_DWORD *)this + 36) = v7;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
  }
  return v5;
}
