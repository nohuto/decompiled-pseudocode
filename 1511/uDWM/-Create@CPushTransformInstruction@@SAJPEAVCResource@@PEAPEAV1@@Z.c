/*
 * XREFs of ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180018388
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C908 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180018FA8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001B00C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180035160 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D688 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CPushTransformInstruction::Create(struct CResource *a1, struct CPushTransformInstruction **a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  struct CPushTransformInstruction *v5; // rax
  struct CPushTransformInstruction *v6; // rdi
  unsigned int v7; // ebx
  CBaseObject *v8; // rcx

  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct CPushTransformInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x18uLL);
  else
    v5 = (struct CPushTransformInstruction *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(
                                               WPF::g_pProcessHeap,
                                               24LL);
  v6 = v5;
  v7 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CPushTransformInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v6 + 2);
    if ( v8 )
      CBaseObject::Release(v8);
    *((_QWORD *)v6 + 2) = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    *a2 = v6;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2Eu);
  }
  return v7;
}
