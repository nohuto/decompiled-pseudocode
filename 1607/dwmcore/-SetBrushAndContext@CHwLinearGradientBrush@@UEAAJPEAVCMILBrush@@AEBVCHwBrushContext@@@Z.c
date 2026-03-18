/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180018AE0
 * Callers:
 *     ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x180018DF0 (-CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPE.c)
 * Callees:
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x180018848 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwLinearGradientBrush::SetBrushAndContext(
        CHwLinearGradientBrush *this,
        struct CMILBrush *a2,
        const struct CMILMatrix **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx

  if ( !*((_QWORD *)this + 12) )
  {
    v9 = *((_QWORD *)this + 5);
    v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            296LL);
    v11 = v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 16) = v9;
      *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
      *(_DWORD *)(v10 + 8) = 0;
      *(_QWORD *)v10 = &CHwLinearGradientColorSource::`vftable';
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_DWORD *)(v10 + 92) = 0;
      *(_DWORD *)(v10 + 96) = 1;
      *(_DWORD *)(v10 + 100) = 1;
      *(_DWORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 112) = 1LL;
      *(_QWORD *)(v10 + 120) = 0LL;
      *(_QWORD *)(v10 + 152) = 0LL;
      *(_DWORD *)(v10 + 160) = 0;
      *(_QWORD *)(v10 + 128) = 0LL;
      *(_QWORD *)(v10 + 136) = 0LL;
      *(_QWORD *)(v10 + 144) = 0LL;
      memset_0((void *)(v10 + 168), 0, 0x2CuLL);
      *(_DWORD *)(v11 + 292) = 0;
      *(_DWORD *)(v11 + 104) = -1;
      *(_DWORD *)(v11 + 108) = -1;
      *(_QWORD *)(v11 + 216) = 0LL;
      *(_BYTE *)(v11 + 224) = 1;
    }
    else
    {
      v11 = 0LL;
    }
    *((_QWORD *)this + 12) = v11;
    if ( !v11 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD1u);
      return v7;
    }
    (**(void (__fastcall ***)(__int64))v11)(v11);
  }
  v6 = CHwLinearGradientBrush::SetBrushAndContextInternal(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xDAu);
  return v7;
}
