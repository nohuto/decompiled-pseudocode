/*
 * XREFs of ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30
 * Callers:
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800016EC (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180001814 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x1800095C8 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ca6c6626191e523f5e2504449ec2d90f_@@_N@Z @ 0x1800095FC (--$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000DB78 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ECAC (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000EE7C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008C96C (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008D49C (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180014204 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     Template_p @ 0x1800764B8 (Template_p.c)
 */

void __fastcall CTransitionVisualController::_MoveWindowOffscreen(struct CTopLevelWindow *a1, char a2)
{
  struct CTopLevelWindow *v2; // rbx
  __int64 v4; // r8
  char v5; // al
  __int64 v6; // rbx
  void *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  CThumbnailVisual *v10; // rcx
  int updated; // eax

  v2 = a1;
  LOBYTE(a1) = *((_BYTE *)a1 + 265);
  if ( ((unsigned __int8)a1 & 1) == a2 )
    goto LABEL_6;
  v4 = *((_QWORD *)v2 + 93);
  v5 = (unsigned __int8)a1 ^ (a2 ^ (unsigned __int8)a1) & 1;
  *((_BYTE *)v2 + 265) = v5;
  if ( v4 )
  {
    if ( (v5 & 1) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v7 = &UdwmSystemAnimation_MoveOffscreen_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v7 = &UdwmSystemAnimation_MoveOffscreen_Stop;
    }
    Template_p(a1, v7, *(_QWORD *)(v4 + 40));
  }
LABEL_5:
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
    *((struct CWindowData **)v2 + 93),
    0);
LABEL_6:
  v6 = *((_QWORD *)v2 + 93);
  if ( v6 && (!a2 || (*(_DWORD *)(v6 + 568) & 0x8000000) != 0) && *(_DWORD *)(v6 + 496) )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 472) + 8 * v8);
      if ( a2 != *(_BYTE *)(v9 + 35) )
      {
        v10 = *(CThumbnailVisual **)(v9 + 88);
        *(_BYTE *)(v9 + 35) = a2;
        if ( v10 )
        {
          updated = CThumbnailVisual::UpdateProperties(v10, 4u);
          if ( updated < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x2053u);
        }
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(v6 + 496) );
  }
}
