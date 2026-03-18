/*
 * XREFs of ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1800128C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180012F00 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x180150F1C (--_ECHwLinearGradientBrush@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrushPoolManager::CreateHwBrush(
        CHwLinearGradientBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct CHwBrush *v14; // rdi

  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         112LL);
  if ( v8 )
  {
    v9 = *((_QWORD *)this + 10);
    *(_QWORD *)(v8 + 8) = &CMILRefCountBase::`vftable';
    *(_QWORD *)(v8 + 8) = &CMILPoolResource::`vftable';
    *(_DWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 40) = v9;
    *(_QWORD *)(v8 + 32) = &CHwBrush::`vftable';
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_QWORD *)(v8 + 72) = v8 + 64;
    *(_QWORD *)(v8 + 64) = v8 + 64;
    *(_QWORD *)(v8 + 96) = 0LL;
    *(_QWORD *)(v8 + 104) = 0LL;
    *(_QWORD *)v8 = &CHwLinearGradientBrush::`vftable'{for `IMILCacheableResource'};
    *(_QWORD *)(v8 + 8) = &CHwLinearGradientBrush::`vftable'{for `CMILPoolResource'};
    *(_QWORD *)(v8 + 32) = &CHwLinearGradientBrush::`vftable'{for `CHwBrush'};
    *(_DWORD *)(v8 + 80) = 1;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v10 = CHwLinearGradientBrush::SetBrushAndContext((CHwLinearGradientBrush *)v8, a2, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x36u);
      CHwLinearGradientBrush::`vector deleting destructor'((CHwLinearGradientBrush *)v8, 1u);
    }
    else
    {
      v12 = *((_QWORD *)this + 4);
      v13 = v8 + 64;
      *(_QWORD *)(v8 + 64) = v12;
      *(_QWORD *)(v8 + 72) = (char *)this + 32;
      if ( *(CHwLinearGradientBrushPoolManager **)(v12 + 8) != (CHwLinearGradientBrushPoolManager *)((char *)this + 32) )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = v13;
      v14 = (struct CHwBrush *)(v8 + 32);
      *((_QWORD *)this + 4) = v13;
      *a4 = v14;
      (**(void (__fastcall ***)(struct CHwBrush *))v14)(v14);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  return v11;
}
