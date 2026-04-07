/*
 * XREFs of ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800353B0
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180013474 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180026E10 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089BB8 (-_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDrawBitmapInstruction::Create(struct CResource *a1, struct CDrawBitmapInstruction **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  struct CDrawBitmapInstruction *v5; // rax
  struct CDrawBitmapInstruction *v6; // rdi
  unsigned int v7; // ebx
  CBaseObject *v8; // rcx

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (struct CDrawBitmapInstruction *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x18uLL);
  else
    v5 = (struct CDrawBitmapInstruction *)v4(WPF::g_pProcessHeap, 24LL);
  v6 = v5;
  v7 = 0;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *(_QWORD *)v5 = &CDrawBitmapInstruction::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v6 + 2);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)v6 + 2) = 0LL;
    }
    if ( a1 )
    {
      *((_QWORD *)v6 + 2) = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    }
    *a2 = v6;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2Du);
  }
  return v7;
}
