/*
 * XREFs of ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180008E70 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180009270 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18000AA64 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180010F38 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_ca6c6626191e523f5e2504449ec2d90f_@@_N@Z @ 0x180010F6C (--$ForEachOwnedWindow@V_lambda_ca6c6626191e523f5e2504449ec2d90f_@@@CTransitionVisualController@@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x180090A14 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180019DC0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     Template_p @ 0x18007E3B8 (Template_p.c)
 */

void __fastcall CTransitionVisualController::_MoveWindowOffscreen(struct CTopLevelWindow *a1, char a2)
{
  struct CTopLevelWindow *v2; // rbx
  __int64 v4; // r8
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  void *v9; // rdx
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
      v9 = &UdwmSystemAnimation_MoveOffscreen_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v9 = &UdwmSystemAnimation_MoveOffscreen_Stop;
    }
    Template_p(a1, v9, *(_QWORD *)(v4 + 40));
  }
LABEL_5:
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
    *((struct CWindowData **)v2 + 93),
    0);
LABEL_6:
  v6 = *((_QWORD *)v2 + 93);
  if ( v6 && (!a2 || (*(_DWORD *)(v6 + 576) & 0x8000000) != 0) && *(_DWORD *)(v6 + 512) )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v6 + 488) + 8 * v7);
      if ( a2 != *(_BYTE *)(v8 + 35) )
      {
        v10 = *(CThumbnailVisual **)(v8 + 88);
        *(_BYTE *)(v8 + 35) = a2;
        if ( v10 )
        {
          updated = CThumbnailVisual::UpdateProperties(v10, 4u);
          if ( updated < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2047u);
        }
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(v6 + 512) );
  }
}
