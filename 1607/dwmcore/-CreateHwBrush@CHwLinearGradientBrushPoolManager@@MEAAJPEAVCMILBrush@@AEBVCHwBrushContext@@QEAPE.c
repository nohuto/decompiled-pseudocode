/*
 * XREFs of ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180018DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180018AE0 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801819CC (--_ECHwLinearGradientBrush@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrushPoolManager::CreateHwBrush(
        CHwLinearGradientBrushPoolManager *this,
        struct CMILBrush *a2,
        const struct CMILMatrix **a3,
        struct CHwBrush **const a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx

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
      v12 = (_QWORD *)((char *)this + 32);
      v13 = *((_QWORD *)this + 4);
      v14 = (_QWORD *)(v8 + 64);
      if ( *(CHwLinearGradientBrushPoolManager **)(v13 + 8) != (CHwLinearGradientBrushPoolManager *)((char *)this + 32) )
        __fastfail(3u);
      *(_QWORD *)(v8 + 72) = v12;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v12 = v14;
      *a4 = (struct CHwBrush *)(v8 + 32);
      (**(void (__fastcall ***)(__int64))(v8 + 32))(v8 + 32);
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
  }
  return v11;
}
