/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18002F63C
 * Callers:
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x1800297B4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18001116C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180029650 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180030F9C (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  int v2; // ebp
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rsi
  __int64 v5; // rdi
  CVisual *v6; // rcx
  int v7; // eax
  double *v8; // r14
  CVisual *OverlayRootVisualForDesktop; // rax
  double *v10; // rdi
  double v12; // rax
  double v13; // rax

  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    if ( !CAnimationEngine::IsIdle(v3) )
    {
      v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
      if ( v5 )
      {
        v6 = *(CVisual **)(v5 + 8);
        if ( v6 )
        {
          v7 = CVisual::MoveToFront(v6, 0);
          v8 = *(double **)(v5 + 8);
          v2 = v7;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v8[22] - 1.0)) & _xmm) > 0.0000011920929 )
          {
            v12 = *v8;
            v8[22] = 1.0;
            (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)&v12 + 24LL))(v8, 32LL);
          }
          if ( v2 >= 0 )
          {
            OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(this, *(_QWORD *)(v5 + 96), 0);
            v10 = (double *)OverlayRootVisualForDesktop;
            if ( OverlayRootVisualForDesktop )
            {
              CVisual::MoveToFront(OverlayRootVisualForDesktop, 0);
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v10[22] - 1.0)) & _xmm) > 0.0000011920929 )
              {
                v13 = *v10;
                v10[22] = 1.0;
                (*(void (__fastcall **)(double *, __int64))(*(_QWORD *)&v13 + 24LL))(v10, 32LL);
              }
            }
          }
        }
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 29, 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v4 = &CAnimationEngine::`vftable';
      DynArrayImpl<0>::~DynArrayImpl<0>((void **)v4 + 9);
      DynArrayImpl<0>::~DynArrayImpl<0>((void **)v4 + 5);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationEngine *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
  }
  return (unsigned int)v2;
}
