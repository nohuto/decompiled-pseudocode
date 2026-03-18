/*
 * XREFs of ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180059260
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18002976C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
        unsigned int *a1,
        _OWORD *a2)
{
  void *v2; // rbp
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned int v7; // eax
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rdi
  unsigned int v10; // r12d
  int v11; // eax
  unsigned __int64 v12; // rax
  void *v13; // rsi
  void **v14; // [rsp+20h] [rbp-38h]
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v15 = 0LL;
  v5 = a1[1];
  v6 = 0;
  if ( *a1 != (_DWORD)v5 )
    goto LABEL_2;
  v10 = 2 * v5;
  if ( (unsigned __int64)(2 * v5) > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_5;
  }
  if ( v10 <= 8 )
    v10 = 8;
  v11 = WPF::HrMalloc((WPF *)a1, 16LL, v10, (unsigned __int64)&v15, v14);
  v6 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x54u);
LABEL_16:
    v2 = v15;
    goto LABEL_5;
  }
  v12 = 16LL * *a1;
  if ( v12 > 0xFFFFFFFF )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
    goto LABEL_16;
  }
  v13 = v15;
  v6 = 0;
  memcpy_0(v15, *((const void **)a1 + 2), (unsigned int)v12);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)a1 + 2));
  *((_QWORD *)a1 + 2) = v13;
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
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v8(WPF::g_pProcessHeap, v2);
  return v6;
}
