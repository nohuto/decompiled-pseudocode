/*
 * XREFs of SetupClassAtoms @ 0x1C0107A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetupClassAtoms()
{
  wchar_t **v0; // rsi
  char v1; // bp
  __int64 v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r14
  __int16 v5; // ax
  bool v6; // cl
  char v7; // bp
  char v8; // bp
  char v9; // bp
  char v10; // bp
  char v11; // bp
  char v12; // bp
  char v13; // bp
  char v14; // bp
  char v15; // bp
  char v16; // bp
  char v17; // bp
  char v18; // bp
  char v19; // bp
  char v20; // bp
  char v21; // bp
  char v22; // bp
  char v23; // bp
  char v24; // bp
  char v25; // bp
  char v26; // bp
  char v27; // bp
  char v28; // bp
  char v29; // bp
  char v30; // bp
  char v31; // bp
  char v32; // bp
  char v33; // bp
  unsigned __int8 v34; // bp
  int v35; // ebp
  __int16 v36; // ax
  __int64 result; // rax

  v0 = off_1C02E50B0;
  v1 = 1;
  v2 = 852LL;
  v3 = 0;
  v4 = 17LL;
  do
  {
    v5 = UserAddAtomEx(*v0++, 1LL, 2LL);
    *(_WORD *)(v2 + gpsi) = v5;
    v6 = *(_WORD *)(v2 + gpsi) != 0;
    v2 += 2LL;
    v1 &= v6;
    --v4;
  }
  while ( v4 );
  *(_WORD *)(gpsi + 888LL) = -32766;
  *(_WORD *)(gpsi + 894LL) = -32764;
  *(_WORD *)(gpsi + 896LL) = -32762;
  *(_WORD *)(gpsi + 886LL) = -32767;
  *(_WORD *)(gpsi + 892LL) = -32765;
  *(_WORD *)(gpsi + 890LL) = 0x8000;
  *(_WORD *)(gpsi + 1360LL) = UserAddAtomEx(L"SysCH", 1LL, 2LL);
  v7 = (*(_WORD *)(gpsi + 1360LL) != 0) & v1;
  *(_WORD *)(gpsi + 1356LL) = UserAddAtomEx(L"SysICS", 1LL, 2LL);
  v8 = (*(_WORD *)(gpsi + 1356LL) != 0) & v7;
  *(_WORD *)(gpsi + 1358LL) = UserAddAtomEx(L"SysIC", 1LL, 2LL);
  v9 = (*(_WORD *)(gpsi + 1358LL) != 0) & v8;
  *(_DWORD *)(gpsi + 912LL) = (unsigned __int16)UserAddAtomEx(L"SHELLHOOK", 1LL, 2LL);
  v10 = (*(_DWORD *)(gpsi + 912LL) != 0) & v9;
  *(_WORD *)(gpsi + 1362LL) = UserAddAtomEx(L"SysFrostedWindow", 1LL, 2LL);
  v11 = (*(_WORD *)(gpsi + 1362LL) != 0) & v10;
  atomCheckpointProp = UserAddAtomEx(L"SysCP", 1LL, 2LL);
  v12 = (atomCheckpointProp != 0) & v11;
  atomDDETrack = UserAddAtomEx(L"SysDT", 1LL, 2LL);
  v13 = (atomDDETrack != 0) & v12;
  atomQOS = UserAddAtomEx(L"SysQOS", 1LL, 2LL);
  v14 = (atomQOS != 0) & v13;
  atomDDEImp = UserAddAtomEx(L"SysDDEI", 1LL, 2LL);
  v15 = (atomDDEImp != 0) & v14;
  atomWndObj = UserAddAtomEx(L"SysWNDO", 1LL, 2LL);
  v16 = (atomWndObj != 0) & v15;
  atomImeLevel = UserAddAtomEx(L"SysIMEL", 1LL, 2LL);
  v17 = (atomImeLevel != 0) & v16;
  atomLayer = UserAddAtomEx(L"SysLayer", 1LL, 2LL);
  v18 = (atomLayer != 0) & v17;
  atomDispAffinity = UserAddAtomEx(L"SysDispAffinity", 1LL, 2LL);
  v19 = (atomDispAffinity != 0) & v18;
  atomDWMProp = UserAddAtomEx(L"SysDWM", 1LL, 2LL);
  v20 = (atomDWMProp != 0) & v19;
  CSwapChainProp::s_atom = UserAddAtomEx(L"SysSwapChain", 1LL, 2LL);
  v21 = (CSwapChainProp::s_atom != 0) & v20;
  CHwndTargetProp::s_atom = UserAddAtomEx(L"SysDCompHwndTargets", 1LL, 2LL);
  CInputQueueProp::s_atom = UserAddAtomEx(L"SysCompositionInputQueue", 1LL, 2LL);
  v22 = (CInputQueueProp::s_atom != 0) & (CHwndTargetProp::s_atom != 0) & v21;
  guiActivateShellWindow = (unsigned __int16)UserAddAtomEx(L"ACTIVATESHELLWINDOW", 1LL, 2LL);
  guiOtherWindowCreated = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWCREATED", 1LL, 2LL);
  v23 = (guiOtherWindowCreated != 0) & (guiActivateShellWindow != 0) & v22;
  guiOtherWindowDestroyed = (unsigned __int16)UserAddAtomEx(L"OTHERWINDOWDESTROYED", 1LL, 2LL);
  v24 = (guiOtherWindowDestroyed != 0) & v23;
  gatomMessage = UserAddAtomEx(L"Message", 1LL, 2LL);
  v25 = (gatomMessage != 0) & v24;
  *(_WORD *)(gpsi + 900LL) = gatomMessage;
  gatomShadow = UserAddAtomEx(L"SysShadow", 1LL, 2LL);
  v26 = (gatomShadow != 0) & v25;
  *(_WORD *)(gpsi + 898LL) = gatomShadow;
  gaOleMainThreadWndClass = UserAddAtomEx(L"OleMainThreadWndClass", 1LL, 2LL);
  v27 = (gaOleMainThreadWndClass != 0) & v26;
  gaFlashWState = UserAddAtomEx(L"FlashWState", 1LL, 2LL);
  v28 = (gaFlashWState != 0) & v27;
  gatomTouchFlags = UserAddAtomEx(L"SysTouchFlags", 1LL, 2LL);
  v29 = (gatomTouchFlags != 0) & v28;
  gatomPtrTargetFlags = UserAddAtomEx(L"MicrosoftWindowsTargetingWindow", 1LL, 2LL);
  v30 = (gatomPtrTargetFlags != 0) & v29;
  gatomFeedbackSettings = UserAddAtom(L"SysFeedbackSettings", 1LL);
  v31 = (gatomFeedbackSettings != 0) & v30;
  gatomShutdownBlockingReason = UserAddAtomEx(L"ShutdownBlockingReason", 1LL, 2LL);
  v32 = (gatomShutdownBlockingReason != 0) & v31;
  gatomBrokeredForeground = UserAddAtomEx(L"BrokeredForeground", 1LL, 2LL);
  v33 = (gatomBrokeredForeground != 0) & v32;
  gatomMiPFlags = UserAddAtomEx(L"MiPFlags", 1LL, 2LL);
  v34 = (gatomMiPFlags != 0) & v33;
  CoreWindowProp::s_atom = UserAddAtomEx(L"CoreWindowProp", 1LL, 2LL);
  v35 = (CoreWindowProp::s_atom != 0) & v34;
  v36 = UserAddAtomEx(L"ShellWindowManagement", 1LL, 2LL);
  LOBYTE(v3) = v36 != 0;
  gatomShellWindowManagement = v36;
  result = v35 & v3;
  gatomLastPinned = CoreWindowProp::s_atom;
  return result;
}
