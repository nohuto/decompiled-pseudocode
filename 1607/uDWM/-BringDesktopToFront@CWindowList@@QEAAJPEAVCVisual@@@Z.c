/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002BD20
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180030654 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180045E84 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180032BE0 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18003796C (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 i; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  __int16 v12; // [rsp+3Ch] [rbp-Ch]

  v2 = *((_QWORD *)this + 10);
  v11 = -1;
  v12 = 0;
  for ( i = v2 + 32;
        VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&i);
        CVisual::SetOpacity(*(CVisual **)(*(_QWORD *)(i + 16) + 8LL * v11), 0.0) )
  {
    ;
  }
  CVisual::SetOpacity(a2, 1.0);
  v5 = CVisual::MoveToFront(a2, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3E2u);
  }
  else
  {
    v7 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3E3u);
    }
    else
    {
      v8 = CVisual::RenderRecursive(*((CVisual **)this + 10));
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3E4u);
    }
  }
  return v6;
}
