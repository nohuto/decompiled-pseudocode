/*
 * XREFs of xxxInterSendMsgEx @ 0x1C006E0C0
 * Callers:
 *     _ReplyMessage @ 0x1C00030B0 (_ReplyMessage.c)
 *     xxxSendMessageCallback @ 0x1C004DF0C (xxxSendMessageCallback.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     xxxReceiverDied @ 0x1C007B2C4 (xxxReceiverDied.c)
 *     ClearSendMessages @ 0x1C008B114 (ClearSendMessages.c)
 * Callees:
 *     wcsncpycch @ 0x1C0059B8C (wcsncpycch.c)
 *     UIntAdd @ 0x1C005D488 (UIntAdd.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxUpdateInputHangInfo @ 0x1C006B110 (xxxUpdateInputHangInfo.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C0070A00 (TransformMessageBetweenCoordinateSpaces.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     MSGSQMAddMessage @ 0x1C00E274C (MSGSQMAddMessage.c)
 *     ProcessSuspendedSendMessage @ 0x1C00E7914 (ProcessSuspendedSendMessage.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E1FFC (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01EC634 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01EC828 (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01EC8E0 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01ECA6C (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     IsFmtBlocked @ 0x1C01F0A94 (IsFmtBlocked.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C0249D78 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, unsigned int a2, ...)
{
  unsigned __int64 v2; // r13
  BOOL v3; // ebx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  _DWORD *v12; // rsi
  unsigned int v13; // ecx
  unsigned int i; // r8d
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int16 v21; // si
  unsigned __int64 v22; // r12
  struct tagMSGSQM_PROCESSPAIR *v23; // rcx
  struct tagMSGSQM_MSGRECORD *v24; // rax
  unsigned int v25; // r8d
  struct tagMSGSQM_MSGRECORD *v26; // r13
  struct tagMSGSQM_MSGRECORD *v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r14
  _QWORD *v32; // rbx
  __int64 CurrentProcess; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned int v36; // r14d
  int v37; // r14d
  __int64 result; // rax
  UINT v39; // eax
  __int64 v40; // rax
  _OWORD *v41; // rdx
  _OWORD *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  UINT v45; // edx
  size_t v46; // r8
  _QWORD *v47; // r15
  const void *v48; // rdx
  size_t v49; // r8
  _DWORD *v50; // r15
  __int64 v51; // rbx
  void *v52; // rbx
  size_t v53; // r8
  __int64 *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r15
  int v59; // eax
  int v60; // ecx
  int v61; // esi
  __int64 v62; // rax
  __int64 **v63; // rcx
  __int64 v64; // rbx
  unsigned int v65; // eax
  __int64 v66; // r14
  __int64 v67; // r10
  UINT v68; // ebx
  __int64 v69; // r9
  _DWORD *v70; // rsi
  char v71; // r15
  __int64 v72; // rdx
  int v73; // ebx
  unsigned int v74; // r14d
  __int64 v75; // rdx
  int v76; // r14d
  __int64 v77; // rcx
  int v78; // eax
  int v79; // ecx
  _QWORD *v81; // rsi
  int v82; // r13d
  const void *v83; // rdx
  __int128 *v84; // rax
  __int128 v85; // xmm0
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r14
  __int64 v90; // rsi
  int v91; // eax
  int v92; // eax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  _QWORD *v95; // rcx
  int v96; // ecx
  int v97; // ecx
  __int64 v98; // rcx
  _QWORD *v99; // rax
  __int64 v100; // rcx
  UINT puResult; // [rsp+40h] [rbp-108h] BYREF
  BOOLEAN v102; // [rsp+44h] [rbp-104h]
  size_t Size; // [rsp+48h] [rbp-100h]
  void *Src; // [rsp+50h] [rbp-F8h]
  unsigned int v105[2]; // [rsp+58h] [rbp-F0h] BYREF
  UINT uAugend[4]; // [rsp+60h] [rbp-E8h] BYREF
  int v107; // [rsp+70h] [rbp-D8h]
  _DWORD *v108; // [rsp+78h] [rbp-D0h]
  void *v109; // [rsp+80h] [rbp-C8h]
  _OWORD *v110; // [rsp+88h] [rbp-C0h]
  __int64 v111; // [rsp+90h] [rbp-B8h]
  __int64 v112; // [rsp+98h] [rbp-B0h]
  __int64 v113; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 HighLimit; // [rsp+A8h] [rbp-A0h] BYREF
  unsigned __int64 LowLimit; // [rsp+B0h] [rbp-98h] BYREF
  char v116[8]; // [rsp+B8h] [rbp-90h] BYREF
  int v117; // [rsp+C0h] [rbp-88h]
  __int16 v118; // [rsp+C4h] [rbp-84h]
  __int16 v119; // [rsp+C6h] [rbp-82h]
  unsigned __int64 v120; // [rsp+C8h] [rbp-80h]
  _QWORD v121[12]; // [rsp+E8h] [rbp-60h] BYREF
  unsigned __int64 v124; // [rsp+160h] [rbp+18h] BYREF
  va_list va; // [rsp+160h] [rbp+18h]
  __int64 v126; // [rsp+168h] [rbp+20h] BYREF
  va_list va1; // [rsp+168h] [rbp+20h]
  __int64 v128; // [rsp+170h] [rbp+28h]
  __int64 v129; // [rsp+178h] [rbp+30h]
  __int64 v130; // [rsp+180h] [rbp+38h]
  __int64 v131; // [rsp+188h] [rbp+40h]
  __int64 v132; // [rsp+190h] [rbp+48h]
  va_list va2; // [rsp+198h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v124 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v126 = va_arg(va2, _QWORD);
  v128 = va_arg(va2, _QWORD);
  v129 = va_arg(va2, _QWORD);
  v130 = va_arg(va2, _QWORD);
  v131 = va_arg(va2, _QWORD);
  v132 = va_arg(va2, _QWORD);
  v2 = a2;
  v3 = 0;
  v113 = 0LL;
  v110 = 0LL;
  v108 = 0LL;
  memset(uAugend, 0, sizeof(uAugend));
  v109 = 0LL;
  v107 = 0;
  v102 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  _InterlockedIncrement(&glInterSendMessage);
  v5 = v128;
  if ( v128 && (*(_DWORD *)(v128 + 448) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  v7 = 0x2000;
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_22;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
  if ( v6 == CurrentProcessWin32Process )
    goto LABEL_22;
  if ( (unsigned int)v2 <= 0xD0 )
  {
    if ( (_DWORD)v2 != 208 )
    {
      switch ( (int)v2 )
      {
        case 12:
        case 188:
          goto LABEL_17;
        case 13:
        case 196:
        case 204:
          v6 = *(_QWORD *)(a1 + 152);
          if ( *(_WORD *)(gpsi + 854LL) != *(_WORD *)(v6 + 10) || (*(_BYTE *)(a1 + 52) & 0x20) == 0 )
            goto LABEL_22;
          UserSetLastError(5);
          break;
        case 78:
          goto LABEL_21;
        default:
          goto LABEL_22;
      }
      goto LABEL_21;
    }
LABEL_17:
    if ( (!gbEnforceUIPI || *(_QWORD *)v6 == gpepCSRSS)
      && (*(_DWORD *)(v6 + 740) != *(_DWORD *)(CurrentProcessWin32Process + 740)
       || *(_DWORD *)(v6 + 744) != *(_DWORD *)(CurrentProcessWin32Process + 744)) )
    {
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  if ( (_DWORD)v2 == 272 )
  {
LABEL_21:
    UserSetLastError(5);
    return 0LL;
  }
  if ( (_DWORD)v2 == 353 || (_DWORD)v2 == 424 || (_DWORD)v2 == 563 || (_DWORD)v2 == 648 )
    goto LABEL_17;
LABEL_22:
  if ( (_DWORD)v131 )
  {
LABEL_114:
    v12 = (_DWORD *)v126;
    goto LABEL_115;
  }
  v8 = 0LL;
  if ( a1 )
  {
    v9 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v9 = v129;
    if ( !v129 )
      goto LABEL_27;
  }
  v8 = *(_QWORD *)(v9 + 384);
LABEL_27:
  if ( v5 )
    CurrentProcessWin32Process = *(_QWORD *)(v5 + 384);
  if ( v8 == CurrentProcessWin32Process )
    goto LABEL_114;
  if ( (_DWORD)v2 == 717 )
    return 0LL;
  v10 = *(_QWORD *)(v8 + 800);
  if ( v10 )
  {
    v6 = *(_QWORD *)(v10 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13));
    if ( v6 )
    {
      v11 = *(_QWORD *)(v6 + 8LL * (((unsigned __int16)v2 >> 9) & 0xF));
      if ( v11 )
      {
        v6 = (unsigned int)(1 << (v2 & 7));
        if ( ((unsigned __int8)v6 & *(_BYTE *)((((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F) + v11)) != 0 )
          v3 = 1;
      }
    }
  }
  v12 = (_DWORD *)v126;
  if ( v3 )
  {
    MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v8, v126, 1, 3);
LABEL_53:
    v17 = v124;
LABEL_54:
    if ( v3 )
      goto LABEL_67;
    goto LABEL_55;
  }
  if ( !a1 )
    goto LABEL_53;
  v112 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 808LL);
  if ( !v6 )
    goto LABEL_45;
  v13 = 0;
  for ( i = *(_DWORD *)v6; v13 < i; ++v13 )
  {
    if ( a1 == *(_QWORD *)(v6 + 16LL * v13 + 24) )
      break;
  }
  if ( v13 < i )
  {
    _mm_lfence();
    v15 = *(_QWORD *)(v6 + 16 * (v13 + 1LL));
    v12 = (_DWORD *)v126;
  }
  else
  {
LABEL_45:
    v15 = 0LL;
  }
  v112 = v15;
  if ( !v15
    || (v6 = *(_QWORD *)(v15 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13))) == 0
    || (v16 = *(_QWORD *)(v6 + 8 * (((unsigned __int64)(unsigned __int16)v2 >> 9) & 0xF))) == 0
    || (v6 = (unsigned int)(1 << (v2 & 7)),
        v3 = 1,
        ((unsigned __int8)v6 & *(_BYTE *)((((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F) + v16)) == 0) )
  {
    v3 = 0;
  }
  v17 = v124;
  if ( v3 )
  {
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v8,
      (__int64)v12,
      1,
      4);
    goto LABEL_54;
  }
LABEL_55:
  v3 = 0;
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
        goto LABEL_63;
      default:
        break;
    }
  }
  else if ( (_DWORD)v2 == 776
         || (unsigned int)v2 <= 0x33 && (v18 = 0x8000000006029LL, _bittest64(&v18, v2))
         || (_DWORD)v2 == 127
         || (_DWORD)v2 == 773 )
  {
LABEL_63:
    v3 = 1;
  }
  if ( v3 )
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v8,
      (__int64)v12,
      1,
      2);
LABEL_67:
  if ( v3 )
    goto LABEL_104;
  if ( (_DWORD)v2 == 274 && ((v17 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v17 != 61792 )
  {
    v3 = 1;
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v8,
      (__int64)v12,
      1,
      2);
    goto LABEL_104;
  }
  if ( *(_QWORD *)v8 == gpepCSRSS )
  {
    v6 = 0LL;
  }
  else
  {
    v7 = *(_DWORD *)(v8 + 832);
    v6 = *(unsigned int *)(v8 + 836);
  }
  v19 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v19 <= v7 )
    {
      v3 = 0;
      if ( (_DWORD)v19 == v7 )
      {
        v20 = HIDWORD(v19);
        if ( (_DWORD)v20 == (_DWORD)v6 || (_DWORD)v20 == -1 || (_DWORD)v6 == -1 )
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
    v3 = 1;
  }
  if ( v3 )
  {
    v21 = 1;
    if ( gbEnforceUIPI )
      v21 = 5;
    v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gfWinMsgSQMIsOptedIn
      || (v23 = MsgSQMGetSourceListProcessPair(
                  (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                  (struct tagPROCESSINFO *)v8,
                  gbEnforceUIPI)) == 0LL )
    {
      v12 = (_DWORD *)v126;
      goto LABEL_104;
    }
    v117 = v2;
    v118 = 1;
    v119 = v21;
    v120 = 0LL;
    if ( (unsigned int)v2 >= 0x111 )
    {
      if ( (unsigned int)v2 > 0x112 && (_DWORD)v2 != 281 && (_DWORD)v2 != 528 )
      {
        v12 = (_DWORD *)v126;
        if ( (_DWORD)v2 == 793 )
          v120 = ((unsigned __int64)v126 >> 16) & 0xFFF;
        goto LABEL_98;
      }
      v120 = v124;
    }
    v12 = (_DWORD *)v126;
LABEL_98:
    v24 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v23 + 6, (const struct tagMSGSQM_MSGRECORD *)v116, v22);
    v26 = v24;
    if ( v24 && !(unsigned int)MsgSQMUpdateMsgRecord(v24, v22, v25) )
    {
      MsgSQMFlushMsgRecord((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v8, v27);
      MsgSQMUpdateMsgRecord(v26, v22, v28);
    }
    LODWORD(v2) = a2;
LABEL_104:
    if ( v3 )
      goto LABEL_115;
  }
  if ( a1
    && (_DWORD)v2 == 793
    && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 1232) == a1)
    && *(_QWORD *)(v6 + 392) == *(_QWORD *)(gptiCurrent + 392LL) )
  {
    v3 = 1;
  }
  else
  {
    if ( v3 )
      goto LABEL_115;
    EtwTraceUIPIMsgError(CurrentProcessWin32Process, v8, a2, v124, v12);
    UserSetLastError(5);
    LODWORD(v2) = a2;
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v8,
      (__int64)v12,
      1,
      0);
  }
  if ( !v3 )
    return 0LL;
LABEL_115:
  if ( (_DWORD)v2 == 576 )
  {
    LOBYTE(v6) = 20;
    if ( !HMValidateHandle(v12, v6) )
      return 0LL;
  }
  else if ( (_DWORD)v2 == 281 )
  {
    LOBYTE(v6) = 21;
    if ( !HMValidateHandle(v12, v6) )
      return 0LL;
  }
  v29 = v129;
  if ( (*(_DWORD *)(v129 + 1080) & 0x20) == 0 )
    goto LABEL_135;
  v30 = v130;
  if ( v130 )
  {
    if ( (*(_DWORD *)(v130 + 32) & 0x40) != 0 )
    {
      v31 = v128;
      goto LABEL_129;
    }
    if ( *(_DWORD *)v130 == 2 && *(_DWORD *)(v130 + 36) )
      return 0LL;
  }
  v31 = v128;
  if ( v128 )
  {
    v32 = *(_QWORD **)(v129 + 384);
    CurrentProcess = PsGetCurrentProcess(v130, v6);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v32) )
      return 0LL;
    v30 = v130;
    v29 = v129;
LABEL_129:
    if ( v31 )
      goto LABEL_135;
  }
  if ( !v30 && !(unsigned int)ProcessSuspendedSendMessage(v29, a1, (unsigned int)v2, v124, v12) )
    return 0LL;
  if ( !v31 && *(_DWORD *)(v29 + 496) > 0x2710u )
  {
    gfSuspendedSmsDropped = 1;
    return 0LL;
  }
LABEL_135:
  v34 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v35 = v34;
  v111 = v34;
  if ( !v34 )
    return 0LL;
  *(_QWORD *)(v34 + 120) = 0LL;
  LODWORD(Size) = 0;
  v36 = 0;
  puResult = 0;
  Src = v12;
  *(_DWORD *)(v34 + 128) = *(_DWORD *)(gptiCurrent + 1252LL);
  if ( v130 && *(_DWORD *)v130 == 33 )
  {
    v37 = v132;
    goto LABEL_222;
  }
  if ( (unsigned int)v2 > 0x143 )
  {
    if ( (unsigned int)v2 > 0x283 )
    {
      switch ( (_DWORD)v2 )
      {
        case 0x30C:
LABEL_186:
          *(_OWORD *)uAugend = *(_OWORD *)v12;
          v107 = 2 - ((uAugend[1] & 0x80000000) != 0);
          v12 = uAugend;
          v126 = (__int64)uAugend;
          if ( _mm_srli_si128(*(__m128i *)uAugend, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v128 )
          {
            v36 = uAugend[1] & 0x7FFFFFFF;
            puResult = uAugend[1] & 0x7FFFFFFF;
          }
          break;
        case 0x32C:
          v36 = 328;
          puResult = 328;
          goto LABEL_190;
        case 0x341:
          v36 = 64;
          puResult = 64;
          LODWORD(Size) = 64;
          break;
        case 0x342:
          v36 = 40;
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
            goto LABEL_160;
          case 328:
          case 393:
            goto LABEL_186;
          case 330:
          case 332:
          case 333:
          case 344:
          case 384:
          case 385:
          case 396:
          case 399:
          case 418:
            goto LABEL_159;
          case 401:
          case 402:
LABEL_176:
            v36 = 4 * v124;
            puResult = 4 * v124;
            goto LABEL_189;
          case 536:
            if ( !v12 || (v124 & 0x8000) == 0 || v12 >= MmSystemRangeStart && v128 )
              goto LABEL_189;
            if ( UIntAdd(0x14u, v12[4], &puResult) == -2147024362 )
              goto LABEL_163;
            goto LABEL_164;
          case 537:
            if ( v12 && (v124 & 0x8000) != 0 && (v12 < MmSystemRangeStart || !v128) )
            {
LABEL_169:
              v36 = *v12;
              puResult = *v12;
            }
            goto LABEL_189;
          case 544:
            v108 = v12;
            v36 = (v12[15] & 0x7FFFFFFF) + (v12[19] & 0x7FFFFFFF);
            puResult = v36;
            goto LABEL_189;
          default:
            goto LABEL_189;
        }
      }
      if ( v124 == 24 )
      {
        v36 = (*v12 << 9) + 4;
        puResult = v36;
      }
    }
  }
  else
  {
    if ( (_DWORD)v2 != 323 )
    {
      switch ( (int)v2 )
      {
        case 1:
        case 129:
          UserSetLastError(5);
          Win32FreeToPagedLookasideList(SMSLookaside, v35);
          return 0LL;
        case 12:
        case 26:
        case 194:
          if ( !v12 )
            goto LABEL_189;
          goto LABEL_160;
        case 13:
        case 196:
          goto LABEL_186;
        case 27:
          goto LABEL_160;
        case 56:
          v36 = *(unsigned __int16 *)v12;
          puResult = v36;
          goto LABEL_189;
        case 70:
          v36 = 40;
          puResult = 40;
          LODWORD(Size) = 40;
          goto LABEL_189;
        case 73:
          v36 = v124;
          puResult = v124;
          goto LABEL_189;
        case 74:
          v110 = v12;
          if ( !*((_QWORD *)v12 + 2) )
          {
            v36 = 24;
            puResult = 24;
            goto LABEL_190;
          }
          v36 = v12[2] + 24;
          puResult = v36;
          if ( v36 >= 0x18 )
            goto LABEL_189;
          Win32FreeToPagedLookasideList(SMSLookaside, v34);
          result = 0LL;
          break;
        case 83:
          goto LABEL_169;
        case 131:
          v39 = 96;
          if ( !v124 )
            v39 = 16;
          v36 = v39;
          puResult = v39;
          LODWORD(Size) = v39;
          goto LABEL_189;
        case 203:
          goto LABEL_176;
        default:
          goto LABEL_189;
      }
      return result;
    }
LABEL_159:
    if ( *(_DWORD *)(gptiCurrent + 1252LL) != 1 )
    {
LABEL_160:
      *(_OWORD *)uAugend = *(_OWORD *)v12;
      if ( _mm_srli_si128(*(__m128i *)uAugend, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v128 )
      {
        if ( UIntAdd(uAugend[0], 0x12u, &puResult) == -2147024362 )
        {
LABEL_163:
          Win32FreeToPagedLookasideList(SMSLookaside, v35);
          return 8LL;
        }
LABEL_164:
        v36 = puResult;
      }
    }
  }
LABEL_189:
  if ( v36 )
  {
LABEL_190:
    v40 = Win32AllocPoolWithQuota(v36, 1668510549LL);
    *(_QWORD *)(v35 + 120) = v40;
    if ( v40 )
    {
      v109 = v12;
      if ( (unsigned int)v2 > 0x83 )
      {
        if ( (unsigned int)v2 > 0x220 )
        {
          if ( (_DWORD)v2 == 780 )
          {
LABEL_214:
            LODWORD(Size) = v36;
            v109 = *(void **)&uAugend[2];
            *(_QWORD *)&uAugend[2] = *(_QWORD *)(v35 + 120);
          }
          else if ( (_DWORD)v2 == 812 )
          {
            MakeUpKeyboardCorrectionCalloutContents(v12, v124, v40);
            v124 = 0LL;
            v12 = *(_DWORD **)(v35 + 120);
            v126 = (__int64)v12;
          }
          else
          {
LABEL_205:
            memmove((void *)v40, Src, v36);
            v12 = *(_DWORD **)(v35 + 120);
            v126 = (__int64)v12;
          }
        }
        else if ( (_DWORD)v2 == 544 )
        {
          v47 = v108;
          v48 = (const void *)*((_QWORD *)v108 + 10);
          if ( v48 )
          {
            v49 = (unsigned int)v108[19];
            LODWORD(v49) = v49 & 0x7FFFFFFF;
            memmove((void *)v40, v48, v49);
            *v47 = *(_QWORD *)(v35 + 120);
          }
          v50 = v108;
          if ( v108[14] )
          {
            v51 = (unsigned int)v108[19];
            LODWORD(v51) = v51 & 0x7FFFFFFF;
            v52 = (void *)(*(_QWORD *)(v35 + 120) + v51);
            Src = v52;
            v53 = (unsigned int)v108[15];
            LODWORD(v53) = v53 & 0x7FFFFFFF;
            memmove(v52, *((const void **)v108 + 8), v53);
            *((_QWORD *)v50 + 1) = v52;
          }
        }
        else
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
LABEL_203:
              v12 = (_DWORD *)v40;
              v126 = v40;
              v45 = uAugend[1] ^ (uAugend[1] ^ *(_DWORD *)(v40 + 4)) & 0x7FFFFFFF;
              *(_DWORD *)(v40 + 4) = v45;
              *(_DWORD *)v40 = uAugend[0];
              *(_QWORD *)(v40 + 8) = v40 + 16;
              *(_DWORD *)(v40 + 4) ^= (v45 ^ (v36 - 16)) & 0x7FFFFFFF;
              v46 = *(unsigned int *)(v40 + 4);
              LODWORD(v46) = v46 & 0x7FFFFFFF;
              memmove((void *)(v40 + 16), *(const void **)&uAugend[2], v46);
              break;
            case 196:
              *(_WORD *)v40 = **(_WORD **)&uAugend[2];
              goto LABEL_214;
            case 328:
            case 393:
              goto LABEL_214;
            case 401:
              LODWORD(Size) = v36;
              goto LABEL_205;
            default:
              goto LABEL_205;
          }
        }
      }
      else if ( (_DWORD)v2 == 131 )
      {
        v42 = Src;
        if ( v124 )
        {
          *(_OWORD *)v40 = *(_OWORD *)Src;
          *(_OWORD *)(v40 + 16) = v42[1];
          *(_OWORD *)(v40 + 32) = v42[2];
          *(_QWORD *)(v40 + 48) = *((_QWORD *)v42 + 6);
          v43 = *(_QWORD *)(v35 + 120) + 56LL;
          *(_QWORD *)(v40 + 48) = v43;
          v44 = *((_QWORD *)v42 + 6);
          *(_OWORD *)v43 = *(_OWORD *)v44;
          *(_OWORD *)(v43 + 16) = *(_OWORD *)(v44 + 16);
          *(_QWORD *)(v43 + 32) = *(_QWORD *)(v44 + 32);
        }
        else
        {
          memmove((void *)v40, Src, v36);
        }
        v12 = *(_DWORD **)(v35 + 120);
        v126 = (__int64)v12;
      }
      else
      {
        switch ( (int)v2 )
        {
          case 12:
          case 26:
          case 27:
            goto LABEL_203;
          case 13:
            goto LABEL_214;
          case 74:
            v12 = (_DWORD *)v40;
            v126 = v40;
            v41 = v110;
            *(_OWORD *)v40 = *v110;
            *(_QWORD *)(v40 + 16) = *((_QWORD *)v41 + 2);
            if ( *((_QWORD *)v41 + 2) )
            {
              *(_QWORD *)(v40 + 16) = v40 + 24;
              memmove((void *)(v40 + 24), *((const void **)v41 + 2), *((unsigned int *)v41 + 2));
            }
            break;
          default:
            goto LABEL_205;
        }
      }
    }
  }
  if ( v36 && !*(_QWORD *)(v35 + 120) )
  {
    Win32FreeToPagedLookasideList(SMSLookaside, v35);
    return 0LL;
  }
  v37 = v132;
  if ( (_DWORD)v132 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
    v12 = (_DWORD *)v126;
  }
LABEL_222:
  *(_QWORD *)(v35 + 112) = 0LL;
  v54 = (__int64 *)(v35 + 16);
  *(_QWORD *)(v35 + 16) = 0LL;
  HMAssignmentLock(v35 + 112, a1);
  *(_DWORD *)(v35 + 104) = v2;
  *(_QWORD *)(v35 + 88) = v124;
  *(_QWORD *)(v35 + 96) = v12;
  *(_DWORD *)(v35 + 84) = 0;
  *(_QWORD *)(v35 + 72) = 0LL;
  if ( (_DWORD)v2 == 576 || (_DWORD)v2 == 281 )
  {
    v55 = *(_QWORD *)(gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v12);
    if ( v55 )
      HMChangeOwnerThread(v55, v129);
  }
  *(_QWORD *)v35 = gsmsList;
  *(_QWORD *)(v35 + 8) = gsmsList;
  if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
    __fastfail(3u);
  *(_QWORD *)(gsmsList + 8LL) = v35;
  gsmsList = v35;
  *(_DWORD *)(v35 + 80) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v56 = v129;
  *(_QWORD *)(v35 + 40) = v129;
  v57 = v128;
  *(_QWORD *)(v35 + 32) = v128;
  *(_QWORD *)(v35 + 64) = 0LL;
  v58 = v130;
  if ( v130 && (*(_DWORD *)v130 & 1) != 0 )
  {
    v59 = 2048;
    if ( (*(_DWORD *)v130 & 0x100) != 0 )
      v59 = 1024;
    v60 = v59 | *(_DWORD *)(v35 + 84);
    *(_DWORD *)(v35 + 84) = v60;
    *(_QWORD *)(v35 + 48) = *(_QWORD *)(v58 + 8);
    *(_QWORD *)(v35 + 56) = *(_QWORD *)(v58 + 16);
    v61 = 512;
    if ( (*(_DWORD *)v58 & 0x20) != 0 )
    {
      *(_DWORD *)(v35 + 84) = v60 | 0x200;
      *(_QWORD *)(v35 + 72) = *(_QWORD *)(v58 + 24);
    }
    else
    {
      *(_DWORD *)(v35 + 84) = v60 | 0x100;
      *(_QWORD *)(v35 + 64) = gptiCurrent;
    }
    v56 = v129;
  }
  else
  {
    v61 = 512;
  }
  if ( v37 )
    *(_DWORD *)(v35 + 84) |= 0x10000u;
  v62 = v56 + 480;
  v63 = *(__int64 ***)(v62 + 8);
  *v54 = v62;
  *(_QWORD *)(v35 + 24) = v63;
  if ( *v63 != (__int64 *)v62 )
    __fastfail(3u);
  *v63 = v54;
  *(_QWORD *)(v62 + 8) = v54;
  v64 = v129;
  v65 = *(_DWORD *)(v129 + 496) + 1;
  *(_DWORD *)(v129 + 496) = v65;
  if ( v65 > gcSmsHighWaterMark )
    gcSmsHighWaterMark = v65;
  if ( v57 )
  {
    v113 = *(_QWORD *)(v57 + 464);
    *(_QWORD *)(v57 + 464) = v35;
  }
  else
  {
    *(_DWORD *)(v35 + 84) |= 8u;
  }
  if ( (*(_DWORD *)(v35 + 84) & 0x200) != 0 )
    goto LABEL_255;
  if ( (unsigned int)(v2 - 577) > 3 && ((unsigned int)(v2 - 581) > 0x12 || (_DWORD)v2 == 589) )
  {
    if ( (_DWORD)v2 != 528 || (_WORD)v124 != 582 )
      goto LABEL_255;
  }
  else if ( (_DWORD)v2 == 595 )
  {
LABEL_255:
    v66 = v126;
    goto LABEL_256;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v126 + 24));
  v66 = v126;
  ++*(_BYTE *)(v126 + 54);
LABEL_256:
  EtwTraceBeginSendMessage(v35, v57, v58);
  v67 = v128;
  if ( !v128 )
  {
    if ( (*(_DWORD *)(v64 + 448) & 1) == 0 )
    {
      *(_WORD *)(*(_QWORD *)(v64 + 408) + 6LL) |= 0x40u;
      *(_WORD *)(*(_QWORD *)(v64 + 408) + 4LL) |= 0x40u;
      if ( (*(_BYTE *)(*(_QWORD *)(v64 + 408) + 10LL) & 0x40) != 0 )
        KeSetEvent(*(PRKEVENT *)(v64 + 656), 2, 0);
    }
    EtwTraceEndSendMessage(v35);
    return 1LL;
  }
  v68 = 0;
  puResult = 0;
  v105[0] = 0;
  LODWORD(Src) = 512;
  v69 = v129;
  if ( (*(_DWORD *)(v129 + 448) & 1) == 0 )
  {
    *(_WORD *)(*(_QWORD *)(v129 + 408) + 6LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)(v69 + 408) + 4LL) |= 0x40u;
    if ( (*(_BYTE *)(*(_QWORD *)(v69 + 408) + 10LL) & 0x40) != 0 )
    {
      KeSetEvent(*(PRKEVENT *)(v69 + 656), 2, 0);
      v67 = v128;
    }
  }
  if ( v58 )
  {
    if ( (*(_BYTE *)(v58 + 32) & 1) != 0 )
      v61 = 33280;
    LODWORD(Src) = v61;
    v105[0] = *(_DWORD *)(v58 + 36);
  }
  if ( !*(_DWORD *)(v67 + 728) )
  {
    v102 = KeSetKernelStackSwapEnable(0);
    v67 = v128;
  }
  ++*(_DWORD *)(v67 + 728);
  for ( ; (*(_DWORD *)(v35 + 84) & 1) == 0; v67 = v128 )
  {
    if ( v68 )
      break;
    v70 = 0LL;
    v71 = 0;
    *(_WORD *)(*(_QWORD *)(v67 + 408) + 4LL) &= ~0x200u;
    if ( (_DWORD)v2 == 788
      && v66
      && *(_DWORD *)(v129 + 560) <= 0x501u
      && *(_DWORD *)(v129 + 576)
      && (v70 = *(_DWORD **)v66, (unsigned int)(*(_DWORD *)(*(_QWORD *)v66 + 48LL) - 13) <= 1) )
    {
      v72 = gptiCurrent;
      v121[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v121;
      v121[1] = v70;
      ++v70[2];
      v71 = 1;
    }
    else
    {
      v72 = gptiCurrent;
    }
    v73 = 0;
    v74 = (unsigned int)Src;
    if ( ((unsigned __int8)Src & 7) == 7
      || ((unsigned __int8)Src & 6) != 0 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v72 + 392LL) + 64LL) )
    {
      v73 = 1;
      xxxUpdateInputHangInfo(0LL, 0);
    }
    v76 = xxxRealSleepThread(v74, v105[0], 0, 0, 0LL);
    if ( v73 )
      xxxUpdateInputHangInfo(0LL, 1);
    v68 = v76 == 0;
    puResult = v68;
    if ( v71 )
    {
      v70[22] ^= (v70[22] ^ (v68 << 7)) & 0x80;
      v77 = (unsigned int)v70[22];
      if ( !v76 )
      {
        v78 = v77 ^ ((unsigned __int8)v77 ^ (unsigned __int8)(v77 + 1)) & 0x7F;
        v70[22] = v78;
        if ( (v78 & 0x7Fu) > 0xA )
          v70[16] |= 0x10u;
      }
      ThreadUnlock1(v77, v75);
    }
    if ( !v76 && v130 )
    {
      v79 = *(_DWORD *)(v130 + 32);
      if ( ((v79 & 0x10) != 0 || (*(_DWORD *)(v35 + 84) & 0x20) != 0) && (*(_DWORD *)(v35 + 84) & 0x10) != 0 )
      {
        v105[0] = 0;
        v68 = 0;
        puResult = 0;
      }
      if ( (v79 & 8) != 0 && !(unsigned int)IsThreadHung(v129, 0LL) )
      {
        v68 = 0;
        puResult = 0;
LABEL_300:
        EtwTraceConvertTimeOutToBlocking();
        goto LABEL_301;
      }
      if ( !v68 )
        goto LABEL_300;
    }
LABEL_301:
    v66 = v126;
  }
  if ( (*(_DWORD *)(v67 + 728))-- == 1 )
  {
    KeSetKernelStackSwapEnable(v102);
    v67 = v128;
  }
  if ( (*(_DWORD *)(v67 + 448) & 1) == 0 )
  {
    *(_WORD *)(*(_QWORD *)(v67 + 408) + 6LL) |= 0x200u;
    *(_WORD *)(*(_QWORD *)(v67 + 408) + 4LL) |= 0x200u;
    if ( (*(_WORD *)(*(_QWORD *)(v67 + 408) + 10LL) & 0x200) != 0 )
      KeSetEvent(*(PRKEVENT *)(v67 + 656), 2, 0);
  }
  if ( !v68 )
  {
    if ( (_DWORD)Size )
    {
      v81 = v109;
      *(_QWORD *)v105 = v109;
      v82 = v2 - 70;
      if ( v82 )
      {
        if ( v82 == 61 )
        {
          if ( (_DWORD)v132 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)v105, 0LL, a1);
            v81 = *(_QWORD **)v105;
          }
          v84 = *(__int128 **)(v35 + 120);
          v85 = *v84;
          if ( v124 )
          {
            v86 = v81[6];
            *(_OWORD *)v81 = v85;
            *((_OWORD *)v81 + 1) = v84[1];
            *((_OWORD *)v81 + 2) = v84[2];
            v81[6] = v86;
            v87 = *((_QWORD *)v84 + 6);
            *(_OWORD *)v86 = *(_OWORD *)v87;
            *(_OWORD *)(v86 + 16) = *(_OWORD *)(v87 + 16);
            *(_QWORD *)(v86 + 32) = *(_QWORD *)(v87 + 32);
          }
          else
          {
            *(_OWORD *)v81 = v85;
          }
        }
        else
        {
          v83 = *(const void **)(v35 + 120);
          if ( v107 )
          {
            if ( v107 == 1 )
              strncpycch(v109, v83, (unsigned int)Size);
            else
              wcsncpycch(v109, (__int64)v83, (unsigned int)Size >> 1);
          }
          else
          {
            memmove(v109, v83, (unsigned int)Size);
          }
        }
      }
      else
      {
        if ( (_DWORD)v132 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        {
          TransformMessageBetweenCoordinateSpaces(70, 1, (unsigned int)va, (unsigned int)v105, 0LL, a1);
          v81 = *(_QWORD **)v105;
        }
        v88 = *(_QWORD *)(v35 + 120);
        *(_OWORD *)v81 = *(_OWORD *)v88;
        *((_OWORD *)v81 + 1) = *(_OWORD *)(v88 + 16);
        v81[4] = *(_QWORD *)(v88 + 32);
      }
    }
    else if ( (_DWORD)v2 == 831 && (_DWORD)v132 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
    }
  }
  EtwTraceEndSendMessage(v35);
  *(_QWORD *)(v128 + 464) = v113;
  v89 = v130;
  if ( v130 )
  {
    **(_QWORD **)(v130 + 40) = *(_QWORD *)(v35 + 72);
    if ( (*(_DWORD *)(v89 + 32) & 0x20) != 0 && (*(_DWORD *)(v35 + 84) & 0x8000) != 0 )
    {
      v90 = 0LL;
      UserSetLastError(1400);
    }
    else
    {
      v90 = v68 == 0;
    }
  }
  else
  {
    v90 = *(_QWORD *)(v35 + 72);
  }
  if ( v89 || v68 )
  {
    v91 = *(_DWORD *)(v35 + 84);
    if ( (v91 & 1) == 0 )
    {
      v92 = v91 | 1;
      *(_DWORD *)(v35 + 84) = v92;
      if ( (v92 & 0x4000) != 0 )
      {
        *(_DWORD *)(v35 + 84) = v92 | 8;
      }
      else
      {
        --*(_DWORD *)(v129 + 496);
        v93 = (_QWORD *)(v35 + 16);
        v94 = *(_QWORD *)(v35 + 16);
        v95 = *(_QWORD **)(v35 + 24);
        if ( *(_QWORD *)(v94 + 8) != v35 + 16 || (_QWORD *)*v95 != v93 )
          __fastfail(3u);
        *v95 = v94;
        *(_QWORD *)(v94 + 8) = v95;
        *v93 = 0LL;
        *(_DWORD *)(v35 + 84) |= 0x10u;
      }
    }
  }
  if ( (*(_DWORD *)(v35 + 84) & 0x4010) != 0x10 )
    *(_DWORD *)(v35 + 84) |= 8u;
  if ( (*(_DWORD *)(v35 + 84) & 0x8008) != 8 )
  {
    v96 = *(_DWORD *)(v35 + 104);
    if ( v96 == 576 )
    {
      FreeTouchInputInfo(*(_QWORD *)(v35 + 96), 0LL);
    }
    else if ( v96 == 281 )
    {
      FreeGestureInfo(*(_QWORD *)(v35 + 96), 0LL);
    }
    if ( (*(_DWORD *)(v35 + 84) & 0x200) == 0 )
    {
      if ( ((v97 = *(_DWORD *)(v35 + 104), (unsigned int)(v97 - 577) <= 3)
         || (unsigned int)(v97 - 581) <= 0x12 && v97 != 589)
        && v97 != 595
        || v97 == 528 && *(_WORD *)(v35 + 88) == 582 )
      {
        PointerList::UnreferenceMsgData(*(_QWORD *)(v35 + 96), 6LL);
      }
    }
    v98 = *(_QWORD *)v35;
    v99 = *(_QWORD **)(v35 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v35 + 8LL) != v35 || *v99 != v35 )
      __fastfail(3u);
    *v99 = v98;
    *(_QWORD *)(v98 + 8) = v99;
    HMAssignmentUnlock(v35 + 112);
    v100 = *(_QWORD *)(v35 + 120);
    if ( v100 )
      Win32FreePool(v100);
    Win32FreeToPagedLookasideList(SMSLookaside, v35);
  }
  return v90;
}
