/*
 * XREFs of xxxCallHook2 @ 0x1C0083C30
 * Callers:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1C0080010 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C00EE520 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     xxxCallNextHookEx @ 0x1C00EE654 (xxxCallNextHookEx.c)
 *     xxxCallMouseHook @ 0x1C0129C98 (xxxCallMouseHook.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01DDD0C (xxxCallJournalRecordHook.c)
 * Callees:
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     xxxHkCallHook @ 0x1C0084730 (xxxHkCallHook.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     FreeHook @ 0x1C00A4550 (FreeHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     xxxLoadHmodIndex @ 0x1C0109684 (xxxLoadHmodIndex.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 xxxCallHook2(__int64 a1, unsigned int a2, __int64 a3, int *a4, _DWORD *a5, char a6, ...)
{
  __int64 v7; // r8
  __int64 Valid; // rbx
  _DWORD *v9; // r10
  unsigned int v11; // r14d
  int v12; // ecx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // edx
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // r12
  unsigned __int64 v18; // rdx
  __int16 ProcessMachine; // di
  BOOL v20; // edi
  __int64 v21; // r10
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // ecx
  __int64 CurrentProcess; // rax
  unsigned int v35; // r12d
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagHOOK *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  char v49; // r14
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r14
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  int CurrentThreadDpiAwarenessContext; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v67; // [rsp+58h] [rbp-180h] BYREF
  unsigned int v68; // [rsp+60h] [rbp-178h]
  __int64 v69; // [rsp+68h] [rbp-170h]
  __int64 v70; // [rsp+70h] [rbp-168h]
  int ProcessInformation; // [rsp+98h] [rbp-140h] BYREF
  char v72; // [rsp+9Ch] [rbp-13Ch]
  __int64 v73; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-120h]
  __int64 v75; // [rsp+C8h] [rbp-110h] BYREF
  unsigned int v76; // [rsp+D0h] [rbp-108h]
  int *v77; // [rsp+D8h] [rbp-100h]
  __int64 v78; // [rsp+E0h] [rbp-F8h]
  __int64 v79; // [rsp+E8h] [rbp-F0h]
  _QWORD v80[3]; // [rsp+110h] [rbp-C8h] BYREF
  _DWORD v81[10]; // [rsp+128h] [rbp-B0h] BYREF
  __int64 *v82; // [rsp+150h] [rbp-88h]
  _BYTE v83[24]; // [rsp+158h] [rbp-80h] BYREF
  _DWORD v84[2]; // [rsp+170h] [rbp-68h] BYREF
  int *v85; // [rsp+178h] [rbp-60h]
  __int64 v86; // [rsp+180h] [rbp-58h]
  unsigned int v87; // [rsp+188h] [rbp-50h]

  v69 = a3;
  v7 = a2;
  Valid = a1;
  v9 = a5;
  v70 = (__int64)a5;
  if ( !a1 )
    return 0LL;
  v11 = *(_DWORD *)(a1 + 48);
  v68 = v11;
  if ( gptiCurrent == gptiRit && v11 - 13 > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 408LL) && v11 != 14 )
    return dword_1C02EA610[v11 + 1];
  if ( v11 > 6 )
  {
    if ( v11 == 12 )
    {
      v12 = a4[6];
      goto LABEL_20;
    }
    if ( v11 != -1 )
    {
LABEL_17:
      v12 = 0;
      LOWORD(v13) = 0;
      goto LABEL_21;
    }
  }
  else if ( v11 != 6 )
  {
    if ( !v11 )
    {
      v12 = *a4;
      LOWORD(v13) = 0;
      goto LABEL_21;
    }
    if ( v11 != 3 )
    {
      if ( v11 == 4 )
      {
        v12 = a4[4];
        v13 = *((_QWORD *)a4 + 1);
        goto LABEL_21;
      }
      goto LABEL_17;
    }
  }
  v12 = a4[2];
LABEL_20:
  v13 = *((_QWORD *)a4 + 2);
LABEL_21:
  if ( (unsigned int)(v12 - 577) > 3 && ((unsigned int)(v12 - 581) > 0x12 || v12 == 589) )
  {
    if ( v12 != 528 || (_WORD)v13 != 582 )
      goto LABEL_30;
  }
  else if ( v12 == 595 )
  {
LABEL_30:
    v14 = 0x1C0000000uLL;
    while ( 1 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)Valid
                     + *((_QWORD *)&gSharedInfo + 1)
                     + 17LL) & 1) != 0 )
      {
        Valid = PhkNextValid(Valid, gSharedInfo, v7);
        goto LABEL_167;
      }
      if ( v9 )
        *v9 = *(_DWORD *)(Valid + 64) & 2;
      v15 = *(_DWORD *)(Valid + 48);
      v16 = v15 + 1;
      v17 = *(_BYTE *)(v16 + v14 + 3051320);
      if ( v15 == 10 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 8) != 0 && (((_DWORD)v7 - 4) & 0xFFFFFFF3) == 0 && (_DWORD)v7 != 16 )
          v17 |= 0x10u;
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 && (_DWORD)v7 == 11 )
          v17 |= 0x10u;
      }
      v18 = *(_QWORD *)(Valid + 16);
      v20 = 0;
      if ( v18 != gptiCurrent )
      {
        if ( (v17 & 0x24) != 0
          || (v16 = *(_DWORD *)(gptiCurrent + 440LL) & 0x100, (*(_DWORD *)(v18 + 440) & 0x100) != (_DWORD)v16)
          || (_DWORD)v16
          && (ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v18 + 376)),
              (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL)) != ProcessMachine)
          || (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) != 0
          && (v16 = *(_QWORD *)(Valid + 16), *(_QWORD *)(v16 + 376) != *(_QWORD *)(gptiCurrent + 376LL))
          || (unsigned int)IsProcessDwm(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 376LL))
          || !gbEnforceUIPI
          && (*(_DWORD *)(Valid + 64) & 1) != 0
          && (v18 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL),
              v16 = *(unsigned int *)(v18 + 732),
              *(_QWORD *)(v18 + 732) != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 732LL))
          && (*(_DWORD *)(gptiCurrent + 440LL) & 0x400000) == 0
          && ((_DWORD)v16 != luidSystem[0] || (v16 = luidSystem[1], *(_DWORD *)(v18 + 736) != (_DWORD)v16))
          || (v16 = *(_QWORD *)(Valid + 16), *(_QWORD *)(v16 + 376) != *(_QWORD *)(gptiCurrent + 376LL))
          && (unsigned __int8)IsRestricted(*(_QWORD *)v16) )
        {
          v20 = 1;
        }
      }
      if ( (unsigned int)(*(_DWORD *)(Valid + 48) - 13) > 1 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
        v21 = *(_QWORD *)(Valid + 16);
        v22 = *(_QWORD *)(v21 + 376);
        v23 = *(_QWORD *)(v22 + 824);
        v18 = gbEnforceUIPI;
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v23 <= (unsigned int)v16 )
          {
            if ( (_DWORD)v23 != (_DWORD)v16
              || (v24 = HIDWORD(v23), v16 >>= 32, (_DWORD)v24 != (_DWORD)v16) && (_DWORD)v24 != -1 && (_DWORD)v16 != -1 )
            {
              if ( *(int *)(v22 + 12) >= 0 )
              {
                v17 &= ~0x10u;
                EtwTraceUIPIHookError(Valid, v17, v21, gptiCurrent, v11, a2, v69, a4);
              }
              v20 = 1;
            }
          }
        }
        goto LABEL_93;
      }
      if ( a6 )
        goto LABEL_90;
      v18 = gpqForeground;
      if ( !gpqForeground )
        goto LABEL_90;
      v18 = *(_QWORD *)(gpqForeground + 380LL);
      v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL) + 824LL);
      v16 = gbEnforceUIPI;
      if ( !gbEnforceUIPI )
        goto LABEL_90;
      if ( (unsigned int)v25 > (unsigned int)v18 )
        goto LABEL_90;
      if ( (_DWORD)v25 == (_DWORD)v18 )
      {
        v26 = HIDWORD(v25);
        v18 >>= 32;
        if ( (_DWORD)v26 == (_DWORD)v18 || (_DWORD)v26 == -1 || (_DWORD)v18 == -1 )
          goto LABEL_90;
      }
      if ( (unsigned int)IsForegroundShellFrameQueueAccessible(*(_QWORD *)(Valid + 16))
        || (v16 = *(_QWORD *)(Valid + 16),
            v18 = *(unsigned int *)(*(_QWORD *)(v16 + 376) + 12LL),
            (v18 & 0x80000000) != 0LL) )
      {
LABEL_90:
        if ( *(_DWORD *)(Valid + 48) != 14 )
          goto LABEL_93;
        if ( *(_DWORD *)(gptiCurrent + 1224LL) == -1 )
          goto LABEL_93;
        v18 = *(_QWORD *)(gptiCurrent + 1224LL);
        v29 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL);
        v30 = *(_QWORD *)(v29 + 824);
        v16 = gbEnforceUIPI;
        if ( !gbEnforceUIPI )
          goto LABEL_93;
        if ( (unsigned int)v30 > (unsigned int)v18 )
          goto LABEL_93;
        if ( (_DWORD)v30 == (_DWORD)v18 )
        {
          v31 = HIDWORD(v30);
          v18 >>= 32;
          if ( (_DWORD)v31 == (_DWORD)v18 || (_DWORD)v31 == -1 || (_DWORD)v18 == -1 )
            goto LABEL_93;
        }
        if ( *(int *)(v29 + 12) < 0 )
          goto LABEL_93;
        v28 = *(_QWORD *)(gptiCurrent + 1224LL);
        v27 = 0LL;
        v16 = *(_QWORD *)(Valid + 16);
      }
      else
      {
        v27 = gpqForeground;
        v28 = *(_QWORD *)(gpqForeground + 380LL);
      }
      EtwTraceUIPIInputError(v16, 0LL, v27, v28, 6);
      v17 &= ~0x10u;
LABEL_93:
      if ( !v20
        && (*(_DWORD *)(Valid + 64) & 1) != 0
        && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL)) )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL);
        if ( *(int *)(v18 + 12) >= 0 )
        {
          v16 = *(_QWORD *)(gptiCurrent + 376LL);
          if ( v18 != v16 && (*(_DWORD *)(v18 + 768) & 0x100) == 0 )
          {
            if ( (unsigned int)IsImmersiveAppRestricted(v16)
              || (ProcessInformation = 6,
                  ZwQueryInformationProcess(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    ProcessCookie|ProcessUserModeIOPL,
                    &ProcessInformation,
                    8u,
                    0LL) < 0)
              || (v72 & 1) != 0 )
            {
              v20 = 1;
            }
          }
        }
      }
      v80[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v80;
      v80[1] = Valid;
      ++*(_DWORD *)(Valid + 8);
      if ( !v20 )
      {
        v32 = *(_DWORD *)(Valid + 68);
        if ( v32 != -1 )
        {
          v33 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL);
          if ( !_bittest(&v33, v32) )
          {
            CurrentProcess = PsGetCurrentProcess();
            if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(*(unsigned int *)(Valid + 68)) )
              goto LABEL_154;
          }
        }
        if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x400) == 0
          || *(_DWORD *)(Valid + 48) == 9 )
        {
          v35 = a2;
        }
        else
        {
          v84[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
          v84[1] = 0;
          v35 = a2;
          v87 = a2;
          v86 = v69;
          v85 = a4;
          if ( (unsigned int)xxxCallHook(0LL, *(int *)(Valid + 48), v84, 9LL) )
            goto LABEL_154;
        }
        v36 = *(_QWORD *)(gptiCurrent + 608LL);
        v73 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v73;
        v74 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v37 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( v37 )
          *(_QWORD *)(v37 + 48) = Valid;
        HMAssignmentLock(gptiCurrent + 608LL, Valid);
        v67 = xxxHkCallHook(Valid, v35, v69, a4);
        HMAssignmentLock(gptiCurrent + 608LL, v36);
        v40 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( v40 )
          *(_QWORD *)(v40 + 48) = v36;
        ThreadUnlock1(v39, v38);
        if ( (*(_DWORD *)(Valid + 64) & 0x10) != 0 )
        {
          Valid = PhkNextValid(Valid, v41, v43);
          v46 = (struct tagHOOK *)ThreadUnlock1(v45, v44);
          if ( v46 )
            FreeHook(v46);
          v11 = v68;
          goto LABEL_166;
        }
        goto LABEL_153;
      }
      if ( (v17 & 0x10) != 0 )
      {
        v77 = a4;
        v75 = Valid;
        v76 = a2;
        v78 = -1LL;
        v79 = -1LL;
        v16 = *(unsigned int *)(*(_QWORD *)(Valid + 16) + 1096LL);
        if ( (v16 & 0x20) == 0 )
        {
          v47 = *(_QWORD *)(gptiCurrent + 608LL);
          v73 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v73;
          v74 = v47;
          if ( v47 )
            ++*(_DWORD *)(v47 + 8);
          HMAssignmentLock(gptiCurrent + 608LL, Valid);
          v48 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( v48 )
            *(_QWORD *)(v48 + 48) = Valid;
          v49 = v17 & 0x20;
          if ( (v17 & 0x20) != 0 )
          {
            v50 = gnllHooksTimeout;
            if ( *(char *)(Valid + 88) < 0 )
              v50 = 20;
          }
          else
          {
            v50 = 200;
          }
          if ( v49 || (v17 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) != 0 )
          {
            v81[0] = 2;
            v81[8] = 2;
            v81[9] = v50;
            v82 = &v67;
            if ( v49 )
            {
              v78 = *(_QWORD *)(gptiCurrent + 1216LL);
              v79 = *(_QWORD *)(gptiCurrent + 1224LL);
              v77 = *(int **)(gptiCurrent + 1232LL);
            }
            if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000) != 0
              || (unsigned int)IsThreadHung(*(_QWORD **)(Valid + 16), 0)
              || (CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v58, v57, v59),
                  !xxxInterSendMsgEx(
                     0,
                     788,
                     v69,
                     (unsigned int)&v75,
                     gptiCurrent,
                     CurrentThreadDpiAwarenessContext,
                     *(_QWORD *)(Valid + 16),
                     (__int64)v81,
                     1,
                     0)) )
            {
              v61 = dword_1C02EA610[v68 + 1];
              v67 = v61;
            }
            else
            {
              v61 = v67;
            }
            if ( v49 && v61 )
              _InterlockedExchange(
                (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL) + 12LL),
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          }
          else
          {
            v51 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 376LL), 0LL, 2LL);
            v55 = v51;
            if ( v51 )
              PushW32ThreadLock(v51, v83, ReleaseWakeReference);
            v56 = W32GetCurrentThreadDpiAwarenessContext(v53, v52, v54);
            v67 = xxxInterSendMsgEx(
                    0,
                    788,
                    v69,
                    (unsigned int)&v75,
                    gptiCurrent,
                    v56,
                    *(_QWORD *)(Valid + 16),
                    0LL,
                    1,
                    0);
            if ( v55 )
              PopAndFreeAlwaysW32ThreadLock(v83);
          }
          HMAssignmentLock(gptiCurrent + 608LL, v47);
          v64 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( v64 )
            *(_QWORD *)(v64 + 48) = v47;
          ThreadUnlock1(v63, v62);
LABEL_153:
          ThreadUnlock1(v42, v41);
          return v67;
        }
      }
      while ( 1 )
      {
LABEL_154:
        if ( *(_QWORD *)(Valid + 40) )
        {
          Valid = *(_QWORD *)(Valid + 40);
          goto LABEL_158;
        }
        if ( (*(_DWORD *)(Valid + 64) & 1) != 0 )
          break;
        v18 = *(_DWORD *)(Valid + 48) + 1;
        v16 = gptiCurrent;
        Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * v18 + 32);
LABEL_158:
        if ( !Valid || (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
          goto LABEL_162;
      }
      Valid = 0LL;
LABEL_162:
      v65 = ThreadUnlock1(v16, v18);
      if ( v65 )
      {
        if ( (*(_DWORD *)(v65 + 64) & 0x10) != 0 )
          FreeHook((struct tagHOOK *)v65);
      }
LABEL_166:
      v14 = 0x1C0000000uLL;
      v9 = (_DWORD *)v70;
LABEL_167:
      v7 = a2;
      if ( !Valid )
        return *(int *)(v14 + 4LL * (v11 + 1) + 3057168);
    }
  }
  if ( ((v11 - 3) & 0xFFFFFFF6) == 0 && v11 != 11 )
    goto LABEL_30;
  return dword_1C02EA610[v11 + 1];
}
