/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003915C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180007D28 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007E64 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A480 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18000AA64 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180010F38 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18001138C (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180012C38 (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUt.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180012F70 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x1800218A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180039F2C (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     EtwppTemplate_q @ 0x18008213C (EtwppTemplate_q.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(CVisual **this, struct CWindowData *a2)
{
  int v2; // eax
  volatile signed __int32 *v3; // rsi
  char v6; // r13
  struct CVisual *v7; // r12
  int v8; // eax
  int inserted; // ebx
  bool v10; // zf
  struct tagRECT *v11; // r11
  const struct tagRECT *v12; // r11
  unsigned int Clone; // r15d
  int v14; // eax
  struct CTopLevelWindow *v15; // rdx
  int v16; // eax
  CVisual *v17; // rdx
  __int64 v18; // r15
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edx
  struct CVisual *v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v28; // eax
  int v29; // r15d
  int v30; // r9d
  int v31; // eax
  int v32; // r9d
  struct CVisual *RootVisualForDesktop; // rax
  struct CVisual *v34; // r14
  int v35; // eax
  CDesktopManager *v36; // rcx
  int v37; // [rsp+20h] [rbp-50h]
  unsigned int v38; // [rsp+20h] [rbp-50h]
  unsigned int v39; // [rsp+20h] [rbp-50h]
  struct tagRECT *v40; // [rsp+50h] [rbp-20h]
  __int128 v41; // [rsp+58h] [rbp-18h] BYREF
  int v42; // [rsp+B8h] [rbp+48h]
  struct CTransitionWindowSnapshot *v43; // [rsp+C0h] [rbp+50h] BYREF
  struct CVisual *v44; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *((_DWORD *)a2 + 144);
  v3 = 0LL;
  v43 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v42 = 1;
  }
  else
  {
    v42 = 0;
    if ( (v2 & 0x10000000) == 0 || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
    {
      v6 = 0;
      goto LABEL_4;
    }
  }
  v6 = 1;
LABEL_4:
  v7 = 0LL;
  v44 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  inserted = v8;
  if ( v8 < 0 )
  {
    v38 = 2728;
LABEL_49:
    v30 = v8;
LABEL_51:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v30, v38);
    return (unsigned int)inserted;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    inserted = -2147024809;
    v38 = 2732;
    v30 = -2147024809;
    goto LABEL_51;
  }
  v8 = CTransitionVisualController::_SetDesktopId((CTransitionVisualController *)this, *((_QWORD *)a2 + 15));
  inserted = v8;
  if ( v8 < 0 )
  {
    v38 = 2736;
    goto LABEL_49;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex((CTransitionVisualController *)this, *((HWND *)a2 + 5)) >= 0 )
    return (unsigned int)inserted;
  v10 = (*((_DWORD *)a2 + 144) & 0x1000000) == 0;
  v41 = 0LL;
  if ( v10 )
    v11 = 0LL;
  else
    v11 = (struct tagRECT *)((char *)a2 + 580);
  v40 = v11;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v31 = CTransitionWindowSnapshot::Create(
            *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
            *((struct CTopLevelWindow **)a2 + 48),
            0LL,
            v12,
            &v43);
    v3 = (volatile signed __int32 *)v43;
    if ( v31 >= 0 )
    {
LABEL_21:
      *(_QWORD *)&v41 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v41 + 1) = v3;
      goto LABEL_22;
    }
  }
  if ( (*((_BYTE *)a2 + 572) & 0x10) != 0 )
  {
    inserted = -2147483638;
    goto LABEL_22;
  }
  Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
  if ( Clone >= *((_DWORD *)this + 12) )
  {
    v14 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v44);
    inserted = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v14, 0xAC6u);
      goto LABEL_33;
    }
    v7 = v44;
    inserted = VisualCollection::InsertRelative((CVisual *)((char *)this[18] + 32), v44, 0LL, 0, 1);
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        inserted,
        0xAC7u);
      goto LABEL_34;
    }
    v15 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
    if ( !v6 )
    {
      v16 = CTransitionVisualController::_StageCloneRelative(
              (CTransitionVisualController *)this,
              v15,
              v7,
              0,
              0LL,
              1,
              0,
              1,
              0LL);
      inserted = v16;
      if ( v16 >= 0 )
        goto LABEL_17;
      v39 = 2771;
LABEL_61:
      v32 = v16;
LABEL_67:
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v32, v39);
LABEL_34:
      if ( v3 )
        CBaseObject::Release((CBaseObject *)v3);
      goto LABEL_36;
    }
    LOBYTE(v37) = 0;
    v16 = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v15, v7, 0xFFFFFFFFLL, v37, v42);
    inserted = v16;
    if ( v16 < 0 )
    {
      v39 = 2764;
      goto LABEL_61;
    }
    Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
  }
LABEL_17:
  if ( Clone < *((_DWORD *)this + 12) )
  {
    v17 = this[3];
    v18 = 3LL * Clone;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + v18) + 744LL) + 40LL) == *((_QWORD *)a2 + 5) )
    {
      v19 = CTransitionWindowSnapshot::Create(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              *((struct CTopLevelWindow **)a2 + 48),
              *(struct CVisual **)(*((_QWORD *)v17 + v18 + 1) + 24LL),
              v40,
              &v43);
      inserted = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v19, 0xAE0u);
        v3 = (volatile signed __int32 *)v43;
        goto LABEL_34;
      }
      v3 = (volatile signed __int32 *)v43;
      *((_BYTE *)v43 + 340) = *((_BYTE *)this[3] + 8 * v18 + 18);
      goto LABEL_21;
    }
  }
  inserted = -2147467259;
LABEL_22:
  if ( v3 )
  {
    if ( inserted < 0 )
      goto LABEL_34;
    v20 = this + 7;
    v21 = *((unsigned int *)this + 20);
    v22 = v21 + 1;
    if ( (int)v21 + 1 < (unsigned int)v21 )
    {
      v29 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      inserted = -2147024362;
    }
    else
    {
      if ( v22 <= *((_DWORD *)this + 19) )
      {
        *(_OWORD *)(*v20 + 16 * v21) = v41;
        *((_DWORD *)this + 20) = v22;
        goto LABEL_27;
      }
      v28 = DynArrayImpl<0>::AddMultipleAndSet(v20, 16LL, 1LL, &v41);
      v29 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      inserted = v29;
      if ( v29 >= 0 )
      {
LABEL_27:
        _InterlockedIncrement(v3 + 2);
        if ( (*((_DWORD *)a2 + 144) & 0x100000) != 0 )
        {
          RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                   *((_QWORD *)a2 + 15));
          v3 = (volatile signed __int32 *)v43;
          v34 = RootVisualForDesktop;
          v35 = VisualCollection::InsertRelative(
                  (struct CVisual *)((char *)RootVisualForDesktop + 32),
                  v43,
                  *((struct CVisual **)a2 + 48),
                  1,
                  1);
          inserted = v35;
          if ( v35 >= 0 )
          {
            CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(a2);
            CDesktopManager::UpdateSceneImpl(v36, v34);
LABEL_30:
            if ( dword_1800BB564
              && (unsigned __int8)(byte_1800BB568 - 1) > 2u
              && (qword_1800BB550 & 0x8000000000000001uLL) != 0
              && (qword_1800BB558 & 0x8000000000000001uLL) == qword_1800BB558 )
            {
              EtwppTemplate_q(v25, &EtwTraceInfo_9009, v3);
            }
            v26 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
            inserted = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2u,
                v26,
                0xB11u);
            goto LABEL_33;
          }
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v35, 0xAFCu);
        }
        else
        {
          v3 = (volatile signed __int32 *)v43;
          v23 = v43;
          *((_OWORD *)v43 + 20) = _xmm;
          v24 = VisualCollection::InsertRelative((CVisual *)((char *)this[18] + 32), v23, 0LL, 0, 1);
          inserted = v24;
          if ( v24 >= 0 )
          {
            CVisual::RenderRecursive(this[18]);
            goto LABEL_30;
          }
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v24, 0xB0Bu);
        }
LABEL_33:
        v7 = v44;
        goto LABEL_34;
      }
    }
    v39 = 2803;
    v32 = v29;
    goto LABEL_67;
  }
LABEL_36:
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)inserted;
}
