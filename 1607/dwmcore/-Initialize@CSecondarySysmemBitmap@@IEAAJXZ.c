/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18001F768
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z @ 0x18001F2D0 (-Create@CSecondarySysmemBitmap@@SAJIIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@W4ColorSpace@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  _DWORD *v1; // rbp
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  void *(__fastcall *v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v8; // rdx
  void *v9; // rax
  int v10; // eax

  v1 = (_DWORD *)((char *)this + 120);
  v3 = HrCalcDWordAlignedScanlineStride(
         *((_DWORD *)this + 28),
         *((enum DXGI_FORMAT *)this + 31),
         (unsigned int *)this + 30);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x35u);
  }
  else
  {
    v5 = *((unsigned int *)this + 29);
    v6 = (unsigned int)*v1;
    v4 = 0;
    if ( this != (CSecondarySysmemBitmap *)-136LL && *((_DWORD *)this + 29) && *v1 && v6 < 0xFFFFFFFFFFFFFFFFuLL / v5 )
    {
      v7 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL);
      v8 = v5 * v6;
      if ( v7 == WPF::ProcessHeapImpl::Alloc )
        v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v8);
      else
        v9 = v7(WPF::g_pProcessHeap, v8);
      *((_QWORD *)this + 17) = v9;
      if ( !v9 )
        v4 = -2147024882;
    }
    else
    {
      v4 = -2147024809;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x3Cu);
    }
    else
    {
      v10 = -1;
      if ( (unsigned int)*v1 * (unsigned __int64)*((unsigned int *)this + 29) <= 0xFFFFFFFF )
        v10 = *v1 * *((_DWORD *)this + 29);
      *((_DWORD *)this + 36) = v10;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
  }
  return (unsigned int)v4;
}
