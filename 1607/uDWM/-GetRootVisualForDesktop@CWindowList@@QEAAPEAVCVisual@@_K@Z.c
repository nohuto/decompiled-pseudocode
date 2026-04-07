/*
 * XREFs of ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424
 * Callers:
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800048A8 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000C0E0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C4EC (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002A28C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002D4D0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB70 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180030654 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180032490 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180039194 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180041AB4 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180047428 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E8FC (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007CAE0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800822D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084D70 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x18008FE28 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x180090278 (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093B24 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CWindowList::GetRootVisualForDesktop(CWindowList *this, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v6; // [rsp+30h] [rbp-48h]
  __int128 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  char v9; // [rsp+58h] [rbp-20h]

  v8 = -1LL;
  v2 = 0LL;
  v5[0] = a2;
  v5[1] = 0LL;
  v6 = 0LL;
  v9 = 0;
  v7 = 0LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v5);
  if ( v3 )
    return (struct CVisual *)v3[3];
  return (struct CVisual *)v2;
}
