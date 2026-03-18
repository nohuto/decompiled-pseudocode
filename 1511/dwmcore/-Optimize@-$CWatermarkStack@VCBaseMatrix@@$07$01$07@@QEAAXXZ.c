/*
 * XREFs of ?Optimize@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ @ 0x18005DD08
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800434C0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004ECA0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CBaseMatrix,8,2,8>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbp
  int v4; // eax
  void **v5; // [rsp+20h] [rbp-18h]
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 8LL;
  if ( v1 == 8 )
  {
    if ( *(_DWORD *)(a1 + 24) > 8u )
      v2 = *(unsigned int *)(a1 + 24);
    if ( (unsigned __int64)(3 * v2) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v2) <= *(_DWORD *)(a1 + 4) )
    {
      v6 = 0LL;
      v4 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 64LL, (unsigned int)v2, (unsigned __int64)&v6, v5);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xF3u);
      }
      else
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v6;
        *(_DWORD *)(a1 + 4) = v2;
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v1 + 1;
  }
}
