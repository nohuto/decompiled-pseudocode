/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x18015BBF0
 * Callers:
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18015B910 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbp
  int v4; // eax
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

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
        v5 = 0LL;
        v4 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 0x10uLL, (unsigned int)v3, &v5);
        if ( v4 >= 0 )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 16));
          *(_QWORD *)(a1 + 16) = v5;
          *(_DWORD *)(a1 + 4) = v3;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF3u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v1 + 1;
  }
}
