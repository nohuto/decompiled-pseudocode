/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180058F14
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800434C0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800FCF9C (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  int v4; // eax
  unsigned int i; // ebx
  unsigned int v6; // eax
  int v7; // eax
  void **v8; // [rsp+20h] [rbp-18h]
  unsigned __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 76LL);
  *((_DWORD *)this + 468) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 470);
  if ( v4 == 8 )
  {
    v6 = *((_DWORD *)this + 474);
    v2 = 0xFFFFFFFFLL;
    if ( v6 > 8 )
      v3 = v6;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 469) )
    {
      v9 = 0LL;
      v7 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 16LL, (unsigned int)v3, (unsigned __int64)&v9, v8);
      if ( v7 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 236));
        *((_QWORD *)this + 236) = v9;
        *((_DWORD *)this + 469) = v3;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF3u);
      }
    }
    *((_DWORD *)this + 474) = 0;
    *((_DWORD *)this + 470) = 0;
  }
  else
  {
    *((_DWORD *)this + 470) = v4 + 1;
  }
  for ( i = 0; i < *((_DWORD *)this + 204); ++i )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 99) + 104LL * i));
  *((_DWORD *)this + 204) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 792, 104LL);
}
