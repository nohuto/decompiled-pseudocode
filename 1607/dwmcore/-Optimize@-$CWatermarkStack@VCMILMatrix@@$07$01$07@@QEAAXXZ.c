/*
 * XREFs of ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x180025850
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdi
  unsigned __int64 v4; // rdx
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  void *v6; // rax
  void *v7; // rsi
  int v8; // r9d

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 8LL;
  if ( v1 != 8 )
  {
    *(_DWORD *)(a1 + 8) = v1 + 1;
    return;
  }
  if ( *(_DWORD *)(a1 + 24) > 8u )
    v2 = *(unsigned int *)(a1 + 24);
  if ( (unsigned __int64)(3 * v2) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    goto LABEL_7;
  }
  if ( (unsigned int)(3 * v2) <= *(_DWORD *)(a1 + 4) )
  {
    if ( (_DWORD)v2 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v2 > 0x44 )
    {
      v4 = 68LL * (unsigned int)v2;
      v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL);
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
        *(_DWORD *)(a1 + 4) = v2;
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
