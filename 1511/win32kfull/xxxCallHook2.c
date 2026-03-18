/*
 * XREFs of xxxCallHook2 @ 0x1C005BCC0
 * Callers:
 *     xxxPointerCallHook @ 0x1C000B9B8 (xxxPointerCallHook.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0058A00 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x1C00593B0 (fnHkINLPCWPEXSTRUCT.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxCallNextHookEx @ 0x1C0084A54 (xxxCallNextHookEx.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     xxxCallMouseHook @ 0x1C01076C8 (xxxCallMouseHook.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7198 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E74B0 (xxxCallJournalRecordHook.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxHkCallHook @ 0x1C005C740 (xxxHkCallHook.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     FreeHook @ 0x1C00826A0 (FreeHook.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     xxxLoadHmodIndex @ 0x1C011ACB4 (xxxLoadHmodIndex.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallHook2(__int64 a1, unsigned int a2, __int64 a3, int *a4, __int64 a5)
{
  __int64 v5; // r11
  __int64 Valid; // rbx
  __int64 v8; // r8
  unsigned int v10; // r14d
  int v11; // ecx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // r12
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  int v20; // esi
  unsigned __int64 v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 CurrentProcess; // rax
  int *v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagHOOK *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  char v49; // r14
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v58; // [rsp+58h] [rbp-180h] BYREF
  int *v59; // [rsp+60h] [rbp-178h]
  unsigned int v60; // [rsp+68h] [rbp-170h]
  int ProcessInformation; // [rsp+90h] [rbp-148h] BYREF
  char v62; // [rsp+94h] [rbp-144h]
  __int64 v63; // [rsp+A0h] [rbp-138h] BYREF
  unsigned int v64; // [rsp+A8h] [rbp-130h]
  int *v65; // [rsp+B0h] [rbp-128h]
  __int64 v66; // [rsp+B8h] [rbp-120h]
  __int64 v67; // [rsp+C0h] [rbp-118h]
  __int64 v68; // [rsp+C8h] [rbp-110h]
  __int64 v69; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-F0h]
  _QWORD v71[6]; // [rsp+100h] [rbp-D8h] BYREF
  _DWORD v72[10]; // [rsp+130h] [rbp-A8h] BYREF
  __int64 *v73; // [rsp+158h] [rbp-80h]
  _QWORD v74[3]; // [rsp+160h] [rbp-78h] BYREF
  _DWORD v75[2]; // [rsp+178h] [rbp-60h] BYREF
  int *v76; // [rsp+180h] [rbp-58h]
  __int64 v77; // [rsp+188h] [rbp-50h]
  unsigned int v78; // [rsp+190h] [rbp-48h]

  v59 = a4;
  v5 = a3;
  Valid = a1;
  v8 = a5;
  v68 = a5;
  if ( !a1 )
    return 0LL;
  v10 = *(_DWORD *)(a1 + 48);
  v60 = v10;
  if ( gptiCurrent == gptiRit && v10 - 13 > 1 )
    return 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10000001) != 0 || !*(_QWORD *)(gptiCurrent + 408LL) && v10 != 14 )
    return dword_1C02E52A0[v10 + 1];
  if ( v10 > 6 )
  {
    if ( v10 == 12 )
    {
      v11 = a4[6];
      goto LABEL_20;
    }
    if ( v10 != -1 )
      goto LABEL_17;
LABEL_18:
    v11 = a4[2];
LABEL_20:
    v12 = *((_QWORD *)a4 + 2);
    goto LABEL_21;
  }
  switch ( v10 )
  {
    case 6u:
      goto LABEL_18;
    case 0u:
      v11 = *a4;
      LOWORD(v12) = 0;
      goto LABEL_21;
    case 3u:
      goto LABEL_18;
  }
  if ( v10 != 4 )
  {
LABEL_17:
    v11 = 0;
    LOWORD(v12) = 0;
    goto LABEL_21;
  }
  v11 = a4[4];
  v12 = *((_QWORD *)a4 + 1);
LABEL_21:
  if ( (unsigned int)(v11 - 577) > 3 && ((unsigned int)(v11 - 581) > 0x12 || v11 == 589) )
  {
    if ( v11 == 528 && (_WORD)v12 == 582 )
    {
LABEL_28:
      if ( ((v10 - 3) & 0xFFFFFFF6) != 0 || v10 == 11 )
        return dword_1C02E52A0[v10 + 1];
    }
  }
  else if ( v11 != 595 )
  {
    goto LABEL_28;
  }
  v13 = 0x1C0000000uLL;
  do
  {
    if ( v8 )
      *(_DWORD *)v8 = *(_DWORD *)(Valid + 64) & 2;
    v14 = *(int *)(Valid + 48);
    v15 = byte_1C02E1BF1[v14];
    if ( (_DWORD)v14 == 10 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 8) != 0 && ((a2 - 4) & 0xFFFFFFF3) == 0 && a2 != 16 )
        v15 |= 0x10u;
      if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) != 0 && a2 == 11 )
        v15 |= 0x10u;
    }
    v16 = *(_QWORD *)(Valid + 16);
    if ( v16 != gptiCurrent )
    {
      if ( (v15 & 0x24) != 0 )
        goto LABEL_58;
      v13 = *(unsigned int *)(gptiCurrent + 440LL);
      if ( (((unsigned int)v13 ^ *(_DWORD *)(v16 + 440)) & 0x100) != 0
        || (v13 & 0xC) != 0 && *(_QWORD *)(v16 + 376) != *(_QWORD *)(gptiCurrent + 376LL) )
      {
        goto LABEL_58;
      }
      if ( (unsigned int)IsProcessDwm(**(_QWORD **)(v16 + 376))
        || !gbEnforceUIPI
        && (*(_DWORD *)(Valid + 64) & 1) != 0
        && ((v13 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL),
             v17 = *(_DWORD *)(v13 + 740),
             v18 = *(_QWORD *)(gptiCurrent + 376LL),
             v17 != *(_DWORD *)(v18 + 740))
         || *(_DWORD *)(v13 + 744) != *(_DWORD *)(v18 + 744))
        && (*(_DWORD *)(gptiCurrent + 440LL) & 0x400000) == 0
        && (v17 != luidSystem[0] || *(_DWORD *)(v13 + 744) != luidSystem[1])
        || (v19 = *(_QWORD **)(Valid + 16), v19[47] != *(_QWORD *)(gptiCurrent + 376LL))
        && (unsigned __int8)IsRestricted(*v19) )
      {
        a4 = v59;
        v5 = a3;
LABEL_58:
        v20 = 1;
        goto LABEL_60;
      }
      a4 = v59;
      v5 = a3;
    }
    v20 = 0;
LABEL_60:
    if ( (unsigned int)(*(_DWORD *)(Valid + 48) - 13) > 1 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
      v22 = *(_QWORD *)(Valid + 16);
      v8 = *(_QWORD *)(v22 + 376);
      v23 = *(_QWORD *)(v8 + 832);
      v13 = gbEnforceUIPI;
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v23 <= (unsigned int)v21 )
        {
          if ( (_DWORD)v23 != (_DWORD)v21
            || (v24 = HIDWORD(v23), v21 >>= 32, (_DWORD)v24 != (_DWORD)v21) && (_DWORD)v24 != -1 && (_DWORD)v21 != -1 )
          {
            if ( *(int *)(v8 + 12) >= 0 )
            {
              v15 &= ~0x10u;
              EtwTraceUIPIHookError(Valid, v15, v22, gptiCurrent, v10, a2, v5, a4);
            }
            v20 = 1;
          }
        }
      }
      goto LABEL_91;
    }
    v21 = gpqForeground;
    if ( !gpqForeground )
      goto LABEL_88;
    v21 = *(_QWORD *)(gpqForeground + 372LL);
    v8 = *(_QWORD *)(Valid + 16);
    v25 = *(_QWORD *)(*(_QWORD *)(v8 + 376) + 832LL);
    v13 = gbEnforceUIPI;
    if ( !gbEnforceUIPI )
      goto LABEL_88;
    if ( (unsigned int)v25 > (unsigned int)v21 )
      goto LABEL_88;
    if ( (_DWORD)v25 == (_DWORD)v21 )
    {
      v26 = HIDWORD(v25);
      v21 >>= 32;
      if ( (_DWORD)v26 == (_DWORD)v21 || (_DWORD)v26 == -1 || (_DWORD)v21 == -1 )
        goto LABEL_88;
    }
    if ( IsForegroundShellFrameQueueAccessible(*(_QWORD *)(Valid + 16))
      || (v21 = *(_QWORD *)(Valid + 16),
          v13 = *(unsigned int *)(*(_QWORD *)(v21 + 376) + 12LL),
          (v13 & 0x80000000) != 0LL) )
    {
LABEL_88:
      if ( *(_DWORD *)(Valid + 48) != 14 )
        goto LABEL_91;
      if ( *(_DWORD *)(gptiCurrent + 1200LL) == -1 )
        goto LABEL_91;
      v21 = *(_QWORD *)(gptiCurrent + 1200LL);
      v8 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL);
      v29 = *(_QWORD *)(v8 + 832);
      v13 = gbEnforceUIPI;
      if ( !gbEnforceUIPI )
        goto LABEL_91;
      if ( (unsigned int)v29 > (unsigned int)v21 )
        goto LABEL_91;
      if ( (_DWORD)v29 == (_DWORD)v21 )
      {
        v30 = HIDWORD(v29);
        v21 >>= 32;
        if ( (_DWORD)v30 == (_DWORD)v21 || (_DWORD)v30 == -1 || (_DWORD)v21 == -1 )
          goto LABEL_91;
      }
      if ( *(int *)(v8 + 12) < 0 )
        goto LABEL_91;
      v28 = *(_QWORD *)(gptiCurrent + 1200LL);
      v27 = 0LL;
      v21 = *(_QWORD *)(Valid + 16);
    }
    else
    {
      v27 = gpqForeground;
      v28 = *(_QWORD *)(gpqForeground + 372LL);
    }
    EtwTraceUIPIInputError(v21, 0LL, v27, v28, 6);
    v15 &= ~0x10u;
LABEL_91:
    if ( !v20
      && (*(_DWORD *)(Valid + 64) & 1) != 0
      && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL)) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(Valid + 16) + 376LL);
      if ( *(int *)(v13 + 12) >= 0 )
      {
        v21 = *(_QWORD *)(gptiCurrent + 376LL);
        if ( v13 != v21 && (*(_DWORD *)(v13 + 776) & 0x100) == 0 )
        {
          if ( (unsigned int)IsImmersiveAppRestricted(v21)
            || (ProcessInformation = 6,
                ZwQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  ProcessCookie|ProcessUserModeIOPL,
                  &ProcessInformation,
                  8u,
                  0LL) < 0)
            || (v62 & 1) != 0 )
          {
            v20 = 1;
          }
        }
      }
    }
    v71[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v71;
    v71[1] = Valid;
    ++*(_DWORD *)(Valid + 8);
    if ( !v20 )
    {
      v31 = *(unsigned int *)(Valid + 68);
      if ( (_DWORD)v31 != -1 )
      {
        v32 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 380LL);
        if ( !_bittest((const int *)&v32, v31) )
        {
          CurrentProcess = PsGetCurrentProcess(v32, v31, v8, a4);
          if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(*(unsigned int *)(Valid + 68)) )
            goto LABEL_153;
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x400) == 0
        || *(_DWORD *)(Valid + 48) == 9 )
      {
        v34 = v59;
      }
      else
      {
        v75[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
        v75[1] = 0;
        v78 = a2;
        v77 = a3;
        v34 = v59;
        v76 = v59;
        if ( (unsigned int)xxxCallHook(0LL, *(int *)(Valid + 48), v75) )
          goto LABEL_153;
      }
      v13 = gSharedInfo;
      v21 = *(unsigned __int8 *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)Valid
                               + *((_QWORD *)&gSharedInfo + 1)
                               + 17LL);
      if ( (v21 & 1) != 0 )
        goto LABEL_153;
      v35 = *(_QWORD *)(gptiCurrent + 608LL);
      v69 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v69;
      v70 = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      v36 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v36 )
        *(_QWORD *)(v36 + 48) = Valid;
      HMAssignmentLock(gptiCurrent + 608LL, Valid);
      v58 = xxxHkCallHook(Valid, a2, a3, v34);
      HMAssignmentLock(gptiCurrent + 608LL, v35);
      v39 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v39 )
        *(_QWORD *)(v39 + 48) = v35;
      ThreadUnlock1(v38, v37);
      if ( (*(_DWORD *)(Valid + 64) & 0x10) != 0 )
      {
        Valid = PhkNextValid(Valid, v40, v42, v43);
        v46 = (struct tagHOOK *)ThreadUnlock1(v45, v44);
        if ( v46 )
          FreeHook(v46);
        v10 = v60;
        goto LABEL_163;
      }
      goto LABEL_152;
    }
    if ( (v15 & 0x10) != 0 )
    {
      v65 = v59;
      v63 = Valid;
      v64 = a2;
      v66 = -1LL;
      v67 = -1LL;
      v21 = *(unsigned int *)(*(_QWORD *)(Valid + 16) + 1072LL);
      if ( (v21 & 0x20) == 0 )
      {
        v47 = *(_QWORD *)(gptiCurrent + 608LL);
        v69 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v69;
        v70 = v47;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        HMAssignmentLock(gptiCurrent + 608LL, Valid);
        v48 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( v48 )
          *(_QWORD *)(v48 + 48) = Valid;
        v49 = v15 & 0x20;
        if ( (v15 & 0x20) != 0 )
        {
          v50 = gnllHooksTimeout;
          if ( (*(_BYTE *)(Valid + 88) & 0x80) != 0 )
            v50 = 20;
        }
        else
        {
          v50 = 200;
        }
        if ( v49 || (v15 & 4) == 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) != 0 )
        {
          v72[0] = 2;
          v72[8] = 2;
          v72[9] = v50;
          v73 = &v58;
          if ( v49 )
          {
            v66 = *(_QWORD *)(gptiCurrent + 1192LL);
            v67 = *(_QWORD *)(gptiCurrent + 1200LL);
            v65 = *(int **)(gptiCurrent + 1208LL);
          }
          if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000) != 0
            || (unsigned int)IsThreadHung(*(_QWORD *)(Valid + 16), 0LL)
            || !xxxInterSendMsgEx(
                  0,
                  788,
                  a3,
                  (unsigned int)&v63,
                  gptiCurrent,
                  *(_QWORD *)(Valid + 16),
                  (__int64)v72,
                  1,
                  0) )
          {
            v53 = dword_1C02E52A0[v60 + 1];
            v58 = v53;
          }
          else
          {
            v53 = v58;
          }
          if ( v49 && v53 )
            _InterlockedExchange(
              (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 400LL) + 12LL),
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        }
        else
        {
          v51 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(Valid + 16) + 376LL), 0LL, 2LL);
          v52 = v51;
          if ( v51 )
            PushW32ThreadLock(v51, v74, (__int64)ReleaseWakeReference);
          v58 = xxxInterSendMsgEx(0, 788, a3, (unsigned int)&v63, gptiCurrent, *(_QWORD *)(Valid + 16), 0LL, 1, 0);
          if ( v52 )
            PopAndFreeAlwaysW32ThreadLock((__int64)v74);
        }
        HMAssignmentLock(gptiCurrent + 608LL, v47);
        v56 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( v56 )
          *(_QWORD *)(v56 + 48) = v47;
        ThreadUnlock1(v55, v54);
LABEL_152:
        ThreadUnlock1(v41, v40);
        return v58;
      }
    }
    while ( 1 )
    {
LABEL_153:
      if ( *(_QWORD *)(Valid + 40) )
      {
        Valid = *(_QWORD *)(Valid + 40);
        goto LABEL_157;
      }
      if ( (*(_DWORD *)(Valid + 64) & 1) != 0 )
        break;
      v13 = *(int *)(Valid + 48);
      v21 = gptiCurrent;
      Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 8 * v13 + 40);
LABEL_157:
      if ( !Valid || (*(_DWORD *)(Valid + 64) & 0x80u) == 0 )
        goto LABEL_161;
    }
    Valid = 0LL;
LABEL_161:
    ThreadUnlock1(v21, v13);
LABEL_163:
    a4 = v59;
    v13 = 0x1C0000000uLL;
    v8 = v68;
    v5 = a3;
  }
  while ( Valid );
  return dword_1C02E52A0[v10 + 1];
}
