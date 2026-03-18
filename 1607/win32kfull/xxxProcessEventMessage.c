/*
 * XREFs of xxxProcessEventMessage @ 0x1C00889B8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxProcessAsyncSendMessage @ 0x1C0072748 (xxxProcessAsyncSendMessage.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     GetMouseKeyFlags @ 0x1C00948F4 (GetMouseKeyFlags.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C00962D8 (ProcessUpdateKeyStateEvent.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxUpdateTray @ 0x1C009C3D0 (xxxUpdateTray.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00A89E0 (xxxApplyGlobalInputSettings.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxCancelTracking @ 0x1C0109250 (xxxCancelTracking.c)
 *     PostPlaySoundMessage @ 0x1C010F780 (PostPlaySoundMessage.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 *     xxxResetTooltip @ 0x1C011F778 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011F924 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01252C8 (xxxProcessSetWindowPosEvent.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0129914 (xxxClientBroadcastThemeChange.c)
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 *     xxxSendShutdownData @ 0x1C01546B0 (xxxSendShutdownData.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01D87C0 (PostMousePointerLeaveAndCleanup.c)
 *     zzzActiveCursorTracking @ 0x1C01D9000 (zzzActiveCursorTracking.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3314 (xxxDoDeferredPointerActivate.c)
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     xxxClientUpdateDpi @ 0x1C020E0C0 (xxxClientUpdateDpi.c)
 *     xxxProcessShowWindowEvent @ 0x1C0224C58 (xxxProcessShowWindowEvent.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ecx
  __int64 *v13; // r13
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 *v19; // rax
  __int64 result; // rax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rcx
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
  int v39; // ecx
  int v40; // ecx
  BOOL v41; // ebx
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdi
  struct tagWND *v58; // rcx
  int v59; // eax
  unsigned int v60; // esi
  __int64 v61; // rbx
  int v62; // r15d
  __int64 v63; // r10
  __int64 v64; // rcx
  __int64 v65; // r9
  struct tagWND *v66; // r10
  __int64 v67; // rax
  __int64 v68; // r10
  __int64 v69; // rcx
  unsigned __int64 MouseKeyFlags; // rdx
  unsigned __int16 v71; // ax
  __int64 v72; // r10
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v84; // [rsp+40h] [rbp-30h] BYREF
  __int64 v85; // [rsp+48h] [rbp-28h]
  _QWORD v86[3]; // [rsp+58h] [rbp-18h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  v86[0] = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = v86;
  v12 = *(_DWORD *)(a2 + 96);
  v13 = *(__int64 **)(a1 + 384);
  v86[2] = CleanEventMessage;
  v86[1] = a2;
  if ( v12 > 14 )
  {
    if ( v12 <= 21 )
    {
      if ( v12 == 21 )
      {
        LOBYTE(v9) = 1;
        v77 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), (__int64)v9, v10, v11);
        LOBYTE(v78) = 1;
        v79 = v77;
        v82 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), v78, v80, v81);
        PostMousePointerLeaveAndCleanup(v79, v82);
        goto LABEL_12;
      }
      v10 = 15LL;
      v31 = v12 - 15;
      if ( !v31 )
      {
        v68 = v13[10];
        if ( v68 || (v68 = v13[11]) != 0 )
        {
          v69 = *(_QWORD *)(v68 + 16);
          if ( a1 == v69 )
          {
            MouseKeyFlags = (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v69 + 384));
            v71 = *(_WORD *)(a2 + 40) - 165;
            v85 = v72;
            v73 = (v71 << 16) | MouseKeyFlags;
            v74 = *(_QWORD *)(a2 + 120);
            *(_QWORD *)(a2 + 40) = v73;
            *(_DWORD *)(a1 + 1096) |= 0x800u;
            *(_QWORD *)(a1 + 1100) = v74;
            v84 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v84;
            ++*(_DWORD *)(v72 + 8);
            xxxSendMessage((struct tagWND *)v72, 0x319u, *(_QWORD *)v72, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v76, v75);
            *(_DWORD *)(a1 + 1096) &= ~0x800u;
          }
          else
          {
            PostEventMessageEx(v69, *(_QWORD *)(v69 + 384), 0xFu, 0LL, 0, 0LL, *(_QWORD *)(a2 + 40), a2 + 120);
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
            v43 = v34 - 1;
            if ( v43 )
            {
              if ( v43 == 1 )
              {
                xxxDoDeferredPointerActivate(a2);
                CleanEventMessage((struct tagQMSG *)a2);
              }
            }
            else if ( *(_DWORD *)(a2 + 24) == 809 )
            {
              PostThreadMessage(a1);
            }
            else
            {
              xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
            }
          }
          else if ( gpqForeground )
          {
            v35 = *(_QWORD *)(gpqForeground + 80LL);
            if ( v35 )
            {
              if ( *(_QWORD *)(v35 + 16) == a1 && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
                xxxApplyGlobalInputSettings(0LL);
            }
          }
        }
        else
        {
          v62 = *(_DWORD *)(a2 + 32);
          LOBYTE(v9) = 1;
          v63 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, 15LL, v11);
          if ( v63 )
          {
            v64 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v84;
            v84 = v64;
            v85 = v63;
            ++*(_DWORD *)(v63 + 8);
            if ( v62 )
            {
              if ( v62 == 1 )
              {
                IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
                xxxEndSetWindowArrangement(v66, (struct tagRECT *)(v65 + 4));
              }
            }
            else
            {
              xxxArrangeWindow(v63, *(unsigned int *)(a2 + 40));
            }
            ThreadUnlock1(v64, v9);
          }
          if ( v62 == 1 )
            Win32FreePool(*(_QWORD *)(a2 + 40), v9, v10);
        }
        goto LABEL_12;
      }
      LOBYTE(v9) = 1;
      v67 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, 15LL, v11);
      if ( !v67 || (*(_BYTE *)(v67 + 55) & 1) == 0 )
        goto LABEL_12;
      v84 = *(_QWORD *)(a1 + 368);
      v85 = v67;
      *(_QWORD *)(a1 + 368) = &v84;
      ++*(_DWORD *)(v67 + 8);
    }
    else
    {
      v29 = v12 - 22;
      if ( !v29 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        ((void (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)((LARGE_INTEGER)PerformanceCounter.QuadPart, 0LL);
        goto LABEL_12;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
        goto LABEL_12;
      }
      v39 = v30 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          if ( v40 == 1 )
            xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        }
        else
        {
          xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
        }
        goto LABEL_12;
      }
      LOBYTE(v9) = 1;
      v67 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, v10, v11);
      if ( !v67 )
        goto LABEL_12;
      v84 = *(_QWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 368) = &v84;
      v85 = v67;
      ++*(_DWORD *)(v67 + 8);
    }
    v58 = (struct tagWND *)v67;
    goto LABEL_108;
  }
  if ( v12 == 14 )
  {
    v59 = *(_DWORD *)(a2 + 24);
    if ( v59 == 5 )
    {
      v60 = *(_DWORD *)(a2 + 40);
      v59 = *(_DWORD *)(a2 + 32);
      if ( v60 > 5 )
        v60 = 5;
    }
    else
    {
      v60 = 1;
    }
    if ( v60 )
    {
      v61 = (unsigned __int16)v59 | 0x10000LL;
      do
      {
        PostPlaySoundMessage(v61);
        --v60;
      }
      while ( v60 );
    }
    xxxSoundSentry();
  }
  else if ( v12 <= 7 )
  {
    if ( v12 == 7 )
    {
      LOBYTE(v9) = 1;
      v55 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, v10, v11);
      if ( v55 )
        PostTransformableMessage(v55, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
    }
    else
    {
      v21 = v12 - 1;
      if ( !v21 )
      {
        LOBYTE(v9) = 1;
        v42 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, v10, v11);
        if ( !v42 || *(char *)(v42 + 44) < 0 )
          goto LABEL_12;
        v84 = *(_QWORD *)(a1 + 368);
        *(_QWORD *)(a1 + 368) = &v84;
        v85 = v42;
        ++*(_DWORD *)(v42 + 8);
        xxxProcessShowWindowEvent(v42, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        goto LABEL_31;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
        {
          xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
          goto LABEL_12;
        }
        v24 = v23 - 1;
        if ( !v24 )
        {
          ProcessUpdateKeyStateEvent(v13, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
          goto LABEL_12;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          xxxDeactivate(a1, *(unsigned int *)(a2 + 32), *(unsigned int *)(a2 + 72));
          goto LABEL_12;
        }
        if ( v25 != 1 )
          goto LABEL_12;
        v26 = *(_QWORD *)(a2 + 40);
        if ( v26 )
        {
          LOBYTE(v9) = 1;
          v27 = HMValidateHandleNoSecure(v26, (__int64)v9, v10, v11);
          if ( !v27 )
            goto LABEL_12;
          v84 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v84;
          v85 = v27;
          ++*(_DWORD *)(v27 + 8);
          if ( gpqForeground )
          {
            if ( v27 == v13[11] )
            {
              v41 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 384LL) == gpqForeground;
              xxxSendMessage(
                (struct tagWND *)v27,
                0x86u,
                *(_QWORD *)(*(_QWORD *)(v27 + 16) + 384LL) == gpqForeground,
                0LL);
              if ( v41 )
              {
                xxxUpdateTray((struct tagWND *)v27);
                if ( (*(_DWORD *)(a2 + 24) & 2) == 0 )
                  xxxSetWindowPos(v27, 0, 0, 0, 0, 0, 3);
              }
            }
            else if ( (unsigned int)xxxActivateThisWindow((struct tagWND *)v27) )
            {
              v28 = (unsigned int)gpdwCPUserPreferencesMask;
              if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
                zzzActiveCursorTracking(v27);
            }
          }
          else
          {
            xxxSetForegroundWindow2((struct tagWND *)v27);
          }
          if ( (*(_DWORD *)(a2 + 24) & 1) != 0 && (*(_BYTE *)(v27 + 55) & 0x20) != 0 )
            PostMessage(v27, 274LL, 61728LL);
          goto LABEL_31;
        }
        xxxCancelTracking();
        zzzClipCursorEx(0LL, 0LL);
        zzzLockWindowUpdate2(0LL);
        v45 = *(_QWORD *)(a1 + 384);
        if ( *(_QWORD *)(a2 + 32) && (v46 = *(_QWORD *)(v45 + 88)) != 0 )
        {
          if ( v45 == gpqForeground )
          {
            v84 = *(_QWORD *)(a1 + 368);
            *(_QWORD *)(a1 + 368) = &v84;
            v85 = v46;
            ++*(_DWORD *)(v46 + 8);
            v47 = *(__int64 **)(v45 + 80);
            if ( v47 )
            {
              v48 = *(_QWORD *)(v47[2] + 392);
              if ( v48 )
                v49 = *(_QWORD *)(v48 + 40);
              else
                LODWORD(v49) = 0;
              xxxWindowEvent(0x80000002, v47, v49, 0, 33);
            }
            xxxSendMessage((struct tagWND *)v46, 0x86u, 1uLL, 0LL);
            xxxUpdateTray((struct tagWND *)v46);
            xxxSetWindowPos(v46, 0, 0, 0, 0, 0, 3);
            goto LABEL_31;
          }
        }
        else if ( v45 == gpqForeground )
        {
          goto LABEL_12;
        }
        v50 = *(_QWORD *)(a1 + 376);
        *(_DWORD *)(a1 + 440) &= ~0x20u;
        *(_DWORD *)(v50 + 12) &= ~0x100u;
        goto LABEL_12;
      }
      v51 = v13[9];
      if ( v51 )
      {
        v84 = *(_QWORD *)(a1 + 368);
        v85 = v51;
        *(_QWORD *)(a1 + 368) = &v84;
        ++*(_DWORD *)(v51 + 8);
        xxxSendMessage((struct tagWND *)v13[9], 0x1Fu, 0LL, 0LL);
        ThreadUnlock1(v53, v52);
        SetWakeBit(a1, 2LL, v54);
      }
    }
  }
  else
  {
    v14 = v12 - 8;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        xxxProcessAsyncSendMessage(a2 + 16, (__int64)v9);
        goto LABEL_12;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
            {
              if ( ((*(_DWORD *)(a1 + 600) | *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x800) != 0 )
                xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10LL);
              PostShellHookMessagesEx(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
            }
          }
          else
          {
            xxxProcessNotifyWinEvent(*(LARGE_INTEGER *)(a2 + 40), (__int64)v9, v10, v11);
          }
          goto LABEL_12;
        }
        v36 = *(_QWORD *)(a1 + 408);
        LOBYTE(v9) = 1;
        v37 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, v10, v11);
        v38 = *(_DWORD *)(v36 + 32);
        if ( (v38 & 0x5C0) != 0 )
        {
          v9 = *(_QWORD **)(v36 + 176);
          if ( *v9 == *(_QWORD *)(a2 + 16) && *(_DWORD *)(v36 + 184) == *(_DWORD *)(a2 + 32) )
            goto LABEL_12;
        }
        if ( (v38 & 0x100) != 0 )
          *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
        if ( v37 )
        {
          v84 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v84;
          v85 = v37;
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
          v84 = *(_QWORD *)(a1 + 368);
          *(_QWORD *)(a1 + 368) = &v84;
          v85 = v56;
          ++*(_DWORD *)(v56 + 8);
          xxxResetTooltip((struct tagWND *)v56);
        }
LABEL_31:
        ThreadUnlock1(v28, v9);
        goto LABEL_12;
      }
      LOBYTE(v9) = 1;
      v57 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), (__int64)v9, v10, v11);
      if ( !v57 )
        goto LABEL_12;
      v28 = *(_QWORD *)(a1 + 368);
      v84 = v28;
      *(_QWORD *)(a1 + 368) = &v84;
      v85 = v57;
      ++*(_DWORD *)(v57 + 8);
      if ( (*(_BYTE *)(v57 + 55) & 0x10) != 0 )
        goto LABEL_31;
      SetVisible(v57, 1LL);
      if ( (*(_BYTE *)(v57 + 55) & 0x20) != 0 )
        goto LABEL_31;
      v58 = (struct tagWND *)v57;
LABEL_108:
      xxxMinMaximizeEx(v58, 0LL);
      goto LABEL_31;
    }
    LOBYTE(v9) = 1;
    v44 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), (__int64)v9, v10, v11);
    v10 = v44;
    if ( v44 )
    {
      if ( *(char *)(v44 + 43) >= 0 )
      {
        xxxDestroyWindow((_QWORD *)v44);
      }
      else
      {
        v84 = *(_QWORD *)(a1 + 368);
        v85 = v44;
        *(_QWORD *)(a1 + 368) = &v84;
        ++*(_DWORD *)(v44 + 8);
        xxxFreeWindow((struct tagWND *)v44, (struct tagSwitchWndInfo *)&v84, v44);
      }
    }
  }
LABEL_12:
  v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11);
  if ( v19 )
    v5 = *v19;
  result = v86[0];
  *(_QWORD *)(v5 + 16) = v86[0];
  return result;
}
