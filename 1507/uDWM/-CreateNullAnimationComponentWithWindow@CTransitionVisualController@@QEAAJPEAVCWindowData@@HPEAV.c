/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C96C
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800107A8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x1800108B4 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003B528 (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  struct CAnimatedTransitionVisual *v5; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rdi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CAnimatedTransitionVisual *v17; // rcx
  struct CTopLevelWindow *v18; // rcx
  struct CAnimatedTransitionVisual *v20; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v10 )
  {
    if ( a2 )
      v11 = *((_QWORD *)a2 + 5);
    else
      v11 = 0LL;
    v12 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v10, v11, 4095, a3, (__int64)a4);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v14 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v15 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v13 = v15;
      if ( v15 >= 0 )
      {
        v16 = CAnimatedTransitionVisual::Create(
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                (CBaseObject ***)&v20);
        v13 = v16;
        if ( v16 >= 0 )
        {
          v17 = v20;
          *((_DWORD *)v20 + 180) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v17 + 181) = a3;
          if ( a2 )
          {
            v18 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 46);
            if ( v18 )
              CTransitionVisualController::_MoveWindowOffscreen(v18, 1);
          }
          *a5 = (struct CAnimationComponent *)v12;
          _InterlockedIncrement(v12 + 2);
          v5 = v20;
          CAnimationComponent::SetTransitionVisual(*a5, v20);
        }
        else
        {
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v16,
            0x67Bu);
          v5 = v20;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v15, 0x679u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v14, 0x678u);
    }
    CBaseObject::Release((CBaseObject *)v12);
    if ( v5 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v5 + 8));
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x676u);
  }
  return v13;
}
