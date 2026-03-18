/*
 * XREFs of xxxProcessEventMessage @ 0x1C0063E9C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00812CC (xxxApplyGlobalInputSettings.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     xxxProcessAsyncSendMessage @ 0x1C008FCE8 (xxxProcessAsyncSendMessage.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C0090B88 (xxxCancelTracking.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0094168 (ProcessUpdateKeyStateEvent.c)
 *     GetMouseKeyFlags @ 0x1C00C6920 (GetMouseKeyFlags.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C7394 (xxxCancelMouseMoveTracking.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C75B4 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     PostPlaySoundMessage @ 0x1C00F0C60 (PostPlaySoundMessage.c)
 *     WPUpdateCheckPointSettings @ 0x1C00F82A4 (WPUpdateCheckPointSettings.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01022D4 (xxxProcessSetWindowPosEvent.c)
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2660 (PostMousePointerLeaveAndCleanup.c)
 *     zzzActiveCursorTracking @ 0x1C01E2DC0 (zzzActiveCursorTracking.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01FBF94 (xxxDoDeferredPointerActivate.c)
 *     xxxArrangeWindow @ 0x1C020BBA4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     xxxClientUpdateDpi @ 0x1C0215238 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C02152E8 (xxxSendShutdownData.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  __int64 *v11; // r13
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 *v16; // rax
  __int64 result; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // edi
  BOOL v44; // ebx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdi
  struct tagWND *v58; // rcx
  int v59; // r15d
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // r9
  struct tagWND *v64; // r10
  __int64 v65; // rax
  __int64 v66; // r10
  __int64 v67; // rcx
  unsigned __int64 MouseKeyFlags; // rdx
  unsigned __int16 v69; // ax
  __int64 v70; // r10
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  unsigned int v76; // esi
  __int64 v77; // rbx
  int v78; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 v82; // [rsp+40h] [rbp-30h] BYREF
  __int64 v83; // [rsp+48h] [rbp-28h]
  _QWORD v84[3]; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v84[0] = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v84;
  v10 = *(_DWORD *)(a2 + 88);
  v11 = *(__int64 **)(a1 + 384);
  v84[2] = CleanEventMessage;
  v84[1] = a2;
  if ( v10 > 13 )
  {
    if ( v10 <= 20 )
    {
      if ( v10 == 20 )
      {
        xxxDoDeferredPointerActivate(a2);
        CleanEventMessage((struct tagQMSG *)a2);
        goto LABEL_12;
      }
      v30 = v10 - 14;
      if ( !v30 )
      {
        v75 = *(_DWORD *)(a2 + 24);
        if ( v75 == 5 )
        {
          v76 = *(_DWORD *)(a2 + 40);
          v75 = *(_DWORD *)(a2 + 32);
          if ( v76 > 5 )
            v76 = 5;
        }
        else
        {
          v76 = 1;
        }
        if ( v76 )
        {
          v77 = (unsigned __int16)v75 | 0x10000LL;
          do
          {
            PostPlaySoundMessage(v77);
            --v76;
          }
          while ( v76 );
        }
        xxxSoundSentry();
        goto LABEL_12;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        v66 = v11[9];
        if ( v66 || (v66 = v11[10]) != 0 )
        {
          v67 = *(_QWORD *)(v66 + 16);
          if ( a1 == v67 )
          {
            MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v67 + 384));
            v69 = *(_WORD *)(a2 + 40) - 165;
            v83 = v70;
            v71 = (v69 << 16) | MouseKeyFlags;
            v72 = *(_QWORD *)(a2 + 112);
            *(_QWORD *)(a2 + 40) = v71;
            *(_DWORD *)(a1 + 1072) |= 0x800u;
            *(_QWORD *)(a1 + 1076) = v72;
            v82 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v82;
            ++*(_DWORD *)(v70 + 8);
            xxxSendMessage((struct tagWND *)v70, 0x319u, *(_QWORD *)v70, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v74, v73);
            *(_DWORD *)(a1 + 1072) &= ~0x800u;
          }
          else
          {
            PostEventMessageEx(v67, *(_QWORD *)(v67 + 384), 0xFu, 0LL, 0, 0LL, *(_QWORD *)(a2 + 40), a2 + 112);
          }
        }
        goto LABEL_12;
      }
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 1 )
            {
              if ( *(_DWORD *)(a2 + 24) == 809 )
                PostThreadMessage(a1);
              else
                xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
            }
          }
          else if ( gpqForeground )
          {
            v35 = *(_QWORD *)(gpqForeground + 72LL);
            if ( v35 )
            {
              if ( *(_QWORD *)(v35 + 16) == a1 && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
                xxxApplyGlobalInputSettings(0LL);
            }
          }
        }
        else
        {
          v59 = *(_DWORD *)(a2 + 32);
          v61 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( v61 )
          {
            v62 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v82;
            v82 = v62;
            v83 = v61;
            ++*(_DWORD *)(v61 + 8);
            if ( v59 )
            {
              if ( v59 == 1 )
              {
                IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
                xxxEndSetWindowArrangement(v64, (struct tagRECT *)(v63 + 4));
              }
            }
            else
            {
              xxxArrangeWindow(v61, *(unsigned int *)(a2 + 40));
            }
            ThreadUnlock1(v62, v60);
          }
          if ( v59 == 1 )
            Win32FreePool(*(_QWORD *)(a2 + 40));
        }
        goto LABEL_12;
      }
      v65 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v65 || (*(_BYTE *)(v65 + 55) & 1) == 0 )
        goto LABEL_12;
      v82 = *(_QWORD *)(a1 + 368);
      v83 = v65;
      *(_QWORD *)(a1 + 368) = &v82;
      ++*(_DWORD *)(v65 + 8);
    }
    else
    {
      v27 = v10 - 21;
      if ( !v27 )
      {
        v80 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
        v81 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        PostMousePointerLeaveAndCleanup(v80, v81);
        goto LABEL_12;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        ((void (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
        goto LABEL_12;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
        goto LABEL_12;
      }
      v78 = v29 - 1;
      if ( v78 )
      {
        if ( v78 == 1 )
          xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        goto LABEL_12;
      }
      v65 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v65 )
        goto LABEL_12;
      v82 = *(_QWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 368) = &v82;
      v83 = v65;
      ++*(_DWORD *)(v65 + 8);
    }
    v58 = (struct tagWND *)v65;
    goto LABEL_101;
  }
  if ( v10 == 13 )
  {
    if ( ((*(_DWORD *)(a1 + 600) | *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x800) != 0 )
      xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
    PostShellHookMessagesEx(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
  }
  else if ( v10 <= 7 )
  {
    if ( v10 == 7 )
    {
      v55 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v55 )
        PostTransformableMessage(v55, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
    }
    else
    {
      v18 = v10 - 1;
      if ( !v18 )
      {
        v39 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v40 = v39;
        if ( !v39 || *(char *)(v39 + 44) < 0 )
          goto LABEL_12;
        v41 = *(_QWORD *)(a1 + 368);
        *(_QWORD *)(a1 + 368) = &v82;
        v82 = v41;
        v83 = v39;
        ++*(_DWORD *)(v39 + 8);
        v42 = *(_QWORD *)(a2 + 32);
        v43 = *(_DWORD *)(a2 + 24);
        xxxShowWindowEx((struct tagWND *)v39);
        if ( !v43 && (v42 & 4) != 0 && (*(_BYTE *)(v40 + 55) & 0x20) != 0 )
          WPUpdateCheckPointSettings(v40, (unsigned int)v42);
        goto LABEL_31;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
          goto LABEL_12;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          ProcessUpdateKeyStateEvent(v11, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          goto LABEL_12;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
          goto LABEL_12;
        }
        if ( v22 != 1 )
          goto LABEL_12;
        v23 = *(_QWORD *)(a2 + 40);
        if ( v23 )
        {
          v24 = HMValidateHandleNoSecure(v23, 1);
          if ( !v24 )
            goto LABEL_12;
          v82 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v82;
          v83 = v24;
          ++*(_DWORD *)(v24 + 8);
          if ( gpqForeground )
          {
            if ( v24 == v11[10] )
            {
              v44 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 384LL) == gpqForeground;
              xxxSendMessage(
                (struct tagWND *)v24,
                0x86u,
                *(_QWORD *)(*(_QWORD *)(v24 + 16) + 384LL) == gpqForeground,
                0LL);
              if ( v44 )
              {
                xxxUpdateTray((struct tagWND *)v24);
                if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
                  xxxSetWindowPos(v24, 0, 0, 0, 0, 0, 3);
              }
            }
            else if ( (unsigned int)xxxActivateThisWindow((struct tagWND *)v24) )
            {
              v26 = (unsigned int)gpdwCPUserPreferencesMask;
              if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
                zzzActiveCursorTracking(v24);
            }
          }
          else
          {
            xxxSetForegroundWindow2((struct tagWND *)v24);
          }
          if ( (*(_DWORD *)(a2 + 24) & 1) != 0 && (*(_BYTE *)(v24 + 55) & 0x20) != 0 )
            PostMessage(v24, 274LL, 61728LL, 0LL);
          goto LABEL_31;
        }
        xxxCancelTracking();
        zzzClipCursorEx(0LL, 0LL);
        zzzLockWindowUpdate2(0LL);
        v46 = *(_QWORD *)(a1 + 384);
        if ( *(_QWORD *)(a2 + 32) && (v47 = *(_QWORD *)(v46 + 80)) != 0 )
        {
          if ( v46 == gpqForeground )
          {
            v82 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v82;
            v83 = v47;
            ++*(_DWORD *)(v47 + 8);
            v48 = *(__int64 **)(v46 + 72);
            if ( v48 )
            {
              v49 = *(_QWORD *)(v48[2] + 392);
              if ( v49 )
                v50 = *(_QWORD *)(v49 + 40);
              else
                LODWORD(v50) = 0;
              xxxWindowEvent(0x80000002, v48, v50, 0, 33);
            }
            xxxSendMessage((struct tagWND *)v47, 0x86u, 1uLL, 0LL);
            xxxUpdateTray((struct tagWND *)v47);
            xxxSetWindowPos(v47, 0, 0, 0, 0, 0, 3);
            goto LABEL_31;
          }
        }
        else if ( v46 == gpqForeground )
        {
          goto LABEL_12;
        }
        v51 = *(_QWORD *)(a1 + 376);
        *(_DWORD *)(a1 + 440) &= ~0x20u;
        *(_DWORD *)(v51 + 12) &= ~0x100u;
        goto LABEL_12;
      }
      v52 = v11[8];
      if ( v52 )
      {
        v82 = *(_QWORD *)(a1 + 368);
        v83 = v52;
        *(_QWORD *)(a1 + 368) = &v82;
        ++*(_DWORD *)(v52 + 8);
        xxxSendMessage((struct tagWND *)v11[8], 0x1Fu, 0LL, 0LL);
        ThreadUnlock1(v54, v53);
        SetWakeBit(a1, 2u);
      }
    }
  }
  else
  {
    v12 = v10 - 8;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        xxxProcessAsyncSendMessage(a2 + 16);
        goto LABEL_12;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            xxxProcessNotifyWinEvent(*(_QWORD *)(a2 + 40), v7, v8, v9);
          goto LABEL_12;
        }
        v36 = *(_QWORD *)(a1 + 408);
        v37 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        v38 = *(_DWORD *)(v36 + 32);
        if ( (v38 & 0x5C0) != 0
          && **(_QWORD **)(v36 + 176) == *(_QWORD *)(a2 + 16)
          && *(_DWORD *)(v36 + 184) == *(_DWORD *)(a2 + 32) )
        {
          goto LABEL_12;
        }
        if ( (v38 & 0x100) != 0 )
          *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
        if ( v37 )
        {
          v82 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v82;
          v83 = v37;
          ++*(_DWORD *)(v37 + 8);
          xxxCancelMouseMoveTracking(
            *(unsigned int *)(a2 + 24),
            v37,
            *(unsigned int *)(a2 + 32),
            *(unsigned int *)(a2 + 40));
        }
        else
        {
          if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
            goto LABEL_12;
          if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
            goto LABEL_12;
          v56 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v36 + 104));
          if ( !v56 )
            goto LABEL_12;
          v82 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v82;
          v83 = v56;
          ++*(_DWORD *)(v56 + 8);
          xxxResetTooltip((struct tagWND *)v56);
        }
LABEL_31:
        ThreadUnlock1(v26, v25);
        goto LABEL_12;
      }
      v57 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v57 )
        goto LABEL_12;
      v26 = *(_QWORD *)(a1 + 368);
      v82 = v26;
      *(_QWORD *)(a1 + 368) = &v82;
      v83 = v57;
      ++*(_DWORD *)(v57 + 8);
      if ( (*(_BYTE *)(v57 + 55) & 0x10) != 0 )
        goto LABEL_31;
      SetVisible(v57, 1LL);
      if ( (*(_BYTE *)(v57 + 55) & 0x20) != 0 )
        goto LABEL_31;
      v58 = (struct tagWND *)v57;
LABEL_101:
      xxxMinMaximizeEx(v58, 0LL);
      goto LABEL_31;
    }
    v45 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
    if ( v45 )
    {
      if ( *(char *)(v45 + 43) >= 0 )
      {
        xxxDestroyWindow(v45);
      }
      else
      {
        v82 = *(_QWORD *)(a1 + 368);
        v83 = v45;
        *(_QWORD *)(a1 + 368) = &v82;
        ++*(_DWORD *)(v45 + 8);
        xxxFreeWindow((struct tagWND *)v45);
      }
    }
  }
LABEL_12:
  v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v16 )
    v3 = *v16;
  result = v84[0];
  *(_QWORD *)(v3 + 16) = v84[0];
  return result;
}
