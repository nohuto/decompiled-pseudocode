/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180027D1C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180015638 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        float a5,
        int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v9; // rdx
  float v11; // xmm1_4
  void *(*v12)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rbp
  void *v13; // rax
  _QWORD *v14; // r8
  char v16; // al

  v6 = 0;
  v7 = a2;
  v9 = *(_QWORD *)(a1 + 8LL * a2 + 360);
  if ( v9 )
  {
    --*(_DWORD *)(v9 + 8);
    v16 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v9 + 8) )
      v16 = 1;
    *(_QWORD *)(a1 + 8 * v7 + 360) = 0LL;
    CDesktopManager::s_fTimelineDirty = v16;
  }
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - a5)) & _xmm);
  if ( v11 < 0.00000011920929 )
    a6 = 0;
  v12 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v12 == WPF::ProcessHeapImpl::AllocClear )
    v13 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
  else
    v13 = (void *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v12)(WPF::g_pProcessHeap, 80LL);
  if ( v13 )
  {
    CTimelineBase::CTimelineBase((__int64)v13, a3, a4, a5, a6);
    *v14 = &CTimeline<float>::`vftable';
  }
  else
  {
    v14 = 0LL;
  }
  *(_QWORD *)(a1 + 8 * v7 + 360) = v14;
  if ( !v14 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x93u);
  }
  return v6;
}
