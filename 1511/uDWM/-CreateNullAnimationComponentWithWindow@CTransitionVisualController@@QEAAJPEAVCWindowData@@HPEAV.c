/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180009270
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 * Callees:
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A480 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A574 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BE78 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BF84 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        struct CAnimationComponent **a5)
{
  struct CAnimatedTransitionVisual *v5; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  struct CAnimatedTransitionVisual *v18; // rcx
  struct CTopLevelWindow *v19; // rcx
  CAnimationComponent **v20; // rcx
  struct CAnimatedTransitionVisual *v22; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v22 = 0LL;
  v10 = 4095;
  if ( a2 )
    v10 = *((_DWORD *)a2 + 144) & 0x400000 | 0xFFF;
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v11 )
  {
    if ( a2 )
      v12 = *((_QWORD *)a2 + 5);
    else
      v12 = 0LL;
    v13 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v11, v12, v10, a3, a4);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v14 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, 0x6D8u);
    }
    else
    {
      v16 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v16, 0x6D9u);
      }
      else
      {
        v17 = CAnimatedTransitionVisual::Create(
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v22);
        v15 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v17, 0x6DBu);
          v5 = v22;
        }
        else
        {
          v18 = v22;
          *((_DWORD *)v22 + 180) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v18 + 181) = a3;
          if ( a2 )
          {
            v19 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
            if ( v19 )
              CTransitionVisualController::_MoveWindowOffscreen(v19, 1);
          }
          v20 = a5;
          *a5 = (struct CAnimationComponent *)v13;
          _InterlockedIncrement(v13 + 2);
          v5 = v22;
          CAnimationComponent::SetTransitionVisual(*v20, v22);
        }
      }
    }
    CBaseObject::Release((CBaseObject *)v13);
    if ( v5 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v5 + 8));
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x6D6u);
  }
  return v15;
}
