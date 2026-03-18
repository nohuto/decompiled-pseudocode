/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x180152F98
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z @ 0x180152CC4 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x180062A80 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  _DWORD *v1; // rbx
  int v3; // eax
  WPF *v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax

  v1 = (_DWORD *)((char *)this + 120);
  v3 = HrCalcDWordAlignedScanlineStride(*((unsigned int *)this + 28), *((_DWORD *)this + 31), (unsigned int *)this + 30);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = WPF::HrMalloc(v4, (unsigned int)*v1, *((unsigned int *)this + 29), (_QWORD *)this + 17);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = -1;
      if ( *((unsigned int *)this + 29) * (unsigned __int64)(unsigned int)*v1 <= 0xFFFFFFFF )
        v7 = *((_DWORD *)this + 29) * *v1;
      *((_DWORD *)this + 36) = v7;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x35u);
  }
  return v5;
}
