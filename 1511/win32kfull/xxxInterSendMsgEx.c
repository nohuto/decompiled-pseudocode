/*
 * XREFs of xxxInterSendMsgEx @ 0x1C005DAE0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     ClearSendMessages @ 0x1C006872C (ClearSendMessages.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 *     xxxReceiverDied @ 0x1C00D07E4 (xxxReceiverDied.c)
 *     _ReplyMessage @ 0x1C00F20F0 (_ReplyMessage.c)
 * Callees:
 *     ProcessSuspendedSendMessage @ 0x1C000D418 (ProcessSuspendedSendMessage.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     xxxUpdateInputHangInfo @ 0x1C005ADE0 (xxxUpdateInputHangInfo.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005B640 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00603C0 (TransformMessageBetweenCoordinateSpaces.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 *     MSGSQMAddMessage @ 0x1C0092610 (MSGSQMAddMessage.c)
 *     UIntAdd @ 0x1C00A93FC (UIntAdd.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     MakeUpKeyboardCorrectionCalloutContents @ 0x1C01E2518 (MakeUpKeyboardCorrectionCalloutContents.c)
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01ECB58 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01ECD4C (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01ECE04 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01ECF90 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 *     IsFmtBlocked @ 0x1C01F09F8 (IsFmtBlocked.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C02044A0 (_FreeGestureInfo.c)
 *     strncpycch @ 0x1C0249D38 (strncpycch.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxInterSendMsgEx(__int64 a1, unsigned int a2, ...)
{
  unsigned __int64 v2; // r12
  int v3; // ebx
  __int64 CurrentProcessWin32Process; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  unsigned __int64 v13; // r13
  unsigned int *v14; // rdx
  unsigned int v15; // ecx
  unsigned int i; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int16 v23; // si
  unsigned __int64 v24; // r12
  struct tagMSGSQM_PROCESSPAIR *v25; // rcx
  struct tagMSGSQM_MSGRECORD *v26; // rcx
  struct tagMSGSQM_MSGRECORD *v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rbx
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
  _QWORD *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // r9
  __int64 v58; // r15
  int v59; // eax
  int v60; // ecx
  _QWORD *v61; // rcx
  unsigned int v62; // eax
  __int64 v63; // r14
  __int64 v64; // r9
  UINT v65; // esi
  int v66; // ebx
  __int64 v67; // r10
  _DWORD *v68; // rbx
  char v69; // r15
  __int64 v70; // rdx
  int v71; // esi
  unsigned int v72; // r14d
  __int64 v73; // rdx
  int v74; // r14d
  __int64 v75; // rcx
  int v76; // eax
  int v77; // ecx
  _QWORD *v79; // rbx
  int v80; // r12d
  _WORD *v81; // rdx
  unsigned __int64 v82; // rcx
  __int16 v83; // ax
  __int128 *v84; // rax
  __int128 v85; // xmm0
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r14
  __int64 v90; // rbx
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
  UINT puResult; // [rsp+40h] [rbp-118h] BYREF
  BOOLEAN v102; // [rsp+44h] [rbp-114h]
  size_t Size; // [rsp+48h] [rbp-110h]
  void *Src; // [rsp+50h] [rbp-108h]
  unsigned int v105[2]; // [rsp+58h] [rbp-100h] BYREF
  UINT uAugend[4]; // [rsp+60h] [rbp-F8h] BYREF
  int v107; // [rsp+70h] [rbp-E8h]
  struct tagMSGSQM_MSGRECORD *v108; // [rsp+78h] [rbp-E0h]
  void *v109; // [rsp+80h] [rbp-D8h]
  unsigned int v110; // [rsp+88h] [rbp-D0h]
  _DWORD *v111; // [rsp+90h] [rbp-C8h]
  _OWORD *v112; // [rsp+98h] [rbp-C0h]
  __int64 v113; // [rsp+A0h] [rbp-B8h]
  __int64 v114; // [rsp+A8h] [rbp-B0h]
  _WORD *v115; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 HighLimit; // [rsp+B8h] [rbp-A0h] BYREF
  void *v117; // [rsp+C0h] [rbp-98h]
  unsigned __int64 LowLimit; // [rsp+C8h] [rbp-90h] BYREF
  char v119[8]; // [rsp+D0h] [rbp-88h] BYREF
  unsigned int v120; // [rsp+D8h] [rbp-80h]
  __int16 v121; // [rsp+DCh] [rbp-7Ch]
  __int16 v122; // [rsp+DEh] [rbp-7Ah]
  unsigned __int64 v123; // [rsp+E0h] [rbp-78h]
  _QWORD v124[11]; // [rsp+100h] [rbp-58h] BYREF
  unsigned __int64 v127; // [rsp+170h] [rbp+18h] BYREF
  va_list va; // [rsp+170h] [rbp+18h]
  __int64 v129; // [rsp+178h] [rbp+20h] BYREF
  va_list va1; // [rsp+178h] [rbp+20h]
  __int64 v131; // [rsp+180h] [rbp+28h]
  __int64 v132; // [rsp+188h] [rbp+30h]
  __int64 v133; // [rsp+190h] [rbp+38h]
  __int64 v134; // [rsp+198h] [rbp+40h]
  __int64 v135; // [rsp+1A0h] [rbp+48h]
  va_list va2; // [rsp+1A8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v127 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v129 = va_arg(va2, _QWORD);
  v131 = va_arg(va2, _QWORD);
  v132 = va_arg(va2, _QWORD);
  v133 = va_arg(va2, _QWORD);
  v134 = va_arg(va2, _QWORD);
  v135 = va_arg(va2, _QWORD);
  v2 = a2;
  v3 = 0;
  v113 = 0LL;
  v112 = 0LL;
  v111 = 0LL;
  memset(uAugend, 0, sizeof(uAugend));
  v109 = 0LL;
  v107 = 0;
  v102 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  _InterlockedIncrement(&glInterSendMessage);
  v5 = v131;
  if ( v131 && (*(_DWORD *)(v131 + 440) & 1) != 0 )
    return 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
    goto LABEL_22;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  if ( v6 == CurrentProcessWin32Process )
    goto LABEL_22;
  if ( (unsigned int)v2 <= 0xD0 )
  {
    if ( (_DWORD)v2 != 208 )
    {
      v7 = 0x1C0000000uLL;
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
  if ( (_DWORD)v134 )
  {
LABEL_114:
    v13 = v127;
    v12 = (_DWORD *)v129;
    goto LABEL_115;
  }
  v9 = 0LL;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v10 = v132;
    if ( !v132 )
      goto LABEL_27;
  }
  v9 = *(_QWORD *)(v10 + 376);
LABEL_27:
  if ( v5 )
    CurrentProcessWin32Process = *(_QWORD *)(v5 + 376);
  if ( v9 == CurrentProcessWin32Process )
    goto LABEL_114;
  if ( (_DWORD)v2 == 717 )
    return 0LL;
  v11 = *(_QWORD *)(v9 + 800);
  if ( v11 )
  {
    v7 = (unsigned __int16)v2;
    v6 = *(_QWORD *)(v11 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13));
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
  v12 = (_DWORD *)v129;
  v13 = v127;
  if ( v3 )
  {
    MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, v129, 1, 3);
    goto LABEL_66;
  }
  if ( !a1 )
  {
LABEL_53:
    if ( v3 )
      goto LABEL_66;
    goto LABEL_54;
  }
  v114 = 0LL;
  v14 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) + 808LL);
  if ( !v14 )
    goto LABEL_45;
  v15 = 0;
  for ( i = *v14; v15 < i; ++v15 )
  {
    if ( a1 == *(_QWORD *)&v14[4 * v15 + 6] )
      break;
  }
  if ( v15 < i )
  {
    _mm_lfence();
    v17 = *(_QWORD *)&v14[4 * v15 + 4];
    v12 = (_DWORD *)v129;
    v13 = v127;
  }
  else
  {
LABEL_45:
    v17 = 0LL;
  }
  v114 = v17;
  if ( !v17
    || (v18 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned __int16)v2 >> 13))) == 0
    || (v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)(unsigned __int16)v2 >> 9) & 0xF))) == 0
    || (v3 = 1,
        ((unsigned __int8)(1 << (v2 & 7)) & *(_BYTE *)((((unsigned __int64)(unsigned __int16)v2 >> 3) & 0x3F) + v19)) == 0) )
  {
    v3 = 0;
  }
  if ( v3 )
  {
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v9,
      (__int64)v12,
      1,
      4);
    goto LABEL_53;
  }
LABEL_54:
  v3 = 0;
  if ( (unsigned int)v2 > 0x308 )
  {
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
        goto LABEL_62;
      default:
        break;
    }
  }
  else if ( (_DWORD)v2 == 776
         || (unsigned int)v2 <= 0x33 && (v20 = 0x8000000006029LL, _bittest64(&v20, v2))
         || (_DWORD)v2 == 127
         || (_DWORD)v2 == 773 )
  {
LABEL_62:
    v3 = 1;
  }
  if ( !v3 )
    goto LABEL_67;
  MSGSQMAddMessage((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, (__int64)v12, 1, 2);
LABEL_66:
  if ( v3 )
  {
LABEL_104:
    if ( v3 )
      goto LABEL_115;
    goto LABEL_105;
  }
LABEL_67:
  if ( (_DWORD)v2 == 274 && ((v13 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && v13 != 61792 )
  {
    v3 = 1;
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v9,
      (__int64)v12,
      1,
      2);
    goto LABEL_104;
  }
  if ( *(_QWORD *)v9 == gpepCSRSS )
  {
    v6 = 0LL;
    v8 = 0x2000LL;
  }
  else
  {
    v8 = *(unsigned int *)(v9 + 832);
    v6 = *(unsigned int *)(v9 + 836);
  }
  v21 = *(_QWORD *)(CurrentProcessWin32Process + 832);
  v7 = gbEnforceUIPI;
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v21 <= (unsigned int)v8 )
    {
      v3 = 0;
      if ( (_DWORD)v21 == (_DWORD)v8 )
      {
        v22 = HIDWORD(v21);
        if ( (_DWORD)v22 == (_DWORD)v6 || (_DWORD)v22 == -1 || (_DWORD)v6 == -1 )
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
    v23 = 1;
    if ( gbEnforceUIPI )
      v23 = 5;
    v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !gfWinMsgSQMIsOptedIn
      || (v25 = MsgSQMGetSourceListProcessPair(
                  (struct tagPROCESSINFO *)CurrentProcessWin32Process,
                  (struct tagPROCESSINFO *)v9,
                  gbEnforceUIPI)) == 0LL )
    {
      v12 = (_DWORD *)v129;
      v13 = v127;
LABEL_103:
      LODWORD(v2) = a2;
      goto LABEL_104;
    }
    v120 = a2;
    v121 = 1;
    v122 = v23;
    v123 = 0LL;
    if ( a2 < 0x111 )
    {
      v13 = v127;
    }
    else
    {
      if ( a2 > 0x112 && a2 != 281 && a2 != 528 )
      {
        v12 = (_DWORD *)v129;
        v13 = v127;
        if ( a2 == 793 )
          v123 = ((unsigned __int64)v129 >> 16) & 0xFFF;
        goto LABEL_98;
      }
      v13 = v127;
      v123 = v127;
    }
    v12 = (_DWORD *)v129;
LABEL_98:
    v26 = MsgSQMGetMsgRecord((struct tagMSGSQM_MSGRECORD **)v25 + 6, (const struct tagMSGSQM_MSGRECORD *)v119, v24);
    v108 = v26;
    if ( v26 && !(unsigned int)MsgSQMUpdateMsgRecord(v26, v24, v7) )
    {
      MsgSQMFlushMsgRecord((struct tagPROCESSINFO *)CurrentProcessWin32Process, (struct tagPROCESSINFO *)v9, v27);
      MsgSQMUpdateMsgRecord(v108, v24, v28);
    }
    goto LABEL_103;
  }
LABEL_105:
  if ( a1
    && (_DWORD)v2 == 793
    && (v6 = *(_QWORD *)(a1 + 16), *(_QWORD *)(v6 + 1224) == a1)
    && *(_QWORD *)(v6 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
  {
    v3 = 1;
  }
  else
  {
    if ( v3 )
      goto LABEL_115;
    EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, (unsigned int)v2, v13, v12);
    UserSetLastError(5);
    MSGSQMAddMessage(
      (struct tagPROCESSINFO *)CurrentProcessWin32Process,
      (struct tagPROCESSINFO *)v9,
      (__int64)v12,
      1,
      0);
  }
  if ( !v3 )
    return 0LL;
LABEL_115:
  if ( (_DWORD)v2 == 576 )
  {
    if ( !HMValidateHandle((__int64)v12, 20) )
      return 0LL;
  }
  else if ( (_DWORD)v2 == 281 && !HMValidateHandle((__int64)v12, 21) )
  {
    return 0LL;
  }
  v29 = v132;
  if ( (*(_DWORD *)(v132 + 1072) & 0x20) == 0 )
  {
    v31 = v131;
    goto LABEL_135;
  }
  v30 = v133;
  if ( v133 )
  {
    if ( (*(_DWORD *)(v133 + 32) & 0x40) != 0 )
      goto LABEL_128;
    if ( *(_DWORD *)v133 == 2 && *(_DWORD *)(v133 + 36) )
      return 0LL;
  }
  v31 = v131;
  if ( v131 )
  {
    v32 = *(_QWORD **)(v132 + 376);
    CurrentProcess = PsGetCurrentProcess(v133, v6, v7, v8);
    if ( !PsGetProcessCommonJob(CurrentProcess, *v32) )
      return 0LL;
    v30 = v133;
LABEL_128:
    v31 = v131;
    if ( v131 )
      goto LABEL_135;
  }
  if ( !v30 && !(unsigned int)ProcessSuspendedSendMessage(v29, a1, v2, v13, (__int64)v12) )
    return 0LL;
  if ( !v31 && *(_DWORD *)(v29 + 488) > 0x2710u )
  {
    gfSuspendedSmsDropped = 1;
    return 0LL;
  }
LABEL_135:
  v34 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v35 = v34;
  v108 = (struct tagMSGSQM_MSGRECORD *)v34;
  if ( !v34 )
    return 0LL;
  *(_QWORD *)(v34 + 120) = 0LL;
  LODWORD(Size) = 0;
  v36 = 0;
  puResult = 0;
  Src = v12;
  *(_DWORD *)(v34 + 128) = *(_DWORD *)(gptiCurrent + 1244LL);
  if ( v133 && *(_DWORD *)v133 == 33 )
  {
    v37 = v135;
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
          v129 = (__int64)uAugend;
          if ( _mm_srli_si128(*(__m128i *)uAugend, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v31 )
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
            v36 = 4 * v13;
            puResult = 4 * v13;
            goto LABEL_189;
          case 536:
            if ( !v12 || (v13 & 0x8000) == 0 || v12 >= MmSystemRangeStart && v31 )
              goto LABEL_189;
            if ( UIntAdd(0x14u, v12[4], &puResult) == -2147024362 )
              goto LABEL_163;
            goto LABEL_164;
          case 537:
            if ( v12 && (v13 & 0x8000) != 0 && (v12 < MmSystemRangeStart || !v31) )
            {
LABEL_169:
              v36 = *v12;
              puResult = *v12;
            }
            goto LABEL_189;
          case 544:
            v111 = v12;
            v36 = (v12[15] & 0x7FFFFFFF) + (v12[19] & 0x7FFFFFFF);
            puResult = v36;
            goto LABEL_189;
          default:
            goto LABEL_189;
        }
      }
      if ( v13 == 24 )
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
          v36 = v13;
          puResult = v13;
          goto LABEL_189;
        case 74:
          v112 = v12;
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
          if ( !v13 )
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
    if ( *(_DWORD *)(gptiCurrent + 1244LL) != 1 )
    {
LABEL_160:
      *(_OWORD *)uAugend = *(_OWORD *)v12;
      if ( _mm_srli_si128(*(__m128i *)uAugend, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !v31 )
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
            MakeUpKeyboardCorrectionCalloutContents(v12, v13, v40);
            v13 = 0LL;
            v127 = 0LL;
            v12 = *(_DWORD **)(v35 + 120);
            v129 = (__int64)v12;
          }
          else
          {
LABEL_205:
            memmove((void *)v40, Src, v36);
            v12 = *(_DWORD **)(v35 + 120);
            v129 = (__int64)v12;
          }
        }
        else if ( (_DWORD)v2 == 544 )
        {
          v47 = v111;
          v48 = (const void *)*((_QWORD *)v111 + 10);
          if ( v48 )
          {
            v49 = (unsigned int)v111[19];
            LODWORD(v49) = v49 & 0x7FFFFFFF;
            memmove((void *)v40, v48, v49);
            *v47 = *(_QWORD *)(v35 + 120);
          }
          v50 = v111;
          if ( v111[14] )
          {
            v51 = (unsigned int)v111[19];
            LODWORD(v51) = v51 & 0x7FFFFFFF;
            v52 = (void *)(*(_QWORD *)(v35 + 120) + v51);
            Src = v52;
            v53 = (unsigned int)v111[15];
            LODWORD(v53) = v53 & 0x7FFFFFFF;
            memmove(v52, *((const void **)v111 + 8), v53);
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
              v129 = v40;
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
        if ( v13 )
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
        v129 = (__int64)v12;
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
            v129 = v40;
            v41 = v112;
            *(_OWORD *)v40 = *v112;
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
  v37 = v135;
  if ( (_DWORD)v135 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    TransformMessageBetweenCoordinateSpaces(v2, 1, (unsigned int)va, (unsigned int)va1, a1, 0LL);
    v12 = (_DWORD *)v129;
  }
LABEL_222:
  *(_QWORD *)(v35 + 112) = 0LL;
  v54 = (_QWORD *)(v35 + 16);
  *(_QWORD *)(v35 + 16) = 0LL;
  HMAssignmentLock(v35 + 112, a1);
  *(_DWORD *)(v35 + 104) = v2;
  *(_QWORD *)(v35 + 88) = v13;
  *(_QWORD *)(v35 + 96) = v12;
  *(_DWORD *)(v35 + 84) = 0;
  if ( (_DWORD)v2 == 576 || (_DWORD)v2 == 281 )
  {
    v55 = *(_QWORD *)(*((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4)
                                                    * (unsigned int)(unsigned __int16)v12);
    v56 = v132;
    if ( v55 )
      HMChangeOwnerThread(v55, v132);
  }
  else
  {
    v56 = v132;
  }
  *(_QWORD *)v35 = gsmsList;
  *(_QWORD *)(v35 + 8) = gsmsList;
  if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
    __fastfail(3u);
  *(_QWORD *)(gsmsList + 8LL) = v35;
  gsmsList = v35;
  *(_DWORD *)(v35 + 80) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(v35 + 40) = v56;
  v57 = v131;
  *(_QWORD *)(v35 + 32) = v131;
  *(_QWORD *)(v35 + 64) = 0LL;
  v58 = v133;
  if ( v133 && (*(_DWORD *)v133 & 1) != 0 )
  {
    v59 = 2048;
    if ( (*(_DWORD *)v133 & 0x100) != 0 )
      v59 = 1024;
    v60 = v59 | *(_DWORD *)(v35 + 84);
    *(_DWORD *)(v35 + 84) = v60;
    *(_QWORD *)(v35 + 48) = *(_QWORD *)(v58 + 8);
    *(_QWORD *)(v35 + 56) = *(_QWORD *)(v58 + 16);
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
  }
  if ( v37 )
    *(_DWORD *)(v35 + 84) |= 0x10000u;
  v61 = *(_QWORD **)(v56 + 480);
  *v54 = v56 + 472;
  *(_QWORD *)(v35 + 24) = v61;
  if ( *v61 != v56 + 472 )
    __fastfail(3u);
  *v61 = v54;
  *(_QWORD *)(v56 + 480) = v54;
  v62 = *(_DWORD *)(v56 + 488) + 1;
  *(_DWORD *)(v56 + 488) = v62;
  if ( v62 > gcSmsHighWaterMark )
    gcSmsHighWaterMark = v62;
  if ( v57 )
  {
    v113 = *(_QWORD *)(v57 + 456);
    *(_QWORD *)(v57 + 456) = v35;
  }
  else
  {
    *(_DWORD *)(v35 + 84) |= 8u;
  }
  if ( (*(_DWORD *)(v35 + 84) & 0x200) != 0 )
    goto LABEL_254;
  if ( (unsigned int)(v2 - 577) > 3 && ((unsigned int)(v2 - 581) > 0x12 || (_DWORD)v2 == 589) )
  {
    if ( (_DWORD)v2 != 528 || (_WORD)v127 != 582 )
      goto LABEL_254;
  }
  else if ( (_DWORD)v2 == 595 )
  {
LABEL_254:
    v63 = v129;
    goto LABEL_255;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v129 + 24));
  v63 = v129;
  ++*(_BYTE *)(v129 + 54);
LABEL_255:
  EtwTraceBeginSendMessage(v35, v57, v58);
  v64 = v131;
  if ( !v131 )
  {
    SetWakeBit(v56, 0x40u);
    EtwTraceEndSendMessage(v35);
    return 1LL;
  }
  v65 = 0;
  puResult = 0;
  v105[0] = 0;
  v66 = 512;
  LODWORD(Src) = 512;
  v67 = v132;
  if ( (*(_DWORD *)(v132 + 440) & 1) == 0 )
  {
    *(_WORD *)(*(_QWORD *)(v132 + 400) + 6LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)(v67 + 400) + 4LL) |= 0x40u;
    if ( (*(_BYTE *)(*(_QWORD *)(v67 + 400) + 10LL) & 0x40) != 0 )
    {
      KeSetEvent(*(PRKEVENT *)(v67 + 648), 2, 0);
      v64 = v131;
    }
  }
  if ( v58 )
  {
    if ( (*(_BYTE *)(v58 + 32) & 1) != 0 )
      v66 = 33280;
    LODWORD(Src) = v66;
    v105[0] = *(_DWORD *)(v58 + 36);
  }
  if ( !*(_DWORD *)(v64 + 720) )
  {
    v102 = KeSetKernelStackSwapEnable(0);
    v64 = v131;
  }
  ++*(_DWORD *)(v64 + 720);
  for ( ; (*(_DWORD *)(v35 + 84) & 1) == 0; v64 = v131 )
  {
    if ( v65 )
      break;
    v68 = 0LL;
    v69 = 0;
    *(_WORD *)(*(_QWORD *)(v64 + 400) + 4LL) &= ~0x200u;
    if ( (_DWORD)v2 == 788
      && v63
      && *(_DWORD *)(v132 + 552) <= 0x501u
      && *(_DWORD *)(v132 + 568)
      && (v68 = *(_DWORD **)v63, (unsigned int)(*(_DWORD *)(*(_QWORD *)v63 + 48LL) - 13) <= 1) )
    {
      v70 = gptiCurrent;
      v124[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v124;
      v124[1] = v68;
      ++v68[2];
      v69 = 1;
    }
    else
    {
      v70 = gptiCurrent;
    }
    v71 = 0;
    v72 = (unsigned int)Src;
    if ( ((unsigned __int8)Src & 7) == 7
      || ((unsigned __int8)Src & 6) != 0 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v70 + 384LL) + 64LL) )
    {
      v71 = 1;
      xxxUpdateInputHangInfo(0LL, 0);
    }
    v74 = xxxRealSleepThread(v72, v105[0], 0, 0, 0LL);
    if ( v71 )
      xxxUpdateInputHangInfo(0LL, 1);
    v65 = v74 == 0;
    puResult = v65;
    if ( v69 )
    {
      v68[22] ^= (v68[22] ^ (v65 << 7)) & 0x80;
      v75 = (unsigned int)v68[22];
      if ( !v74 )
      {
        v76 = v75 ^ ((unsigned __int8)v75 ^ (unsigned __int8)(v75 + 1)) & 0x7F;
        v68[22] = v76;
        if ( (v76 & 0x7Fu) > 0xA )
          v68[16] |= 0x10u;
      }
      ThreadUnlock1(v75, v73);
    }
    if ( !v74 && v133 )
    {
      v77 = *(_DWORD *)(v133 + 32);
      if ( ((v77 & 0x10) != 0 || (*(_DWORD *)(v35 + 84) & 0x20) != 0) && (*(_DWORD *)(v35 + 84) & 0x10) != 0 )
      {
        v105[0] = 0;
        v65 = 0;
        puResult = 0;
      }
      if ( (v77 & 8) != 0 && !(unsigned int)IsThreadHung(v132, 0LL) )
      {
        v65 = 0;
        puResult = 0;
LABEL_296:
        EtwTraceConvertTimeOutToBlocking();
        goto LABEL_297;
      }
      if ( !v65 )
        goto LABEL_296;
    }
LABEL_297:
    v63 = v129;
  }
  if ( (*(_DWORD *)(v64 + 720))-- == 1 )
  {
    KeSetKernelStackSwapEnable(v102);
    v64 = v131;
  }
  if ( (*(_DWORD *)(v64 + 440) & 1) == 0 )
  {
    *(_WORD *)(*(_QWORD *)(v64 + 400) + 6LL) |= 0x200u;
    *(_WORD *)(*(_QWORD *)(v64 + 400) + 4LL) |= 0x200u;
    if ( (*(_WORD *)(*(_QWORD *)(v64 + 400) + 10LL) & 0x200) != 0 )
      KeSetEvent(*(PRKEVENT *)(v64 + 648), 2, 0);
  }
  if ( !v65 )
  {
    if ( (_DWORD)Size )
    {
      v79 = v109;
      *(_QWORD *)v105 = v109;
      v80 = v2 - 70;
      if ( v80 )
      {
        if ( v80 == 61 )
        {
          if ( (_DWORD)v135 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(131, 1, (unsigned int)va, (unsigned int)v105, 0LL, a1);
            v79 = *(_QWORD **)v105;
          }
          v84 = *(__int128 **)(v35 + 120);
          v85 = *v84;
          if ( v127 )
          {
            v86 = v79[6];
            *(_OWORD *)v79 = v85;
            *((_OWORD *)v79 + 1) = v84[1];
            *((_OWORD *)v79 + 2) = v84[2];
            v79[6] = v86;
            v87 = *((_QWORD *)v84 + 6);
            *(_OWORD *)v86 = *(_OWORD *)v87;
            *(_OWORD *)(v86 + 16) = *(_OWORD *)(v87 + 16);
            *(_QWORD *)(v86 + 32) = *(_QWORD *)(v87 + 32);
          }
          else
          {
            *(_OWORD *)v79 = v85;
          }
        }
        else
        {
          v81 = *(_WORD **)(v35 + 120);
          if ( v107 )
          {
            if ( v107 == 1 )
            {
              strncpycch(v109, v81, (unsigned int)Size);
            }
            else
            {
              v82 = (unsigned __int64)(unsigned int)Size >> 1;
              v110 = (unsigned int)Size >> 1;
              v115 = v81;
              v117 = v109;
              while ( (_DWORD)v82 )
              {
                v83 = *v81;
                *(_WORD *)v79 = *v81;
                v79 = (_QWORD *)((char *)v79 + 2);
                v117 = v79;
                v115 = ++v81;
                if ( !v83 )
                  break;
                LODWORD(v82) = v82 - 1;
                v110 = v82;
              }
            }
          }
          else
          {
            memmove(v109, v81, (unsigned int)Size);
          }
        }
      }
      else
      {
        if ( (_DWORD)v135 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
        {
          TransformMessageBetweenCoordinateSpaces(70, 1, (unsigned int)va, (unsigned int)v105, 0LL, a1);
          v79 = *(_QWORD **)v105;
        }
        v88 = *(_QWORD *)(v35 + 120);
        *(_OWORD *)v79 = *(_OWORD *)v88;
        *((_OWORD *)v79 + 1) = *(_OWORD *)(v88 + 16);
        v79[4] = *(_QWORD *)(v88 + 32);
      }
    }
    else if ( (_DWORD)v2 == 831 && (_DWORD)v135 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformMessageBetweenCoordinateSpaces(831, 1, (unsigned int)va, (unsigned int)va1, 0LL, a1);
    }
  }
  EtwTraceEndSendMessage(v35);
  *(_QWORD *)(v131 + 456) = v113;
  v89 = v133;
  if ( v133 )
  {
    **(_QWORD **)(v133 + 40) = *(_QWORD *)(v35 + 72);
    if ( (*(_DWORD *)(v89 + 32) & 0x20) != 0 && (*(_DWORD *)(v35 + 84) & 0x8000) != 0 )
    {
      v90 = 0LL;
      UserSetLastError(1400);
    }
    else
    {
      v90 = v65 == 0;
    }
  }
  else
  {
    v90 = *(_QWORD *)(v35 + 72);
  }
  if ( v89 || v65 )
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
        --*(_DWORD *)(v132 + 488);
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
