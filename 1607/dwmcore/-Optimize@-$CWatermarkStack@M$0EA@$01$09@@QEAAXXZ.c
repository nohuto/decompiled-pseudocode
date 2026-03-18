/*
 * XREFs of ?Optimize@?$CWatermarkStack@M$0EA@$01$09@@QEAAXXZ @ 0x1800AD920
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatermarkStack<float,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  SIZE_T v4; // rdx
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v6; // rax
  LPVOID v7; // rsi
  int v8; // r9d

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
    if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 4 )
    {
      v4 = 4LL * (unsigned int)v3;
      v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v5 == WPF::ProcessHeapImpl::Alloc )
        v6 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v4);
      else
        v6 = v5(WPF::g_pProcessHeap, v4);
      v7 = v6;
      if ( v6 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v7;
        *(_DWORD *)(a1 + 4) = v3;
        goto LABEL_7;
      }
      v8 = -2147024882;
    }
    else
    {
      v8 = -2147024809;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF3u);
  }
LABEL_7:
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
