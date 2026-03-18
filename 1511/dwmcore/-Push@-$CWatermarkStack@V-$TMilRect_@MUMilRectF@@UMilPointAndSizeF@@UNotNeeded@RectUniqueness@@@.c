/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A2894
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
        unsigned int *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rdi
  unsigned int v5; // esi
  unsigned int v6; // eax
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rbp
  unsigned int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  void *v12; // r13
  void (__fastcall *v13)(WPF::ProcessHeapImpl *, void *); // r12
  void **v14; // [rsp+20h] [rbp-48h]
  void *v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h]

  v16 = a2;
  v2 = a1[1];
  v3 = 0LL;
  v5 = 0;
  v15 = 0LL;
  if ( *a1 == (_DWORD)v2 )
  {
    v9 = 2 * v2;
    if ( (unsigned __int64)(2 * v2) > 0xFFFFFFFF )
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_5;
    }
    if ( v9 <= 8 )
      v9 = 8;
    v10 = WPF::HrMalloc((WPF *)a1, 16LL, v9, (unsigned __int64)&v15, v14);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x54u);
    }
    else
    {
      v11 = 16LL * *a1;
      if ( v11 <= 0xFFFFFFFF )
      {
        v12 = v15;
        v5 = 0;
        memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v11);
        v13 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v13 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)a1 + 2));
        else
          v13(WPF::g_pProcessHeap, *((void **)a1 + 2));
        *((_QWORD *)a1 + 2) = v12;
        a1[1] = v9;
        goto LABEL_2;
      }
      v5 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    v3 = v15;
    goto LABEL_5;
  }
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (*a1)++) = *(_OWORD *)v16;
  v6 = *a1;
  if ( a1[6] > *a1 )
    v6 = a1[6];
  a1[6] = v6;
LABEL_5:
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v3);
  else
    v7(WPF::g_pProcessHeap, v3);
  return v5;
}
