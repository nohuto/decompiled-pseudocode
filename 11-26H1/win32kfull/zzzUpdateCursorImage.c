/*
 * XREFs of zzzUpdateCursorImage @ 0x14002AEE0
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x14002A280 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005E9E0 (-zzzShowCursor@@YAH_N@Z.c)
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x14015285C (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     zzzCalcStartCursorHide @ 0x14028AAB0 (zzzCalcStartCursorHide.c)
 *     HideAutorunCursor @ 0x14029A510 (HideAutorunCursor.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14002AB0C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x14002AB9C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     PtiMouseFromQ @ 0x1400980BC (PtiMouseFromQ.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x140172930 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?IsCursorImageSuppressed@@YA_NXZ @ 0x1401B4954 (-IsCursorImageSuppressed@@YA_NXZ.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1401BF3C4 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1401CA5CC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1401E25DC (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z @ 0x14024AAE0 (-zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x1402537B8 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall zzzUpdateCursorImage(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 v3; // rbp
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r12d
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagCURSOR *v14; // rax
  struct tagCURSOR *CurrentCursorFrame; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  CursorApiRouter *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // ebx
  __int64 v57; // rax
  unsigned int CurrentCursorSize; // eax
  unsigned __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rcx
  unsigned int v75; // ebx
  unsigned int v76; // [rsp+70h] [rbp+8h]
  __int64 v77; // [rsp+78h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v7 = 3;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928)
    || (UserSessionState = W32GetUserSessionState(v6, v5),
        v9 = (struct tagTHREADINFO *)PtiMouseFromQ(*(_QWORD *)(UserSessionState + 18928)),
        !TestRawInputModeCaptureMouse(v9))
    || (v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928), *(int *)(v6 + 432) >= 0) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19208) )
      return;
    if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline()
      && IsCursorImageSuppressed() )
    {
      v4 = 7;
    }
    else
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19208);
      if ( *(int *)(v6 + 432) < 0 )
      {
        v4 = 4;
      }
      else
      {
        v4 = 3;
        v39 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19208);
        v3 = *(_QWORD *)(v39 + 424);
        if ( *(_DWORD *)(W32GetUserSessionState(v39, v40) + 36280)
          || *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62704) )
        {
          v41 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19208);
          if ( *(_QWORD *)(v41 + 424) == *(_QWORD *)(W32GetUserSessionState(v43, v42) + 21912)
            || (v66 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19208),
                *(_QWORD *)(v66 + 424) == *(_QWORD *)(W32GetUserSessionState(v68, v67) + 30744))
            || (v69 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19208),
                *(_QWORD *)(v69 + 424) == *(_QWORD *)(W32GetUserSessionState(v71, v70) + 27984)) )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 62704) )
            {
              v4 = 1;
              v3 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 30744);
            }
            else if ( !(unsigned __int8)isChildPartition() )
            {
              v4 = 2;
              v3 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 27984);
            }
          }
        }
      }
    }
  }
  v77 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 36352);
  if ( v3 != *(_QWORD *)(W32GetUserSessionState(v11, v10) + 36352) )
  {
    v47 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 36304);
    if ( v3 && (*(_DWORD *)(v3 + 80) & 8) != 0 && *(_QWORD *)(v3 + 112) )
    {
      if ( !v47 )
      {
        *(_DWORD *)(v3 + 120) = 0;
        v59 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v46) + 36368) = v59;
        v60 = (unsigned int)(100 * **(_DWORD **)(v3 + 112));
        LODWORD(v61) = (2863311531u * (unsigned __int64)(unsigned int)v60) >> 32;
        LODWORD(v59) = (unsigned int)v60 / 6;
        v62 = W32GetUserSessionState(v60, v61);
        v63 = InternalSetTimer(0LL, *(_QWORD *)(v62 + 36304), v59, (__int64)zzzAnimateCursor, 0, 20);
        *(_QWORD *)(W32GetUserSessionState(v65, v64) + 36304) = v63;
      }
    }
    else if ( v47 )
    {
      v48 = W32GetUserSessionState(v47, v46);
      FindTimer(0LL, *(_QWORD *)(v48 + 36304), 4u, 1, 0LL);
      *(_QWORD *)(W32GetUserSessionState(v50, v49) + 36304) = 0LL;
    }
    v51 = W32GetUserSessionState(v47, v46);
    EtwTraceWaitCursor(v3, *(_QWORD *)(v51 + 36352));
    *(_QWORD *)(W32GetUserSessionState(v53, v52) + 36352) = v3;
  }
  v14 = FixupCursorForMonitor((struct tagCURSOR *)v3, v12);
  CurrentCursorFrame = GetCurrentCursorFrame(v14);
  if ( *(struct tagCURSOR **)(W32GetUserSessionState(v17, v16) + 36360) != CurrentCursorFrame )
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 36360);
    *(_QWORD *)(W32GetUserSessionState(v22, v21) + 36360) = CurrentCursorFrame;
    if ( CurrentCursorFrame )
    {
      v23 = *(_DWORD *)(v3 + 80) & 8;
      v26 = v23 | 0x10;
      if ( !FCursorShadowed((struct _CURSINFO *)(v3 + 80)) )
        v26 = v23;
      v29 = v26 | 0x20;
      if ( *(_DWORD *)(W32GetUserSessionState(v25, v24) + 36324) != 1 )
        v29 = v26;
      v76 = v29;
      v30 = *(CursorApiRouter **)(W32GetUserSessionState(v28, v27) + 36336);
      if ( (unsigned int)IsRemoteConnection() )
        v33 = 0;
      else
        v33 = *(_DWORD *)(W32GetUserSessionState(v32, v31) + 16288);
      CursorApiRouter::SetPointerShape(v30, (struct tagCURSOR *)((char *)CurrentCursorFrame + 80), v29, v33, 0x32u);
      if ( v77 == v3 )
      {
        if ( *((_DWORD *)CurrentCursorFrame + 19) == *(_DWORD *)(v20 + 76) )
        {
LABEL_15:
          if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
          {
            LOBYTE(v37) = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 36360) != 0LL;
            LOBYTE(v2) = v20 != 0;
            if ( (unsigned __int8)v37 != v2 )
              SendVisibilityChanged();
            goto LABEL_18;
          }
          v73 = *(_QWORD *)(W32GetUserSessionState(v35, v34) + 36360);
          LOBYTE(v74) = v73 != 0;
          if ( (v73 != 0) != (v20 != 0) )
            SendVisibilityChanged();
          v75 = 32780;
          if ( v73 )
          {
            if ( !v20 )
              v75 = 32770;
          }
          else
          {
            v75 = 32771;
          }
          if ( !*(_DWORD *)(W32GetUserSessionState(v74, v72) + 70592) )
            v7 = 1;
          xxxWindowEvent(v75, v7);
          return;
        }
        v4 = 5;
      }
      if ( (unsigned int)IsRemoteConnection() )
        v56 = 0;
      else
        v56 = *(_DWORD *)(W32GetUserSessionState(v55, v54) + 16288);
      v57 = W32GetUserSessionState(v55, v54);
      CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(*(CCursorSizes **)(v57 + 36376));
      InputTraceLogging::Cursor::SetCursorImage(CurrentCursorFrame, v3, CurrentCursorSize, v4, v76, v56);
      goto LABEL_15;
    }
    SetPointerInternal(0LL, v4);
    goto LABEL_15;
  }
  if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_18:
    v38 = W32GetUserSessionState(v37, v36);
    zzzSendCursorChangeWinEvent(*(struct tagCURSOR **)(v38 + 36360), CurrentCursorFrame);
  }
}
