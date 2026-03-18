/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18009845C
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x180111F44 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  CScopedClipStack *v2; // rcx
  __int64 v3; // rdi
  int v4; // eax
  unsigned int i; // edi
  unsigned int v6; // eax
  LPVOID (__fastcall *v7)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v8; // rdx
  LPVOID v9; // rax
  LPVOID v10; // rsi
  int v11; // r9d

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 80LL);
  *((_DWORD *)this + 518) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 520);
  if ( v4 != 8 )
  {
    *((_DWORD *)this + 520) = v4 + 1;
    goto LABEL_3;
  }
  v6 = *((_DWORD *)this + 524);
  if ( v6 > 8 )
    v3 = v6;
  v2 = (CScopedClipStack *)(unsigned int)v3;
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 519) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 <= 0x10 )
    {
      v11 = -2147024809;
    }
    else
    {
      v7 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      v8 = 16LL * (unsigned int)v3;
      if ( v7 == WPF::ProcessHeapImpl::Alloc )
        v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v8);
      else
        v9 = v7(WPF::g_pProcessHeap, v8);
      v10 = v9;
      if ( v9 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 261));
        *((_QWORD *)this + 261) = v10;
        *((_DWORD *)this + 519) = v3;
        goto LABEL_9;
      }
      v11 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xF3u);
  }
LABEL_9:
  *((_DWORD *)this + 524) = 0;
  *((_DWORD *)this + 520) = 0;
LABEL_3:
  for ( i = 0; i < *((_DWORD *)this + 214); ++i )
    CScopedClipStack::FreeCpuClipStackState(
      v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 104) + 120LL * i));
  *((_DWORD *)this + 214) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 832, 120LL);
}
