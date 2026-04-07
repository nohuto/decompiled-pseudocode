/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800297B4
 * Callers:
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180029DC0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002A034 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18003FA30 (-CreateDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002F63C (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x1800371EC (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 i; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  __int16 v12; // [rsp+3Ch] [rbp-Ch]

  v3 = *((_QWORD *)this + 10) + 32LL;
  v12 = 0;
  v11 = -1;
  for ( i = v3;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x419u);
  }
  else
  {
    v7 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x41Au);
    }
    else
    {
      v8 = CVisual::RenderRecursive(*((CVisual **)this + 10));
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x41Bu);
    }
  }
  return v6;
}
