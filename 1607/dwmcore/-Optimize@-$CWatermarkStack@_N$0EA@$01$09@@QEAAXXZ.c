/*
 * XREFs of ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x1800B2414
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatermarkStack<bool,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v5; // rax
  LPVOID v6; // rsi
  int v7; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 10 )
  {
    *(_DWORD *)(a1 + 8) = v1 + 1;
    return;
  }
  v3 = 64LL;
  if ( *(_DWORD *)(a1 + 24) > 0x40u )
    v3 = *(unsigned int *)(a1 + 24);
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
  }
  else if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 4) )
  {
    if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 1 )
    {
      v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v4 == WPF::ProcessHeapImpl::Alloc )
        v5 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v3);
      else
        v5 = v4(WPF::g_pProcessHeap, (unsigned int)v3);
      v6 = v5;
      if ( v5 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v6;
        *(_DWORD *)(a1 + 4) = v3;
        goto LABEL_7;
      }
      v7 = -2147024882;
    }
    else
    {
      v7 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF3u);
  }
LABEL_7:
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
