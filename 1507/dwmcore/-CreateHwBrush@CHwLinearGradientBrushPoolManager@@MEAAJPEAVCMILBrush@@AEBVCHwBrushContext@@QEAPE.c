/*
 * XREFs of ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180142510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801424B4 (--_ECHwLinearGradientBrush@@UEAAPEAXI@Z.c)
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180142E70 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrushPoolManager::CreateHwBrush(
        CHwLinearGradientBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3,
        struct CHwBrush **const a4)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // esi
  int v11; // eax
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
    v11 = CHwLinearGradientBrush::SetBrushAndContext((CHwLinearGradientBrush *)v8, a2, a3);
    v10 = v11;
    if ( v11 >= 0 )
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
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x36u);
      CHwLinearGradientBrush::`vector deleting destructor'((CHwLinearGradientBrush *)v8, 1);
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  return v10;
}
