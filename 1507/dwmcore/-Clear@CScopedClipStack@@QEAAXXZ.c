/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18007375C
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18002DFF8 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002E3D4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800DF580 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  int v4; // eax
  unsigned int i; // ebx
  unsigned int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 0x4Cu);
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
      v8 = 0LL;
      v7 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 0x10uLL, (unsigned int)v3, &v8);
      if ( v7 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 236));
        *((_QWORD *)this + 236) = v8;
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
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 99, 0x68u);
}
