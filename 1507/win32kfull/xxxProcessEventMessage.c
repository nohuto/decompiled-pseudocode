/*
 * XREFs of xxxProcessEventMessage @ 0x1C0071E4C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0042690 (ProcessUpdateKeyStateEvent.c)
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     xxxCancelTracking @ 0x1C0044D18 (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0046CF8 (xxxApplyGlobalInputSettings.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     _PostTransformableMessage @ 0x1C004E9A0 (_PostTransformableMessage.c)
 *     RtlInitLargeUnicodeString @ 0x1C0052BC8 (RtlInitLargeUnicodeString.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 *     GetMouseKeyFlags @ 0x1C00779CC (GetMouseKeyFlags.c)
 *     xxxCancelMouseMoveTracking @ 0x1C007AECC (xxxCancelMouseMoveTracking.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C007B15C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C007B17C (xxxResetTooltip.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     _PostThreadMessage @ 0x1C0090EB0 (_PostThreadMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     PostPlaySoundMessage @ 0x1C00EBE50 (PostPlaySoundMessage.c)
 *     WPUpdateCheckPointSettings @ 0x1C00F311C (WPUpdateCheckPointSettings.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00F7CEC (xxxProcessSetWindowPosEvent.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E2140 (PostMousePointerLeaveAndCleanup.c)
 *     zzzActiveCursorTracking @ 0x1C01E2930 (zzzActiveCursorTracking.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01FBB00 (xxxDoDeferredPointerActivate.c)
 *     xxxArrangeWindow @ 0x1C020B504 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 *     xxxClientUpdateDpi @ 0x1C0215390 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C0215440 (xxxSendShutdownData.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0227630 (xxxEndGetWidnowTrackInfoAsync.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // r13
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 *v14; // rax
  __int64 result; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  int v18; // edx
  unsigned __int64 v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // si
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned __int64 v32; // rcx
  __int64 v33; // r15
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // r15
  __int64 v44; // r10
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r15
  BOOL v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct tagWND *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  int v62; // r8d
  unsigned int v63; // edx
  struct tagWND *v64; // rcx
  int v65; // r15d
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r10
  __int64 v71; // rcx
  unsigned __int64 MouseKeyFlags; // rdx
  unsigned __int16 v73; // ax
  __int64 v74; // r10
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  unsigned int v80; // esi
  __int64 v81; // rbx
  int v82; // ecx
  DWORD LowPart; // eax
  __int64 v84; // rbx
  __int64 v85; // rax
  __int64 v86; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+48h] [rbp-B8h]
  _BYTE v88[16]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v89[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v90[4]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v91[264]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v89[0] = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v89;
  v8 = *(_DWORD *)(a2 + 88);
  v9 = *(_QWORD *)(a1 + 392);
  v89[2] = CleanEventMessage;
  v89[1] = a2;
  if ( v8 > 13 )
  {
    if ( v8 > 20 )
    {
      v40 = v8 - 21;
      if ( !v40 )
      {
        v84 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
        v85 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        PostMousePointerLeaveAndCleanup(v84, v85);
        goto LABEL_12;
      }
      v41 = v40 - 1;
      if ( !v41 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        zzzSetFMouseMoved(LowPart, 0);
        goto LABEL_12;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32), v7);
        goto LABEL_12;
      }
      v82 = v42 - 1;
      if ( v82 )
      {
        if ( v82 == 1 )
          xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        goto LABEL_12;
      }
      v69 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v69 )
        goto LABEL_12;
      v86 = *(_QWORD *)(a1 + 376);
      *(_QWORD *)(a1 + 376) = &v86;
      v87 = v69;
      ++*(_DWORD *)(v69 + 8);
      v62 = *(_DWORD *)(a2 + 40);
      v63 = *(_DWORD *)(a2 + 32);
    }
    else
    {
      if ( v8 == 20 )
      {
        xxxDoDeferredPointerActivate(a2);
        CleanEventMessage((struct tagQMSG *)a2);
        goto LABEL_12;
      }
      v34 = v8 - 14;
      if ( !v34 )
      {
        v79 = *(_DWORD *)(a2 + 24);
        if ( v79 == 5 )
        {
          v80 = *(_DWORD *)(a2 + 40);
          v79 = *(_DWORD *)(a2 + 32);
          if ( v80 > 5 )
            v80 = 5;
        }
        else
        {
          v80 = 1;
        }
        if ( v80 )
        {
          v81 = (unsigned __int16)v79 | 0x10000LL;
          do
          {
            PostPlaySoundMessage(v81);
            --v80;
          }
          while ( v80 );
        }
        xxxSoundSentry();
        goto LABEL_12;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
        v70 = *(_QWORD *)(v9 + 72);
        if ( v70 || (v70 = *(_QWORD *)(v9 + 80)) != 0 )
        {
          v71 = *(_QWORD *)(v70 + 16);
          if ( a1 == v71 )
          {
            MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v71 + 392));
            v73 = *(_WORD *)(a2 + 40) - 165;
            v87 = v74;
            v75 = (v73 << 16) | MouseKeyFlags;
            v76 = *(_QWORD *)(a2 + 112);
            *(_QWORD *)(a2 + 40) = v75;
            *(_DWORD *)(a1 + 1080) |= 0x800u;
            *(_QWORD *)(a1 + 1084) = v76;
            v86 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 376) = &v86;
            ++*(_DWORD *)(v74 + 8);
            xxxSendMessage((struct tagWND *)v74, 0x319u, *(_QWORD *)v74, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v78, v77);
            *(_DWORD *)(a1 + 1080) &= ~0x800u;
          }
          else
          {
            PostEventMessageEx(v71, *(_QWORD *)(v71 + 392), 15, 0, 0, 0LL, *(_QWORD *)(a2 + 40), a2 + 112);
          }
        }
        goto LABEL_12;
      }
      v36 = v35 - 1;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 == 1 )
            {
              if ( *(_DWORD *)(a2 + 24) == 809 )
                PostThreadMessage(a1);
              else
                xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
            }
          }
          else if ( gpqForeground )
          {
            v39 = *(_QWORD *)(gpqForeground + 72LL);
            if ( v39 )
            {
              if ( *(_QWORD *)(v39 + 16) == a1 && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
                xxxApplyGlobalInputSettings(0);
            }
          }
        }
        else
        {
          v65 = *(_DWORD *)(a2 + 32);
          v67 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( v67 )
          {
            v68 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 376) = &v86;
            v86 = v68;
            v87 = v67;
            ++*(_DWORD *)(v67 + 8);
            if ( v65 )
            {
              if ( v65 == 1 )
                xxxEndSetWindowArrangement((struct tagWND *)v67, (struct tagRECT *)(*(_QWORD *)(a2 + 40) + 4LL));
            }
            else
            {
              xxxArrangeWindow(v67, *(unsigned int *)(a2 + 40));
            }
            ThreadUnlock1(v68, v66);
          }
          if ( v65 == 1 )
            Win32FreePool(*(_QWORD *)(a2 + 40));
        }
        goto LABEL_12;
      }
      v69 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( !v69 || (*(_BYTE *)(v69 + 55) & 1) == 0 )
        goto LABEL_12;
      v63 = 3;
      v86 = *(_QWORD *)(a1 + 376);
      v62 = 3;
      v87 = v69;
      *(_QWORD *)(a1 + 376) = &v86;
      ++*(_DWORD *)(v69 + 8);
    }
    v64 = (struct tagWND *)v69;
    goto LABEL_116;
  }
  if ( v8 == 13 )
  {
    if ( ((*(_DWORD *)(a1 + 608) | *(_DWORD *)(*(_QWORD *)(a1 + 424) + 24LL)) & 0x800) != 0 )
      xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 0xAu);
    PostShellHookMessagesEx(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
  }
  else if ( v8 <= 7 )
  {
    if ( v8 == 7 )
    {
      v59 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v59 )
        PostTransformableMessage(v59, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
    }
    else
    {
      v27 = v8 - 1;
      if ( !v27 )
      {
        v46 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
        v47 = v46;
        if ( !v46 || *(char *)(v46 + 44) < 0 )
          goto LABEL_12;
        v86 = *(_QWORD *)(a1 + 376);
        *(_QWORD *)(a1 + 376) = &v86;
        v87 = v46;
        ++*(_DWORD *)(v46 + 8);
        xxxShowWindow((struct tagWND *)v46);
        v23 = *(unsigned int *)(a2 + 24);
        if ( (v23 & 4) != 0 && (*(_BYTE *)(v47 + 55) & 0x20) != 0 )
          WPUpdateCheckPointSettings(v47);
        goto LABEL_24;
      }
      v28 = v27 - 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( !v29 )
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
          goto LABEL_12;
        }
        v30 = v29 - 1;
        if ( !v30 )
        {
          ProcessUpdateKeyStateEvent(v9, *(_QWORD *)(a2 + 32), (_BYTE *)(*(_QWORD *)(a2 + 32) + 64LL));
          goto LABEL_12;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
          goto LABEL_12;
        }
        if ( v31 != 1 )
          goto LABEL_12;
        v32 = *(_QWORD *)(a2 + 40);
        if ( !v32 )
        {
          xxxCancelTracking(0LL, v7);
          zzzClipCursorEx(0LL, 0);
          zzzLockWindowUpdate2(0LL, 1);
          v49 = *(_QWORD *)(a1 + 392);
          if ( *(_QWORD *)(a2 + 32) && (v50 = *(_QWORD *)(v49 + 80)) != 0 )
          {
            if ( v49 == gpqForeground )
            {
              v86 = *(_QWORD *)(a1 + 376);
              *(_QWORD *)(a1 + 376) = &v86;
              v87 = v50;
              ++*(_DWORD *)(v50 + 8);
              v52 = *(__int64 **)(v49 + 72);
              if ( v52 )
              {
                v53 = *(_QWORD *)(v52[2] + 400);
                if ( v53 )
                  v54 = *(_QWORD *)(v53 + 40);
                else
                  LODWORD(v54) = 0;
                xxxWindowEvent(0x80000002, v52, v54, 0, 33);
              }
              xxxSendMessage((struct tagWND *)v50, 0x86u, 1uLL, 0LL);
              xxxUpdateTray((struct tagWND *)v50);
              xxxSetWindowPos(v50, 0, 0, 0, 0, 0, 3);
              goto LABEL_24;
            }
          }
          else if ( v49 == gpqForeground )
          {
            goto LABEL_12;
          }
          v55 = *(_QWORD *)(a1 + 384);
          *(_DWORD *)(a1 + 448) &= ~0x20u;
          *(_DWORD *)(v55 + 12) &= ~0x100u;
          goto LABEL_12;
        }
        v33 = HMValidateHandleNoSecure(v32, 1);
        if ( !v33 )
          goto LABEL_12;
        v86 = *(_QWORD *)(a1 + 376);
        *(_QWORD *)(a1 + 376) = &v86;
        v87 = v33;
        ++*(_DWORD *)(v33 + 8);
        if ( gpqForeground )
        {
          if ( v33 == *(_QWORD *)(v9 + 80) )
          {
            v48 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 392LL) == gpqForeground;
            xxxSendMessage(
              (struct tagWND *)v33,
              0x86u,
              *(_QWORD *)(*(_QWORD *)(v33 + 16) + 392LL) == gpqForeground,
              0LL);
            if ( v48 )
            {
              xxxUpdateTray((struct tagWND *)v33);
              if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
                xxxSetWindowPos(v33, 0, 0, 0, 0, 0, 3);
            }
          }
          else if ( (unsigned int)xxxActivateThisWindow((struct tagWND *)v33) )
          {
            v24 = (unsigned int)gpdwCPUserPreferencesMask;
            if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
              zzzActiveCursorTracking(v33);
          }
        }
        else
        {
          xxxSetForegroundWindow2((struct tagWND *)v33, a1, 0LL, *(_DWORD *)(a2 + 72));
        }
        if ( (*(_DWORD *)(a2 + 24) & 1) != 0 && (*(_BYTE *)(v33 + 55) & 0x20) != 0 )
          PostMessage(v33, 274LL);
        goto LABEL_24;
      }
      v56 = *(_QWORD *)(v9 + 64);
      if ( v56 )
      {
        v86 = *(_QWORD *)(a1 + 376);
        v87 = v56;
        *(_QWORD *)(a1 + 376) = &v86;
        ++*(_DWORD *)(v56 + 8);
        xxxSendMessage(*(struct tagWND **)(v9 + 64), 0x1Fu, 0LL, 0LL);
        ThreadUnlock1(v58, v57);
        SetWakeBit(a1, 2LL);
      }
    }
  }
  else
  {
    v10 = v8 - 8;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
              xxxProcessNotifyWinEvent(*(LARGE_INTEGER *)(a2 + 40));
            goto LABEL_12;
          }
          v43 = *(_QWORD *)(a1 + 416);
          v44 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v45 = *(_DWORD *)(v43 + 32);
          if ( (v45 & 0x5C0) != 0
            && **(_QWORD **)(v43 + 176) == *(_QWORD *)(a2 + 16)
            && *(_DWORD *)(v43 + 184) == *(_DWORD *)(a2 + 32) )
          {
            goto LABEL_12;
          }
          if ( (v45 & 0x100) != 0 )
            *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
          if ( v44 )
          {
            v86 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 376) = &v86;
            v87 = v44;
            ++*(_DWORD *)(v44 + 8);
            xxxCancelMouseMoveTracking(
              *(unsigned int *)(a2 + 24),
              v44,
              *(unsigned int *)(a2 + 32),
              *(unsigned int *)(a2 + 40));
          }
          else
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) == 0 )
              goto LABEL_12;
            if ( (*(_DWORD *)(a2 + 24) & 0x200) == 0 )
              goto LABEL_12;
            v60 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v43 + 104));
            if ( !v60 )
              goto LABEL_12;
            v86 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 376) = &v86;
            v87 = v60;
            ++*(_DWORD *)(v60 + 8);
            xxxResetTooltip((struct tagWND *)v60);
          }
          goto LABEL_24;
        }
        v61 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( !v61 )
          goto LABEL_12;
        v24 = *(_QWORD *)(a1 + 376);
        v86 = v24;
        *(_QWORD *)(a1 + 376) = &v86;
        v87 = v61;
        ++*(_DWORD *)(v61 + 8);
        if ( (*(_BYTE *)(v61 + 55) & 0x10) != 0 )
          goto LABEL_24;
        SetVisible(v61, 1LL);
        if ( (*(_BYTE *)(v61 + 55) & 0x20) != 0 )
          goto LABEL_24;
        v62 = 1;
        v63 = 7;
        v64 = (struct tagWND *)v61;
LABEL_116:
        xxxMinMaximizeEx(v64, v63, v62, 0LL, 0LL);
        goto LABEL_24;
      }
      v16 = *(_QWORD *)(a2 + 40);
      v17 = *(_QWORD *)(a2 + 16);
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v18 = (unsigned __int16)v17;
      if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_12;
      v19 = v17 >> 16;
      v20 = (__int64 *)(gSharedInfo[1] + (unsigned int)(v18 * LODWORD(gSharedInfo[2])));
      if ( (_WORD)v19 != *((_WORD *)v20 + 9)
        && (_WORD)v19 != 0xFFFF
        && ((_WORD)v19 || !PsGetCurrentProcessWow64Process(gSharedInfo[0])) )
      {
        goto LABEL_12;
      }
      if ( (*((_BYTE *)v20 + 17) & 1) != 0 )
        goto LABEL_12;
      if ( *((_BYTE *)v20 + 16) != 1 )
        goto LABEL_12;
      v21 = *v20;
      if ( !v21 )
        goto LABEL_12;
      v90[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v90;
      v90[1] = v21;
      ++*(_DWORD *)(v21 + 8);
      v22 = *(_DWORD *)(a2 + 24);
      if ( v22 >= 0x1A )
      {
        if ( v22 <= 0x1B )
        {
          v25 = *(_QWORD *)(a2 + 40);
          if ( v25 )
          {
            if ( v25 == -1 )
            {
              v91[0] = 0;
              RtlInitLargeUnicodeString((__int64)v88, (__int64)v91);
              *(_QWORD *)(a2 + 40) = v88;
            }
            else
            {
              v26 = *(_QWORD *)(a2 + 40);
              if ( (unsigned int)UserGetAtomName((unsigned __int16)v25, v91, 260LL) )
              {
                RtlInitLargeUnicodeString((__int64)v88, (__int64)v91);
                *(_QWORD *)(a2 + 40) = v88;
              }
              else
              {
                *(_QWORD *)(a2 + 40) = 0LL;
              }
              UserDeleteAtom(v26);
            }
          }
          v16 = *(_QWORD *)(a2 + 40);
          *(_QWORD *)(a2 + 40) = 0LL;
        }
        else if ( v22 == 834 )
        {
          xxxEndGetWidnowTrackInfoAsync(v21);
          goto LABEL_24;
        }
      }
      xxxSendMessage((struct tagWND *)v21, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), v16);
LABEL_24:
      ThreadUnlock1(v24, v23);
      goto LABEL_12;
    }
    v51 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
    if ( v51 )
    {
      if ( *(char *)(v51 + 43) >= 0 )
      {
        xxxDestroyWindow(v51);
      }
      else
      {
        v86 = *(_QWORD *)(a1 + 376);
        v87 = v51;
        *(_QWORD *)(a1 + 376) = &v86;
        ++*(_DWORD *)(v51 + 8);
        xxxFreeWindow((struct tagWND *)v51);
      }
    }
  }
LABEL_12:
  v14 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v14 )
    v3 = *v14;
  result = v89[0];
  *(_QWORD *)(v3 + 16) = v89[0];
  return result;
}
