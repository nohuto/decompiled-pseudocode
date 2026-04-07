/*
 * XREFs of ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A574
 * Callers:
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180008718 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800087F4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180009270 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A480 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007E64 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002C4B4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002C690 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_EnsureTransitionVisualRoot(CTransitionVisualController *this)
{
  volatile signed __int32 *v1; // r14
  volatile signed __int32 *v2; // r15
  int v3; // edi
  bool v4; // zf
  int v7; // eax
  struct CVisual *OverlayRootVisualForDesktop; // rax
  unsigned __int64 v9; // rdx
  struct CVisual *v10; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int inserted; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct CVisual *v16; // rax
  int v17; // eax
  struct CVisual *v18; // rax
  struct CVisual *v19; // rbx
  struct CVisual *v20; // rax
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  struct CVisual *v23; // [rsp+60h] [rbp+30h] BYREF
  struct CVisual *v24; // [rsp+68h] [rbp+38h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v23 = 0LL;
  v4 = *((_QWORD *)this + 12) == -1LL;
  v24 = 0LL;
  if ( v4 )
  {
    if ( !(unsigned int)GetDesktopID(1LL, &v25) )
    {
      v3 = -2147467259;
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147467259,
        0x275u);
      goto LABEL_34;
    }
    v15 = CTransitionVisualController::_SetDesktopId(this, v25);
    v3 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v15, 0x278u);
      goto LABEL_4;
    }
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v7 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v23);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v7, 0x27Du);
      goto LABEL_19;
    }
    OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                    *((_QWORD *)this + 12),
                                    0);
    v9 = *((_QWORD *)this + 12);
    v10 = OverlayRootVisualForDesktop;
    if ( OverlayRootVisualForDesktop )
    {
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                           v9);
      v1 = (volatile signed __int32 *)v23;
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                   v23,
                   v10,
                   0,
                   1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          inserted,
          0x281u);
        goto LABEL_4;
      }
    }
    else
    {
      v16 = CWindowList::GetRenderTargetRootVisualForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
              v9);
      v1 = (volatile signed __int32 *)v23;
      v17 = VisualCollection::InsertRelative((struct CVisual *)((char *)v16 + 32), v23, 0LL, 0, 1);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v17, 0x285u);
        goto LABEL_4;
      }
    }
    *((_QWORD *)this + 1) = v1;
    if ( v1 )
    {
      _InterlockedIncrement(v1 + 2);
      v1 = (volatile signed __int32 *)v23;
      v2 = (volatile signed __int32 *)v24;
    }
  }
  if ( !*((_QWORD *)this + 2) )
  {
    v13 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v24);
    v3 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v13, 0x28Cu);
      v2 = (volatile signed __int32 *)v24;
      goto LABEL_4;
    }
    v2 = (volatile signed __int32 *)v24;
    v14 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), v24, 0LL, 0, 1);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, 0x28Du);
      goto LABEL_4;
    }
    *((_QWORD *)this + 2) = v2;
    if ( v2 )
    {
      _InterlockedIncrement(v2 + 2);
      v2 = (volatile signed __int32 *)v24;
LABEL_19:
      v1 = (volatile signed __int32 *)v23;
    }
  }
LABEL_4:
  if ( v3 >= 0 )
    goto LABEL_5;
  if ( v1 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(v1 + 8));
    v18 = CWindowList::GetRenderTargetRootVisualForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
            *((_QWORD *)this + 12));
    VisualCollection::Remove((struct CVisual *)((char *)v18 + 32), (struct CVisual *)v1);
  }
  if ( v2 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    v19 = (struct CVisual *)*((_QWORD *)this + 1);
    v20 = CWindowList::GetRenderTargetRootVisualForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
            *((_QWORD *)this + 12));
    VisualCollection::Remove((struct CVisual *)((char *)v20 + 32), v19);
  }
LABEL_34:
  v21 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)this + 1) = 0LL;
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 2) = 0LL;
  }
LABEL_5:
  if ( v1 )
    CBaseObject::Release((CBaseObject *)v1);
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return (unsigned int)v3;
}
