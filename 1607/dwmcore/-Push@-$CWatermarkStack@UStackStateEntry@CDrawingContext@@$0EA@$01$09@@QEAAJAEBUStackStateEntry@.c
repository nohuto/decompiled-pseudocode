/*
 * XREFs of ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800AD570
 * Callers:
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x18000388C (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180004070 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x1800040C0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x180124684 (-PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180124730 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v4; // rbp
  unsigned int v7; // eax
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v10; // esi
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v12; // rdx
  LPVOID v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v2 = a1[1];
  v3 = 0;
  v4 = 0LL;
  if ( *a1 != (_DWORD)v2 )
    goto LABEL_2;
  v10 = 2 * v2;
  if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
  {
    v15 = 76;
    goto LABEL_25;
  }
  if ( v10 <= 0x40 )
    v10 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v10 <= 0x10 )
  {
    v3 = -2147024809;
  }
  else
  {
    v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v12 = 16LL * v10;
    if ( v11 == WPF::ProcessHeapImpl::Alloc )
      v13 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v12);
    else
      v13 = v11(WPF::g_pProcessHeap, v12);
    v4 = v13;
    if ( !v13 )
      v3 = -2147024882;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x54u);
    goto LABEL_5;
  }
  v14 = 16LL * *a1;
  if ( v14 > 0xFFFFFFFF )
  {
    v15 = 86;
LABEL_25:
    v3 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v15);
    goto LABEL_5;
  }
  v3 = 0;
  memcpy_0(v4, *((const void **)a1 + 2), (unsigned int)v14);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)a1 + 2));
  *((_QWORD *)a1 + 2) = v4;
  v4 = 0LL;
  a1[1] = v10;
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *a2;
  v7 = *a1;
  if ( a1[6] > *a1 )
    v7 = a1[6];
  a1[6] = v7;
LABEL_5:
  v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v8 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
  else
    v8(WPF::g_pProcessHeap, v4);
  return (unsigned int)v3;
}
