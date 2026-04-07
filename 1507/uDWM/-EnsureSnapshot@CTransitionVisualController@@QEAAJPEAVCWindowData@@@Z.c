/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18000C710 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180001500 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180001814 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800092FC (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUt.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000958C (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800095C8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000C950 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18000CF74 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E848 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000EE18 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000EE7C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001C2A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     EtwppTemplate_q @ 0x18007A68C (EtwppTemplate_q.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(CVisual **this, struct CWindowData *a2, __int64 a3)
{
  int v3; // eax
  volatile signed __int32 *v4; // rdi
  int v7; // r13d
  char v8; // r12
  int v9; // eax
  int inserted; // ebx
  bool v11; // zf
  struct tagRECT *v12; // r11
  const struct tagRECT *v13; // r11
  unsigned int Clone; // r15d
  int v15; // eax
  struct CTopLevelWindow *v16; // rdx
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // eax
  int v22; // r15d
  struct CVisual *v23; // rdx
  __int64 v24; // rcx
  int v26; // r9d
  int v27; // eax
  struct CVisual *RootVisualForDesktop; // rax
  struct CVisual *v29; // r14
  CDesktopManager *v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-40h]
  unsigned int v32; // [rsp+20h] [rbp-40h]
  __int128 v33; // [rsp+50h] [rbp-10h] BYREF
  struct CTransitionWindowSnapshot *v34; // [rsp+A8h] [rbp+48h] BYREF
  struct CVisual *v35; // [rsp+B0h] [rbp+50h] BYREF
  struct tagRECT *v36; // [rsp+B8h] [rbp+58h]

  v3 = *((_DWORD *)a2 + 142);
  v4 = 0LL;
  v34 = 0LL;
  if ( (v3 & 0x40000) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (v3 & 0x10000000) == 0
      || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0 )
    {
      v8 = 0;
      goto LABEL_4;
    }
  }
  v8 = 1;
LABEL_4:
  v35 = 0LL;
  v9 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  inserted = v9;
  if ( v9 < 0 )
  {
    v31 = 2612;
LABEL_45:
    v26 = v9;
LABEL_47:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v26, v31);
    return (unsigned int)inserted;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    inserted = -2147024809;
    v31 = 2616;
    v26 = -2147024809;
    goto LABEL_47;
  }
  v9 = CTransitionVisualController::_SetDesktopId((CTransitionVisualController *)this, *((_QWORD *)a2 + 15));
  inserted = v9;
  if ( v9 < 0 )
  {
    v31 = 2620;
    goto LABEL_45;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex((CTransitionVisualController *)this, *((HWND *)a2 + 5)) >= 0 )
    return (unsigned int)inserted;
  v11 = (*((_DWORD *)a2 + 142) & 0x1000000) == 0;
  v33 = 0LL;
  if ( v11 )
    v12 = 0LL;
  else
    v12 = (struct tagRECT *)((char *)a2 + 572);
  v36 = v12;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v27 = CTransitionWindowSnapshot::Create(
            *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
            *((struct CTopLevelWindow **)a2 + 46),
            0LL,
            v13,
            &v34);
    v4 = (volatile signed __int32 *)v34;
    if ( v27 >= 0 )
    {
LABEL_21:
      *(_QWORD *)&v33 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v33 + 1) = v4;
      goto LABEL_22;
    }
  }
  if ( (*((_BYTE *)a2 + 556) & 0x40) != 0 )
  {
    inserted = -2147483638;
  }
  else
  {
    Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v15 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), &v35);
      inserted = v15;
      if ( v15 < 0 )
      {
        v32 = 2642;
        goto LABEL_72;
      }
      inserted = VisualCollection::InsertRelative((CVisual *)((char *)this[18] + 32), v35, 0LL, 0, 1);
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          inserted,
          0xA53u);
        goto LABEL_34;
      }
      v16 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 46);
      if ( v8 )
      {
        v15 = CTransitionVisualController::_StageCloneWithOwnedWindows((__int64)this, v16, v35, -1, 0, v7);
        inserted = v15;
        if ( v15 < 0 )
        {
          v32 = 2648;
          goto LABEL_72;
        }
        Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
      }
      else
      {
        v15 = CTransitionVisualController::_StageCloneRelative(
                (CTransitionVisualController *)this,
                v16,
                v35,
                0,
                0LL,
                1,
                0,
                1,
                0LL);
        inserted = v15;
        if ( v15 < 0 )
        {
          v32 = 2655;
          goto LABEL_72;
        }
      }
    }
    if ( Clone < *((_DWORD *)this + 12) )
    {
      _mm_lfence();
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[3] + 3 * Clone) + 744LL) + 40LL) == *((_QWORD *)a2 + 5) )
      {
        _mm_lfence();
        v17 = CTransitionWindowSnapshot::Create(
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                *((struct CTopLevelWindow **)a2 + 46),
                *(struct CVisual **)(*((_QWORD *)this[3] + 3 * Clone + 1) + 24LL),
                v36,
                &v34);
        inserted = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v17,
            0xA6Cu);
          v4 = (volatile signed __int32 *)v34;
          goto LABEL_34;
        }
        v4 = (volatile signed __int32 *)v34;
        *((_BYTE *)v34 + 340) = *((_BYTE *)this[3] + 24 * Clone + 18);
        goto LABEL_21;
      }
      v4 = (volatile signed __int32 *)v34;
    }
    inserted = -2147467259;
  }
LABEL_22:
  if ( v4 )
  {
    if ( inserted < 0 )
      goto LABEL_34;
    v18 = this + 7;
    v19 = *((unsigned int *)this + 20);
    v20 = v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      inserted = -2147024362;
    }
    else
    {
      if ( v20 <= *((_DWORD *)this + 19) )
      {
        *(_OWORD *)(*v18 + 16 * v19) = v33;
        *((_DWORD *)this + 20) = v20;
        goto LABEL_29;
      }
      v21 = DynArrayImpl<0>::AddMultipleAndSet(v18, 16LL, 1LL, &v33);
      v22 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xC0u);
      inserted = v22;
      if ( v22 >= 0 )
      {
LABEL_29:
        _InterlockedIncrement(v4 + 2);
        if ( (*((_DWORD *)a2 + 142) & 0x100000) != 0 )
        {
          RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                                   *((_QWORD *)a2 + 15));
          v4 = (volatile signed __int32 *)v34;
          v29 = RootVisualForDesktop;
          v15 = VisualCollection::InsertRelative(
                  (struct CVisual *)((char *)RootVisualForDesktop + 32),
                  v34,
                  *((struct CVisual **)a2 + 46),
                  1,
                  1);
          inserted = v15;
          if ( v15 >= 0 )
          {
            CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)a2);
            CDesktopManager::UpdateSceneImpl(v30, v29);
LABEL_32:
            if ( dword_1800B9564
              && (unsigned __int8)(byte_1800B9568 - 1) > 2u
              && (qword_1800B9550 & 0x8000000000000001uLL) != 0
              && (qword_1800B9558 & 0x8000000000000001uLL) == qword_1800B9558 )
            {
              EtwppTemplate_q(v24, &EtwTraceInfo_9009, v4);
            }
            v15 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
            inserted = v15;
            if ( v15 >= 0 )
              goto LABEL_34;
            v32 = 2717;
            goto LABEL_72;
          }
          v32 = 2696;
        }
        else
        {
          v4 = (volatile signed __int32 *)v34;
          v23 = v34;
          *((_OWORD *)v34 + 20) = _xmm;
          v15 = VisualCollection::InsertRelative((CVisual *)((char *)this[18] + 32), v23, 0LL, 0, 1);
          inserted = v15;
          if ( v15 >= 0 )
          {
            CVisual::RenderRecursive(this[18]);
            goto LABEL_32;
          }
          v32 = 2711;
        }
LABEL_72:
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v15, v32);
LABEL_34:
        if ( v4 )
          CBaseObject::Release((CBaseObject *)v4);
        goto LABEL_36;
      }
    }
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v22, 0xA7Fu);
    goto LABEL_34;
  }
LABEL_36:
  if ( v35 )
    CBaseObject::Release(v35);
  return (unsigned int)inserted;
}
