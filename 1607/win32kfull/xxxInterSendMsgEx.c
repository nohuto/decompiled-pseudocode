/*
 * XREFs of xxxInterSendMsgEx @ 0x1C0085BE0
 * Callers:
 *     ClearSendMessages @ 0x1C00567F4 (ClearSendMessages.c)
 *     _ReplyMessage @ 0x1C005DE60 (_ReplyMessage.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     RemoveSMSReceiveList @ 0x1C007F5F4 (RemoveSMSReceiveList.c)
 *     xxxUpdateInputHangInfo @ 0x1C0082870 (xxxUpdateInputHangInfo.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0082AD0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00837D0 (TransformMessageBetweenCoordinateSpaces.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ProcessSuspendedSendMessage @ 0x1C0129AA0 (ProcessSuspendedSendMessage.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01D8678 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01E3710 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01E3904 (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01E39BC (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01E3B48 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     IsFmtBlocked @ 0x1C01E6738 (IsFmtBlocked.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C0245FD8 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, __int64 a2, ...)
{
  unsigned __int64 v2; // r15
  int v3; // ebx
  __int64 CurrentProcessWin32Process; // r13
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  unsigned int v14; // ecx
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int16 v20; // si
  unsigned __int64 v21; // r14
  struct tagMSGSQM_PROCESSPAIR *v22; // rcx
  struct tagMSGSQM_MSGRECORD *v23; // rcx
  struct tagMSGSQM_MSGRECORD *v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // rbx
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  __int64 CurrentProcess; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r13
  unsigned int v33; // r14d
  int v34; // r14d
  __int64 result; // rax
  UINT v36; // eax
  __int64 v37; // rax
  _OWORD *v38; // rdx
  _OWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  UINT v42; // edx
  size_t v43; // r8
  _QWORD *v44; // r12
  const void *v45; // rdx
  size_t v46; // r8
  _DWORD *v47; // r12
  __int64 v48; // rbx
  void *v49; // rbx
  size_t v50; // r8
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // r9
  __int64 v55; // rdx
  int v56; // ecx
  int v57; // ecx
  _QWORD *v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // rbx
  __int64 v61; // r8
  __int64 v62; // r9
  UINT v63; // esi
  unsigned int v64; // r14d
  __int64 v65; // r10
  _DWORD *v66; // rbx
  char v67; // r12
  __int64 v68; // rdx
  int v69; // esi
  __int64 v70; // rdx
  int v71; // r14d
  __int64 v72; // rcx
  int v73; // eax
  int v74; // ecx
  _OWORD *v76; // rbx
  __int128 *v77; // rax
  __int128 v78; // xmm0
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  _WORD *v82; // rdx
  unsigned __int64 v83; // rcx
  __int16 v84; // ax
  __int64 v85; // rbx
  int v86; // eax
  int v87; // eax
  int v88; // ecx
  int v89; // ecx
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rcx
  UINT puResult; // [rsp+40h] [rbp-118h] BYREF
  BOOLEAN v96; // [rsp+44h] [rbp-114h]
  size_t Size; // [rsp+48h] [rbp-110h]
  void *Src; // [rsp+50h] [rbp-108h]
  unsigned int v99[2]; // [rsp+58h] [rbp-100h] BYREF
  UINT uAugend[4]; // [rsp+60h] [rbp-F8h] BYREF
  int v101; // [rsp+70h] [rbp-E8h]
  struct tagMSGSQM_MSGRECORD *v102; // [rsp+78h] [rbp-E0h]
  unsigned int v103; // [rsp+80h] [rbp-D8h]
  _DWORD *v104; // [rsp+88h] [rbp-D0h]
  void *v105; // [rsp+90h] [rbp-C8h]
  __int64 v106; // [rsp+98h] [rbp-C0h]
  _OWORD *v107; // [rsp+A0h] [rbp-B8h]
  __int64 v108; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 HighLimit; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 LowLimit; // [rsp+B8h] [rbp-A0h] BYREF
  void *v111; // [rsp+C0h] [rbp-98h]
  _WORD *v112; // [rsp+C8h] [rbp-90h]
  char v113[8]; // [rsp+D0h] [rbp-88h] BYREF
  int v114; // [rsp+D8h] [rbp-80h]
  __int16 v115; // [rsp+DCh] [rbp-7Ch]
  __int16 v116; // [rsp+DEh] [rbp-7Ah]
  unsigned __int64 v117; // [rsp+E0h] [rbp-78h]
  _QWORD v118[10]; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v120; // [rsp+170h] [rbp+18h] BYREF
  va_list va; // [rsp+170h] [rbp+18h]
  __int64 v122; // [rsp+178h] [rbp+20h] BYREF
  va_list va1; // [rsp+178h] [rbp+20h]
  __int64 v124; // [rsp+180h] [rbp+28h]
  __int64 v125; // [rsp+188h] [rbp+30h]
  __int64 v126; // [rsp+190h] [rbp+38h]
  __int64 v127; // [rsp+198h] [rbp+40h]
  __int64 v128; // [rsp+1A0h] [rbp+48h]
  __int64 v129; // [rsp+1A8h] [rbp+50h]
  va_list va2; // [rsp+1B0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v120 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v122 = va_arg(va2, _QWORD);
  v124 = va_arg(va2, _QWORD);
  v125 = va_arg(va2, _QWORD);
  v126 = va_arg(va2, _QWORD);
  v127 = va_arg(va2, _QWORD);
  v128 = va_arg(va2, _QWORD);
  v129 = va_arg(va2, _QWORD);
  v2 = (unsigned int)a2;
  v3 = 0;
  v108 = 0LL;
  v107 = 0LL;
  v104 = 0LL;
  memset(uAugend, 0, sizeof(uAugend));
  v105 = 0LL;
  v101 = 0;
  v96 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  _InterlockedIncrement(&glInterSendMessage);
  v5 = v124;
  if ( v124 && (*(_DWORD *)(v124 + 440) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  v9 = 0x2000;
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_24;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( v6 == CurrentProcessWin32Process || (unsigned int)v2 > 0xD && (unsigned int)(v2 - 78) > 0x23A )
    goto LABEL_24;
  if ( (unsigned int)v2 <= 0xD0 )
  {
    if ( (_DWORD)v2 != 208 )
    {
      v7 = 0x1C0000000uLL;
      switch ( (int)v2 )
      {
        case 12:
        case 188:
          goto LABEL_19;
        case 13:
        case 196:
        case 204:
          v6 = *(_QWORD *)(a1 + 152);
          if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(v6 + 10) || (*(_BYTE *)(a1 + 52) & 0x20) == 0 )
            goto LABEL_24;
          UserSetLastError(5LL);
          break;
        case 78:
          goto LABEL_23;
        default:
          goto LABEL_24;
      }
      goto LABEL_23;
    }
LABEL_19:
    if ( (!gbEnforceUIPI || *(_QWORD *)v6 == gpepCSRSS)
      && (*(_DWORD *)(v6 + 732) != *(_DWORD *)(CurrentProcessWin32Process + 732)
       || *(_DWORD *)(v6 + 736) != *(_DWORD *)(CurrentProcessWin32Process + 736)) )
    {
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( (_DWORD)v2 == 272 )
  {
LABEL_23:
    UserSetLastError(5LL);
    return 0LL;
  }
  if ( (_DWORD)v2 == 353 || (_DWORD)v2 == 424 || (_DWORD)v2 == 563 || (_DWORD)v2 == 648 )
    goto LABEL_19;
LABEL_24:
  if ( (_DWORD)v128 )
  {
LABEL_116:
    v13 = (_DWORD *)v122;
    goto LABEL_118;
  }
  v10 = 0LL;
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v11 = v126;
    if ( !v126 )
      goto LABEL_29;
  }
  v10 = *(_QWORD *)(v11 + 376);
LABEL_29:
  if ( v5 )
    CurrentProcessWin32Process = *(_QWORD *)(v5 + 376);
  if ( v10 == CurrentProcessWin32Process )
    goto LABEL_116;
  if ( (_DWORD)v2 == 717 )
    return 0LL;
  v12 = *(_QWORD *)(v10 + 792);
  if ( v12 )
  {
    v7 = (unsigned __int16)v2;
    v6 = *(_QWORD *)(v12 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13));
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8LL * (((unsigned __int16)v2 >> 9) & 0xF));
      if ( v8 )
      {
        v6 = (unsigned int)(1 << (v2 & 7));
        v7 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F;
        if ( ((unsigned __int8)v6 & *(_BYTE *)(v7 + v8)) != 0 )
          v3 = 1;
      }
    }
  }
  v13 = (_DWORD *)v122;
  if ( v3 )
  {
    MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v10, v122, 1, 3);
LABEL_55:
    v16 = v120;
LABEL_56:
    if ( v3 )
      goto LABEL_71;
    goto LABEL_57;
  }
  if ( !a1 )
    goto LABEL_55;
  v106 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) + 800LL);
  if ( !v6 )
    goto LABEL_47;
  v14 = 0;
  v7 = *(unsigned int *)v6;
  if ( (_DWORD)v7 )
  {
    do
    {
      if ( a1 == *(_QWORD *)(v6 + 16LL * v14 + 24) )
        break;
      ++v14;
    }
    while ( v14 < (unsigned int)v7 );
  }
  if ( v14 < (unsigned int)v7 )
  {
    _mm_lfence();
    v15 = *(_QWORD *)(v6 + 16 * (v14 + 1LL));
    v13 = (_DWORD *)v122;
  }
  else
  {
LABEL_47:
    v15 = 0LL;
  }
  v106 = v15;
  if ( !v15
    || (v7 = (unsigned __int16)v2, (v6 = *(_QWORD *)(v15 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13))) == 0)
    || (v8 = *(_QWORD *)(v6 + 8 * (((unsigned __int64)(unsigned __int16)v2 >> 9) & 0xF))) == 0
    || (v6 = (unsigned int)(1 << (v2 & 7)),
        v7 = ((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F,
        v3 = 1,
        ((unsigned __int8)v6 & *(_BYTE *)(v7 + v8)) == 0) )
  {
    v3 = 0;
  }
  v16 = v120;
  if ( v3 )
  {
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v10,
      (__int64)v13,
      1,
      4);
    goto LABEL_56;
  }
LABEL_57:
  v3 = 0;
  if ( (unsigned int)v2 <= 0x33 || (unsigned int)(v2 - 127) <= 0x2A0 )
  {
    if ( (unsigned int)v2 > 0x308 )
    {
      v6 = 0x1C0000000uLL;
      switch ( (int)v2 )
      {
        case 777:
        case 778:
        case 779:
        case 780:
        case 782:
          LOBYTE(v3) = (unsigned int)IsFmtBlocked(128LL) == 0;
          break;
        case 781:
        case 787:
        case 794:
        case 795:
        case 799:
          goto LABEL_67;
        default:
          break;
      }
    }
    else if ( (_DWORD)v2 == 776
           || (unsigned int)v2 <= 0x33 && (v17 = 0x8000000006029LL, _bittest64(&v17, v2))
           || (_DWORD)v2 == 127
           || (_DWORD)v2 == 773 )
    {
LABEL_67:
      v3 = 1;
    }
  }
  if ( v3 )
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v10,
      (__int64)v13,
      1,
      2);
LABEL_71:
  if ( v3 )
    goto LABEL_106;
  if ( (_DWORD)v2 == 274 && ((v16 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v16 != 61792 )
  {
    v3 = 1;
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v10,
      (__int64)v13,
      1,
      2);
    goto LABEL_106;
  }
  if ( *(_QWORD *)v10 == gpepCSRSS )
  {
    v6 = 0LL;
  }
  else
  {
    v9 = *(_DWORD *)(v10 + 824);
    v6 = *(unsigned int *)(v10 + 828);
  }
  v18 = *(_QWORD *)(CurrentProcessWin32Process + 824);
  v7 = gbEnforceUIPI;
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v18 <= v9 )
    {
      v3 = 0;
      if ( (_DWORD)v18 == v9 )
      {
        v19 = HIDWORD(v18);
        if ( (_DWORD)v19 == (_DWORD)v6 || (_DWORD)v19 == -1 || (_DWORD)v6 == -1 )
          v3 = 1;
      }
    }
    else
    {
      v3 = 1;
    }
  }
  else
  {
    v3 = gbEnforceUIPI + 1;
  }
  if ( v3 )
  {
    v20 = 1;
    if ( gbEnforceUIPI )
      v20 = 5;
    v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gfWinMsgSQMIsOptedIn
      || (v22 = MsgSQMGetSourceListProcessPair(
                  (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                  (struct tagPROCESSINFO *)v10,
                  gbEnforceUIPI)) == 0LL )
    {
      v13 = (_DWORD *)v122;
      goto LABEL_106;
    }
    v114 = v2;
    v115 = 1;
    v116 = v20;
    v117 = 0LL;
    if ( (unsigned int)v2 >= 0x111 )
    {
      if ( (unsigned int)v2 > 0x112 && (_DWORD)v2 != 281 && (_DWORD)v2 != 528 )
      {
        v13 = (_DWORD *)v122;
        if ( (_DWORD)v2 == 793 )
          v117 = ((unsigned __int64)v122 >> 16) & 0xFFF;
        goto LABEL_102;
      }
      v117 = v120;
    }
    v13 = (_DWORD *)v122;
LABEL_102:
    v23 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v22 + 6, (const struct tagMSGSQM_MSGRECORD *)v113, v21);
    v102 = v23;
    if ( v23 && !(unsigned int)MsgSQMUpdateMsgRecord(v23, v21, v7) )
    {
      MsgSQMFlushMsgRecord((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v10, v24);
      MsgSQMUpdateMsgRecord(v102, v21, v25);
    }
LABEL_106:
    if ( v3 )
      goto LABEL_117;
  }
  if ( a1 )
  {
    if ( (_DWORD)v2 == 793 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v6 + 1248) == a1 && *(_QWORD *)(v6 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
      {
        v3 = 1;
        goto LABEL_114;
      }
    }
  }
  if ( !v3 )
  {
    EtwTraceUIPIMsgError(CurrentProcessWin32Process, v10, (unsigned int)v2, v120, v13);
    UserSetLastError(5LL);
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v10,
      (__int64)v13,
      1,
      0);
LABEL_114:
    if ( !v3 )
      return 0LL;
  }
LABEL_117:
  v5 = v124;
LABEL_118:
  if ( (_DWORD)v2 == 576 )
  {
    LOBYTE(v6) = 20;
    if ( !HMValidateHandle((__int64)v13, v6, v7, v8) )
      return 0LL;
  }
  else if ( (_DWORD)v2 == 281 )
  {
    LOBYTE(v6) = 21;
    if ( !HMValidateHandle((__int64)v13, v6, v7, v8) )
      return 0LL;
  }
  v26 = v126;
  if ( (*(_DWORD *)(v126 + 1096) & 0x20) != 0 )
  {
    v27 = v127;
    if ( v127 )
    {
      if ( (*(_DWORD *)(v127 + 32) & 0x40) != 0 )
        goto LABEL_131;
      if ( *(_DWORD *)v127 == 2 && *(_DWORD *)(v127 + 36) )
        return 0LL;
    }
    if ( !v5 )
    {
LABEL_132:
      if ( !v27 && !(unsigned int)ProcessSuspendedSendMessage(v26, a1, (unsigned int)v2, v120, v13)
        || *(_DWORD *)(v26 + 488) > 0x2710u )
      {
        return 0LL;
      }
      goto LABEL_135;
    }
    v28 = *(_QWORD **)(v126 + 376);
    CurrentProcess = PsGetCurrentProcess(v127);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v28) )
      return 0LL;
    v27 = v127;
    v26 = v126;
LABEL_131:
    if ( v5 )
      goto LABEL_135;
    goto LABEL_132;
  }
LABEL_135:
  v30 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v31 = v30;
  v102 = (struct tagMSGSQM_MSGRECORD *)v30;
  if ( !v30 )
    return 0LL;
  v32 = 0LL;
  *(_QWORD *)(v30 + 120) = 0LL;
  LODWORD(Size) = 0;
  v33 = 0;
  puResult = 0;
  Src = v13;
  *(_DWORD *)(v30 + 128) = *(_DWORD *)(gptiCurrent + 1268LL);
  if ( v127 && *(_DWORD *)v127 == 33 )
  {
    v34 = v129;
    goto LABEL_233;
  }
  if ( (unsigned int)v2 > 0x38 && (unsigned int)(v2 - 70) > 0x2FC )
    goto LABEL_191;
  if ( (unsigned int)v2 > 0x143 )
  {
    if ( (unsigned int)v2 > 0x283 )
    {
      switch ( (_DWORD)v2 )
      {
        case 0x30C:
LABEL_188:
          *(_OWORD *)uAugend = *(_OWORD *)v13;
          v101 = 2 - ((uAugend[1] & 0x80000000) != 0);
          v13 = uAugend;
          v122 = (__int64)uAugend;
          if ( _mm_srli_si128(*(__m128i *)uAugend, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v124 )
          {
            v33 = uAugend[1] & 0x7FFFFFFF;
            puResult = uAugend[1] & 0x7FFFFFFF;
          }
          break;
        case 0x32C:
          v33 = 328;
          puResult = 328;
LABEL_192:
          v37 = Win32AllocPoolWithQuota(v33, 1668510549LL);
          *(_QWORD *)(v31 + 120) = v37;
          if ( v37 )
          {
            v105 = v13;
            if ( (_DWORD)v2 != 13 )
            {
              if ( (unsigned int)v2 <= 0x83 )
              {
                if ( (_DWORD)v2 == 131 )
                {
                  v39 = Src;
                  if ( v120 )
                  {
                    *(_OWORD *)v37 = *(_OWORD *)Src;
                    *(_OWORD *)(v37 + 16) = v39[1];
                    *(_OWORD *)(v37 + 32) = v39[2];
                    *(_QWORD *)(v37 + 48) = *((_QWORD *)v39 + 6);
                    v40 = *(_QWORD *)(v31 + 120) + 56LL;
                    *(_QWORD *)(v37 + 48) = v40;
                    v41 = *((_QWORD *)v39 + 6);
                    *(_OWORD *)v40 = *(_OWORD *)v41;
                    *(_OWORD *)(v40 + 16) = *(_OWORD *)(v41 + 16);
                    *(_QWORD *)(v40 + 32) = *(_QWORD *)(v41 + 32);
                  }
                  else
                  {
                    memmove((void *)v37, Src, v33);
                  }
                  v13 = *(_DWORD **)(v31 + 120);
                  v122 = (__int64)v13;
                  goto LABEL_222;
                }
                if ( (_DWORD)v2 == 12 )
                {
LABEL_210:
                  v13 = (_DWORD *)v37;
                  v122 = v37;
                  v42 = uAugend[1] ^ (*(_DWORD *)(v37 + 4) ^ uAugend[1]) & 0x7FFFFFFF;
                  *(_DWORD *)(v37 + 4) = v42;
                  *(_DWORD *)v37 = uAugend[0];
                  *(_QWORD *)(v37 + 8) = v37 + 16;
                  *(_DWORD *)(v37 + 4) ^= (v42 ^ (v33 - 16)) & 0x7FFFFFFF;
                  v43 = *(unsigned int *)(v37 + 4);
                  LODWORD(v43) = v43 & 0x7FFFFFFF;
                  memmove((void *)(v37 + 16), *(const void **)&uAugend[2], v43);
                  goto LABEL_222;
                }
                if ( (unsigned int)v2 > 0x19 )
                {
                  if ( (unsigned int)v2 > 0x1B )
                  {
                    if ( (_DWORD)v2 == 74 )
                    {
                      v13 = (_DWORD *)v37;
                      v122 = v37;
                      v38 = v107;
                      *(_OWORD *)v37 = *v107;
                      *(_QWORD *)(v37 + 16) = *((_QWORD *)v38 + 2);
                      if ( *((_QWORD *)v38 + 2) )
                      {
                        *(_QWORD *)(v37 + 16) = v37 + 24;
                        memmove((void *)(v37 + 24), *((const void **)v38 + 2), *((unsigned int *)v38 + 2));
                      }
                      goto LABEL_222;
                    }
                    goto LABEL_212;
                  }
                  goto LABEL_210;
                }
LABEL_212:
                memmove((void *)v37, Src, v33);
                v13 = *(_DWORD **)(v31 + 120);
                v122 = (__int64)v13;
                goto LABEL_222;
              }
              if ( (unsigned int)v2 <= 0x220 )
              {
                if ( (_DWORD)v2 != 544 )
                {
                  switch ( (int)v2 )
                  {
                    case 194:
                    case 323:
                    case 325:
                    case 330:
                    case 332:
                    case 333:
                    case 344:
                    case 384:
                    case 385:
                    case 396:
                    case 397:
                    case 399:
                    case 406:
                    case 418:
                      goto LABEL_210;
                    case 196:
                      *(_WORD *)v37 = **(_WORD **)&uAugend[2];
                      goto LABEL_221;
                    case 328:
                    case 393:
                      goto LABEL_221;
                    case 401:
                      LODWORD(Size) = v33;
                      goto LABEL_212;
                    default:
                      goto LABEL_212;
                  }
                }
                v44 = v104;
                v45 = (const void *)*((_QWORD *)v104 + 10);
                if ( v45 )
                {
                  v46 = (unsigned int)v104[19];
                  LODWORD(v46) = v46 & 0x7FFFFFFF;
                  memmove((void *)v37, v45, v46);
                  *v44 = *(_QWORD *)(v31 + 120);
                }
                v47 = v104;
                if ( v104[14] )
                {
                  v48 = (unsigned int)v104[19];
                  LODWORD(v48) = v48 & 0x7FFFFFFF;
                  v49 = (void *)(*(_QWORD *)(v31 + 120) + v48);
                  Src = v49;
                  v50 = (unsigned int)v104[15];
                  LODWORD(v50) = v50 & 0x7FFFFFFF;
                  memmove(v49, *((const void **)v104 + 8), v50);
                  *((_QWORD *)v47 + 1) = v49;
                }
                goto LABEL_222;
              }
              if ( (_DWORD)v2 != 780 )
              {
                if ( (_DWORD)v2 == 812 )
                {
                  MakeUpKeyboardCorrectionCalloutContents(v13, v120, v37);
                  v32 = 0LL;
                  v120 = 0LL;
                  v13 = *(_DWORD **)(v31 + 120);
                  v122 = (__int64)v13;
                  goto LABEL_223;
                }
                goto LABEL_212;
              }
            }
LABEL_221:
            LODWORD(Size) = v33;
            v105 = *(void **)&uAugend[2];
            *(_QWORD *)&uAugend[2] = *(_QWORD *)(v31 + 120);
          }
LABEL_222:
          v32 = 0LL;
LABEL_223:
          if ( v33 && !*(_QWORD *)(v31 + 120) )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v31);
            return 0LL;
          }
          v34 = v129;
          if ( (_DWORD)v129
            && a1
            && (unsigned int)IsWindowDesktopComposed(a1)
            && (unsigned int)(v2 - 577) > 3
            && ((unsigned int)(v2 - 581) > 0x12 || (_DWORD)v2 == 589) )
          {
            TransformMessageBetweenCoordinateSpaces(
              (unsigned int)v2,
              1LL,
              (unsigned __int64 *)va,
              (__int16 *)va1,
              (_DWORD *)a1,
              0LL);
            v13 = (_DWORD *)v122;
          }
LABEL_233:
          *(_QWORD *)(v31 + 112) = 0LL;
          v51 = (_QWORD *)(v31 + 16);
          *(_QWORD *)(v31 + 16) = 0LL;
          HMAssignmentLock(v31 + 112, a1);
          *(_DWORD *)(v31 + 104) = v2;
          *(_QWORD *)(v31 + 88) = v120;
          *(_QWORD *)(v31 + 96) = v13;
          *(_DWORD *)(v31 + 84) = 0;
          *(_QWORD *)(v31 + 72) = 0LL;
          if ( (_DWORD)v2 == 576 || (_DWORD)v2 == 281 )
          {
            v52 = *(_QWORD *)(*((_QWORD *)&gSharedInfo + 1)
                            + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v13);
            v53 = v126;
            if ( v52 )
              HMChangeOwnerThread(v52, v126);
          }
          else
          {
            v53 = v126;
          }
          if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
            __fastfail(3u);
          *(_QWORD *)v31 = gsmsList;
          *(_QWORD *)(v31 + 8) = gsmsList;
          *(_QWORD *)(gsmsList + 8LL) = v31;
          gsmsList = v31;
          *(_DWORD *)(v31 + 80) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_QWORD *)(v31 + 40) = v53;
          v54 = v124;
          *(_QWORD *)(v31 + 32) = v124;
          *(_DWORD *)(v31 + 132) = v125;
          *(_QWORD *)(v31 + 64) = 0LL;
          v55 = v127;
          if ( v127 && (*(_DWORD *)v127 & 1) != 0 )
          {
            v56 = 2048;
            if ( (*(_DWORD *)v127 & 0x100) != 0 )
              v56 = 1024;
            v57 = *(_DWORD *)(v31 + 84) | v56;
            *(_DWORD *)(v31 + 84) = v57;
            *(_QWORD *)(v31 + 48) = *(_QWORD *)(v55 + 8);
            *(_QWORD *)(v31 + 56) = *(_QWORD *)(v55 + 16);
            if ( (*(_DWORD *)v55 & 0x20) != 0 )
            {
              *(_DWORD *)(v31 + 84) = v57 | 0x200;
              *(_QWORD *)(v31 + 72) = *(_QWORD *)(v55 + 24);
            }
            else
            {
              *(_DWORD *)(v31 + 84) = v57 | 0x100;
              *(_QWORD *)(v31 + 64) = gptiCurrent;
            }
          }
          if ( v34 )
            *(_DWORD *)(v31 + 84) |= 0x10000u;
          v58 = *(_QWORD **)(v53 + 480);
          if ( *v58 != v53 + 472 )
            __fastfail(3u);
          *v51 = v53 + 472;
          *(_QWORD *)(v31 + 24) = v58;
          *v58 = v51;
          *(_QWORD *)(v53 + 480) = v51;
          v59 = *(_DWORD *)(v53 + 488) + 1;
          *(_DWORD *)(v53 + 488) = v59;
          if ( v59 > gcSmsHighWaterMark )
            gcSmsHighWaterMark = v59;
          if ( v54 )
          {
            v108 = *(_QWORD *)(v54 + 456);
            *(_QWORD *)(v54 + 456) = v31;
          }
          else
          {
            *(_DWORD *)(v31 + 84) |= 8u;
          }
          if ( (*(_DWORD *)(v31 + 84) & 0x200) != 0 )
            goto LABEL_265;
          if ( (unsigned int)(v2 - 577) > 3 && ((unsigned int)(v2 - 581) > 0x12 || (_DWORD)v2 == 589) )
          {
            if ( (_DWORD)v2 != 528 || (_WORD)v120 != 582 )
              goto LABEL_265;
          }
          else if ( (_DWORD)v2 == 595 )
          {
LABEL_265:
            v60 = v55;
            EtwTraceBeginSendMessage(v31, v54, v55);
            v62 = v124;
            if ( !v124 )
            {
              SetWakeBit(v53, 64LL, v61);
              EtwTraceEndSendMessage(v31);
              return 1LL;
            }
            v63 = 0;
            puResult = 0;
            v99[0] = 0;
            v64 = 512;
            LODWORD(Src) = 512;
            v65 = v126;
            if ( (*(_DWORD *)(v126 + 440) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v126 + 400) + 6LL) |= 0x40u;
              *(_WORD *)(*(_QWORD *)(v65 + 400) + 4LL) |= 0x40u;
              if ( (*(_BYTE *)(*(_QWORD *)(v65 + 400) + 10LL) & 0x40) != 0 )
              {
                KeSetEvent(*(PRKEVENT *)(v65 + 648), 2, 0);
                v62 = v124;
              }
            }
            if ( v60 )
            {
              if ( (*(_BYTE *)(v60 + 32) & 1) != 0 )
                v64 = 33280;
              LODWORD(Src) = v64;
              v99[0] = *(_DWORD *)(v60 + 36);
            }
            if ( !*(_DWORD *)(v62 + 720) )
            {
              v96 = KeSetKernelStackSwapEnable(0);
              v62 = v124;
            }
            ++*(_DWORD *)(v62 + 720);
            for ( ; (*(_DWORD *)(v31 + 84) & 1) == 0; v62 = v124 )
            {
              if ( v63 )
                break;
              v66 = 0LL;
              v67 = 0;
              *(_WORD *)(*(_QWORD *)(v62 + 400) + 4LL) &= ~0x200u;
              if ( (_DWORD)v2 == 788
                && v122
                && *(_DWORD *)(v126 + 552) <= 0x501u
                && *(_DWORD *)(v126 + 568)
                && (v66 = *(_DWORD **)v122, (unsigned int)(*(_DWORD *)(*(_QWORD *)v122 + 48LL) - 13) <= 1) )
              {
                v68 = gptiCurrent;
                v118[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v118;
                v118[1] = v66;
                ++v66[2];
                v67 = 1;
              }
              else
              {
                v68 = gptiCurrent;
              }
              v69 = 0;
              if ( (v64 & 7) == 7 || (v64 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v68 + 384LL) + 72LL) )
              {
                v69 = 1;
                xxxUpdateInputHangInfo(0LL, 0);
              }
              v71 = xxxRealSleepThread(v64, v99[0], 0, 0, 0LL);
              if ( v69 )
                xxxUpdateInputHangInfo(0LL, 1);
              v63 = v71 == 0;
              puResult = v63;
              if ( v67 )
              {
                v66[22] ^= (v66[22] ^ (v63 << 7)) & 0x80;
                v72 = (unsigned int)v66[22];
                if ( !v71 )
                {
                  v73 = v72 ^ ((unsigned __int8)v72 ^ (unsigned __int8)(v72 + 1)) & 0x7F;
                  v66[22] = v73;
                  if ( (v73 & 0x7Fu) > 0xA )
                    v66[16] |= 0x10u;
                }
                ThreadUnlock1(v72, v70);
              }
              if ( !v71 && v127 )
              {
                v74 = *(_DWORD *)(v127 + 32);
                if ( ((v74 & 0x10) != 0 || (*(_DWORD *)(v31 + 84) & 0x20) != 0) && (*(_DWORD *)(v31 + 84) & 0x10) != 0 )
                {
                  v99[0] = 0;
                  v63 = 0;
                  puResult = 0;
                }
                if ( (v74 & 8) != 0 && !(unsigned int)IsThreadHung((_QWORD *)v126, 0) )
                {
                  v63 = 0;
                  puResult = 0;
LABEL_306:
                  EtwTraceConvertTimeOutToBlocking();
                  goto LABEL_307;
                }
                if ( !v63 )
                  goto LABEL_306;
              }
LABEL_307:
              v64 = (unsigned int)Src;
            }
            if ( (*(_DWORD *)(v62 + 720))-- == 1 )
            {
              KeSetKernelStackSwapEnable(v96);
              v62 = v124;
            }
            if ( (*(_DWORD *)(v62 + 440) & 1) == 0 )
            {
              *(_WORD *)(*(_QWORD *)(v62 + 400) + 6LL) |= 0x200u;
              *(_WORD *)(*(_QWORD *)(v62 + 400) + 4LL) |= 0x200u;
              if ( (*(_WORD *)(*(_QWORD *)(v62 + 400) + 10LL) & 0x200) != 0 )
                KeSetEvent(*(PRKEVENT *)(v62 + 648), 2, 0);
            }
            if ( v63 )
              goto LABEL_344;
            if ( !(_DWORD)Size )
            {
              if ( (_DWORD)v2 == 831 && (_DWORD)v129 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
                TransformMessageBetweenCoordinateSpaces(831LL, 1LL, (unsigned __int64 *)va, (__int16 *)va1, 0LL, a1);
              goto LABEL_344;
            }
            v76 = v105;
            *(_QWORD *)v99 = v105;
            if ( (unsigned int)v2 < 0x46 )
              goto LABEL_330;
            if ( (unsigned int)v2 <= 0x47 )
            {
              if ( (_DWORD)v129 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                TransformMessageBetweenCoordinateSpaces(
                  (unsigned int)v2,
                  1LL,
                  (unsigned __int64 *)va,
                  (__int16 *)v99,
                  0LL,
                  a1);
                v76 = *(_OWORD **)v99;
              }
              v81 = *(_QWORD *)(v31 + 120);
              *v76 = *(_OWORD *)v81;
              v76[1] = *(_OWORD *)(v81 + 16);
              *((_QWORD *)v76 + 4) = *(_QWORD *)(v81 + 32);
              goto LABEL_344;
            }
            if ( (_DWORD)v2 == 131 )
            {
              if ( (_DWORD)v129 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
              {
                TransformMessageBetweenCoordinateSpaces(131LL, 1LL, (unsigned __int64 *)va, (__int16 *)v99, 0LL, a1);
                v76 = *(_OWORD **)v99;
              }
              v77 = *(__int128 **)(v31 + 120);
              v78 = *v77;
              if ( v120 )
              {
                v79 = *((_QWORD *)v76 + 6);
                *v76 = v78;
                v76[1] = v77[1];
                v76[2] = v77[2];
                *((_QWORD *)v76 + 6) = v79;
                v80 = *((_QWORD *)v77 + 6);
                *(_OWORD *)v79 = *(_OWORD *)v80;
                *(_OWORD *)(v79 + 16) = *(_OWORD *)(v80 + 16);
                *(_QWORD *)(v79 + 32) = *(_QWORD *)(v80 + 32);
              }
              else
              {
                *v76 = v78;
              }
            }
            else
            {
LABEL_330:
              v82 = *(_WORD **)(v31 + 120);
              if ( v101 )
              {
                if ( v101 == 1 )
                {
                  strncpycch(v105, v82, (unsigned int)Size);
                }
                else
                {
                  v83 = (unsigned __int64)(unsigned int)Size >> 1;
                  v103 = (unsigned int)Size >> 1;
                  v112 = v82;
                  v111 = v105;
                  while ( (_DWORD)v83 )
                  {
                    v84 = *v82;
                    *(_WORD *)v76 = *v82;
                    v76 = (_OWORD *)((char *)v76 + 2);
                    v111 = v76;
                    v112 = ++v82;
                    if ( !v84 )
                      break;
                    LODWORD(v83) = v83 - 1;
                    v103 = v83;
                  }
                }
              }
              else
              {
                memmove(v105, v82, (unsigned int)Size);
              }
            }
LABEL_344:
            EtwTraceEndSendMessage(v31);
            *(_QWORD *)(v124 + 456) = v108;
            v85 = v127;
            if ( v127 )
            {
              **(_QWORD **)(v127 + 40) = *(_QWORD *)(v31 + 72);
              if ( (*(_DWORD *)(v85 + 32) & 0x20) != 0 && (*(_DWORD *)(v31 + 84) & 0x8000) != 0 )
                UserSetLastError(1400LL);
              else
                v32 = v63 == 0;
            }
            else
            {
              v32 = *(_QWORD *)(v31 + 72);
            }
            if ( v85 || v63 )
            {
              v86 = *(_DWORD *)(v31 + 84);
              if ( (v86 & 1) == 0 )
              {
                v87 = v86 | 1;
                *(_DWORD *)(v31 + 84) = v87;
                if ( (v87 & 0x4000) != 0 )
                {
                  *(_DWORD *)(v31 + 84) = v87 | 8;
                }
                else
                {
                  RemoveSMSReceiveList(v31, v126);
                  *(_DWORD *)(v31 + 84) |= 0x10u;
                }
              }
            }
            if ( (*(_DWORD *)(v31 + 84) & 0x4010) != 0x10 )
              *(_DWORD *)(v31 + 84) |= 8u;
            if ( (*(_DWORD *)(v31 + 84) & 0x8008) != 8 )
            {
              v88 = *(_DWORD *)(v31 + 104);
              if ( v88 == 576 )
              {
                FreeTouchInputInfo(*(_QWORD *)(v31 + 96), 0LL);
              }
              else if ( v88 == 281 )
              {
                FreeGestureInfo(*(_QWORD *)(v31 + 96), 0LL);
              }
              if ( (*(_DWORD *)(v31 + 84) & 0x200) == 0 )
              {
                if ( ((v89 = *(_DWORD *)(v31 + 104), (unsigned int)(v89 - 577) <= 3)
                   || (unsigned int)(v89 - 581) <= 0x12 && v89 != 589)
                  && v89 != 595
                  || v89 == 528 && *(_WORD *)(v31 + 88) == 582 )
                {
                  PointerList::UnreferenceMsgData(*(_QWORD *)(v31 + 96), 6LL);
                }
              }
              v90 = *(_QWORD *)v31;
              v91 = *(_QWORD **)(v31 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v31 + 8LL) != v31 || *v91 != v31 )
                __fastfail(3u);
              *v91 = v90;
              *(_QWORD *)(v90 + 8) = v91;
              HMAssignmentUnlock(v31 + 112);
              v94 = *(_QWORD *)(v31 + 120);
              if ( v94 )
                Win32FreePool(v94, v92, v93);
              Win32FreeToPagedLookasideList(SMSLookaside, v31);
            }
            return v32;
          }
          _InterlockedIncrement((volatile signed __int32 *)(v122 + 24));
          ++*(_BYTE *)(v122 + 54);
          goto LABEL_265;
        case 0x341:
          v33 = 64;
          puResult = 64;
          LODWORD(Size) = 64;
          break;
        case 0x342:
          v33 = 40;
          puResult = 40;
          break;
      }
    }
    else
    {
      if ( (_DWORD)v2 != 643 )
      {
        switch ( (int)v2 )
        {
          case 325:
          case 397:
          case 406:
            goto LABEL_162;
          case 328:
          case 393:
            goto LABEL_188;
          case 330:
          case 332:
          case 333:
          case 344:
          case 384:
          case 385:
          case 396:
          case 399:
          case 418:
            goto LABEL_161;
          case 401:
          case 402:
LABEL_178:
            v33 = 4 * v120;
            puResult = 4 * v120;
            goto LABEL_191;
          case 536:
            if ( !v13 || (v120 & 0x8000) == 0 || v13 >= MmSystemRangeStart && v124 )
              goto LABEL_191;
            if ( UIntAdd(0x14u, v13[4], &puResult) == -2147024362 )
              goto LABEL_165;
            goto LABEL_166;
          case 537:
            if ( v13 && (v120 & 0x8000) != 0 && (v13 < MmSystemRangeStart || !v124) )
            {
LABEL_171:
              v33 = *v13;
              puResult = *v13;
            }
            goto LABEL_191;
          case 544:
            v104 = v13;
            v33 = (v13[15] & 0x7FFFFFFF) + (v13[19] & 0x7FFFFFFF);
            puResult = v33;
            goto LABEL_191;
          default:
            goto LABEL_191;
        }
      }
      if ( v120 == 24 )
      {
        v33 = (*v13 << 9) + 4;
        puResult = v33;
      }
    }
LABEL_191:
    if ( !v33 )
      goto LABEL_222;
    goto LABEL_192;
  }
  if ( (_DWORD)v2 == 323 )
  {
LABEL_161:
    if ( *(_DWORD *)(gptiCurrent + 1268LL) != 1 )
    {
LABEL_162:
      *(_OWORD *)uAugend = *(_OWORD *)v13;
      if ( _mm_srli_si128(*(__m128i *)uAugend, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v124 )
      {
        if ( UIntAdd(uAugend[0], 0x12u, &puResult) == -2147024362 )
        {
LABEL_165:
          Win32FreeToPagedLookasideList(SMSLookaside, v31);
          return 8LL;
        }
LABEL_166:
        v33 = puResult;
      }
    }
    goto LABEL_191;
  }
  switch ( (int)v2 )
  {
    case 1:
    case 129:
      UserSetLastError(5LL);
      Win32FreeToPagedLookasideList(SMSLookaside, v31);
      return 0LL;
    case 12:
    case 26:
    case 194:
      if ( !v13 )
        goto LABEL_191;
      goto LABEL_162;
    case 13:
    case 196:
      goto LABEL_188;
    case 27:
      goto LABEL_162;
    case 56:
      v33 = *(unsigned __int16 *)v13;
      puResult = v33;
      goto LABEL_191;
    case 70:
      v33 = 40;
      puResult = 40;
      LODWORD(Size) = 40;
      goto LABEL_191;
    case 73:
      v33 = v120;
      puResult = v120;
      goto LABEL_191;
    case 74:
      v107 = v13;
      if ( !*((_QWORD *)v13 + 2) )
      {
        v33 = 24;
        puResult = 24;
        goto LABEL_192;
      }
      v33 = v13[2] + 24;
      puResult = v33;
      if ( v33 >= 0x18 )
        goto LABEL_191;
      Win32FreeToPagedLookasideList(SMSLookaside, v30);
      result = 0LL;
      break;
    case 83:
      goto LABEL_171;
    case 131:
      v36 = 96;
      if ( !v120 )
        v36 = 16;
      v33 = v36;
      puResult = v36;
      LODWORD(Size) = v36;
      goto LABEL_191;
    case 203:
      goto LABEL_178;
    default:
      goto LABEL_191;
  }
  return result;
}
