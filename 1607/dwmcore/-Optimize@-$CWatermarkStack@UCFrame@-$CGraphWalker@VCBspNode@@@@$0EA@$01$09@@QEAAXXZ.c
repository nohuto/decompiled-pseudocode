/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x18018E1BC
 * Callers:
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18018DEF8 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v5; // rdx
  LPVOID v6; // rax
  LPVOID v7; // rsi
  int v8; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v3 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v3 = *(unsigned int *)(a1 + 24);
    if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 4) )
      {
        if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 0x10 )
        {
          v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
          v5 = 16LL * (unsigned int)v3;
          if ( v4 == WPF::ProcessHeapImpl::Alloc )
            v6 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v5);
          else
            v6 = v4(WPF::g_pProcessHeap, v5);
          v7 = v6;
          if ( v6 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              *(_QWORD *)(a1 + 16));
            *(_QWORD *)(a1 + 16) = v7;
            *(_DWORD *)(a1 + 4) = v3;
            goto LABEL_17;
          }
          v8 = -2147024882;
        }
        else
        {
          v8 = -2147024809;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF3u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
LABEL_17:
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  *(_DWORD *)(a1 + 8) = v1 + 1;
}
