/*
 * XREFs of xxxInterSendMsgEx @ 0x140051EE4
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ClearSendMessages @ 0x1400538B0 (ClearSendMessages.c)
 *     xxxReceiverDied @ 0x140054ED4 (xxxReceiverDied.c)
 *     _ReplyMessage @ 0x1400550E0 (_ReplyMessage.c)
 *     SendMsgCleanup @ 0x140056310 (SendMsgCleanup.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14004D1E0 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x140056568 (UnlinkSendListSms.c)
 *     IsPointerInputMessage @ 0x1400969D0 (IsPointerInputMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     IsPointerParentNotify @ 0x140137BE0 (IsPointerParentNotify.c)
 *     xxxSleepThread @ 0x14014A7D0 (xxxSleepThread.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1401550A0 (TransformMessageBetweenCoordinateSpaces.c)
 *     IsPointerInputMessageWithState @ 0x140159250 (IsPointerInputMessageWithState.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x14016EB64 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1401ADE18 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1401B8228 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     FreeSMS @ 0x1401B8B90 (FreeSMS.c)
 *     strncpycch @ 0x1401ECA98 (strncpycch.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     CopyHidData @ 0x14029AA94 (CopyHidData.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     ProcessSuspendedSendMessage @ 0x1402A730C (ProcessSuspendedSendMessage.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall xxxInterSendMsgEx(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        void **a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  void **v9; // r15
  unsigned int v10; // r12d
  struct tagWND *v11; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  _DWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rbx
  UIPrivilegeIsolation *v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // ebx
  int v25; // ebx
  __int64 v26; // rcx
  const struct tagUIPI_INFO *v27; // r8
  const struct tagUIPI_INFO *v28; // rdx
  bool v29; // al
  __int64 v30; // rcx
  __int64 v31; // r15
  unsigned __int8 v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 CurrentProcess; // rax
  __int64 UserSessionState; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned int v41; // r14d
  bool v42; // zf
  bool v44; // zf
  bool v45; // zf
  int v46; // ebx
  _DWORD *v47; // r9
  ULONG_PTR v48; // rax
  void *v49; // rcx
  size_t v50; // r8
  const void *v51; // rdx
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  bool v55; // zf
  unsigned int v56; // edx
  void **v57; // r10
  const void *v58; // rdx
  size_t v59; // r8
  __int64 v60; // rbx
  void *v61; // rbx
  size_t v62; // r8
  struct tagWND *v63; // rbx
  unsigned int v64; // ecx
  __int64 v65; // rdx
  struct tagTHREADINFO *v66; // rcx
  struct tagHIDDATA *v67; // rax
  __int64 v68; // rax
  void ***v69; // rbx
  __int64 v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r9
  int v76; // edx
  int v77; // r8d
  __int64 v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // ebx
  unsigned int v85; // r15d
  unsigned int v86; // r13d
  __int64 v87; // rdx
  __int64 v88; // r14
  __int64 v89; // r8
  char v90; // bl
  __int64 v91; // rdx
  struct tagTHREADINFO *v92; // rax
  int v93; // eax
  __int64 v94; // rdx
  int v95; // r12d
  BOOL v96; // r15d
  __int64 v97; // rcx
  struct tagTHREADINFO *v98; // rax
  int v99; // ecx
  __int64 v100; // r14
  ULONG_PTR v101; // r9
  __int16 *v102; // rdx
  unsigned int v103; // ecx
  __int16 v104; // ax
  __int64 v105; // r13
  __int128 *v106; // rax
  __int128 v107; // xmm0
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // r14
  int v112; // eax
  int v113; // eax
  __int64 v114; // rdx
  _QWORD *v115; // rcx
  unsigned int v116; // ecx
  unsigned int Size; // [rsp+44h] [rbp-154h]
  void **v120; // [rsp+58h] [rbp-140h]
  struct tagTHREADINFO *v121; // [rsp+60h] [rbp-138h]
  unsigned __int64 LowLimit; // [rsp+68h] [rbp-130h] BYREF
  void **v123; // [rsp+70h] [rbp-128h]
  __int64 v124; // [rsp+78h] [rbp-120h]
  __int64 v125; // [rsp+80h] [rbp-118h]
  unsigned int v126; // [rsp+88h] [rbp-110h]
  void **v127; // [rsp+90h] [rbp-108h]
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-F8h] BYREF
  struct tagWND *v129; // [rsp+A8h] [rbp-F0h]
  int v130; // [rsp+B0h] [rbp-E8h]
  void *Src[2]; // [rsp+B8h] [rbp-E0h] BYREF
  void *v132; // [rsp+C8h] [rbp-D0h]
  int v133; // [rsp+D0h] [rbp-C8h]
  unsigned int v134; // [rsp+D8h] [rbp-C0h]
  __int64 v135; // [rsp+E0h] [rbp-B8h]
  unsigned __int64 HighLimit; // [rsp+E8h] [rbp-B0h] BYREF
  __int64 v137; // [rsp+F0h] [rbp-A8h]
  __int64 v138; // [rsp+F8h] [rbp-A0h]
  void **v139; // [rsp+100h] [rbp-98h]
  __int16 *v140; // [rsp+108h] [rbp-90h]
  ULONG_PTR v141; // [rsp+110h] [rbp-88h]
  __int64 v142; // [rsp+118h] [rbp-80h]
  __int64 v143; // [rsp+120h] [rbp-78h]
  _BYTE v144[16]; // [rsp+138h] [rbp-60h] BYREF
  __int64 v145; // [rsp+148h] [rbp-50h] BYREF
  int v146; // [rsp+150h] [rbp-48h]

  v9 = a4;
  v120 = a4;
  v10 = a2;
  v126 = a2;
  v11 = a1;
  v124 = a7;
  v135 = a3;
  v123 = a4;
  v142 = a6;
  v143 = a7;
  v137 = 0LL;
  BugCheckParameter3 = 0LL;
  v127 = 0LL;
  *(_OWORD *)Src = 0LL;
  v132 = 0LL;
  v130 = 0;
  v133 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a6);
  v14 = (_DWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v13 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v14 = (_DWORD *)(v13 & CurrentProcessWin32Process);
  }
  v121 = PtiCurrent(v13);
  v15 = (unsigned __int64)v121 & -(__int64)(a5 != 0);
  v125 = v15;
  if ( v15 && (_InterlockedCompareExchange((volatile signed __int32 *)(v15 + 520), 0, 0) & 1) != 0 )
    return 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( v11 )
  {
    v18 = *(_DWORD **)(*((_QWORD *)v11 + 2) + 456LL);
    if ( v18 == v14 )
      goto LABEL_33;
    if ( v10 > 0xD0 )
    {
      if ( v10 == 272 )
        goto LABEL_30;
      if ( v10 != 353 && v10 != 424 && v10 != 563 && v10 != 648 )
        goto LABEL_29;
    }
    else if ( v10 != 208 && v10 != 12 )
    {
      if ( v10 == 13 )
        goto LABEL_16;
      if ( v10 != 78 )
      {
        if ( v10 != 188 )
        {
          if ( v10 == 196 || v10 == 204 )
          {
LABEL_16:
            if ( *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 19904) + 870LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL)
              && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 28LL) & 0x20) != 0 )
            {
              UserSetLastError(5);
LABEL_32:
              UserSetLastError(5);
              return 0LL;
            }
          }
LABEL_29:
          v21 = 0;
          goto LABEL_31;
        }
        goto LABEL_24;
      }
LABEL_30:
      v21 = 1;
LABEL_31:
      if ( v21 )
        goto LABEL_32;
      goto LABEL_33;
    }
LABEL_24:
    if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
      && (!UIPrivilegeIsolation::Enforced(v19) || *(_QWORD *)v18 == *(_QWORD *)(W32GetUserGdiSessionState(v20) + 40)) )
    {
      if ( v18[191] != v14[191] || v18[192] != v14[192] )
        goto LABEL_32;
      goto LABEL_29;
    }
LABEL_33:
    v11 = a1;
  }
  if ( a8 )
    goto LABEL_66;
  v22 = 0LL;
  if ( v11 )
  {
    v23 = *((_QWORD *)v11 + 2);
  }
  else
  {
    v23 = a6;
    if ( !a6 )
      goto LABEL_39;
  }
  v22 = *(_QWORD *)(v23 + 456);
LABEL_39:
  if ( (_DWORD *)v22 == v14 )
    goto LABEL_66;
  if ( v10 != 717 )
  {
    v24 = IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v22, v11, v10);
    if ( !v24 )
      v24 = IsMessageAlwaysAllowedAcrossIL(v10);
    if ( v24 )
      goto LABEL_66;
    if ( v10 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
      {
        v28 = (const struct tagUIPI_INFO *)(v22 + 864);
      }
      else
      {
        if ( *(_QWORD *)v22 == *(_QWORD *)(W32GetUserGdiSessionState(v26) + 40) )
        {
          v145 = 0x2000LL;
          v146 = 0;
        }
        else
        {
          v145 = *(_QWORD *)(v22 + 864);
          v146 = *(_DWORD *)(v22 + 872);
        }
        v28 = (const struct tagUIPI_INFO *)&v145;
      }
      v29 = UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v14 + 216), v28, v27);
      v25 = v29;
      if ( v29 )
        goto LABEL_66;
      if ( a1 && v10 == 793 )
      {
        v31 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v31 + 1584) == a1 && *(_QWORD *)(v31 + 464) == *((_QWORD *)PtiCurrent(v30) + 58) )
          v25 = 1;
        v9 = v120;
      }
      if ( v25 )
        goto LABEL_66;
      EtwTraceUIPIMsgError(v14, v22, v10, a3, v9);
      UserSetLastError(5);
    }
    else
    {
      v25 = 1;
    }
    if ( v25 )
      goto LABEL_66;
    v11 = a1;
  }
  if ( !UserCheckForMessageAccessWithWindowCapability(v11, v10) )
    return 0LL;
LABEL_66:
  if ( v10 == 576 )
  {
    v32 = 20;
  }
  else
  {
    if ( v10 != 281 )
      goto LABEL_71;
    v32 = 21;
  }
  if ( !HMValidateHandleWithDescriptor((__int64)v9, v32) )
    return 0LL;
LABEL_71:
  if ( !tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(a6 + 456)) )
  {
    v35 = v125;
    goto LABEL_87;
  }
  v34 = v124;
  if ( v124 )
  {
    if ( (*(_DWORD *)(v124 + 32) & 0x40) != 0 )
      goto LABEL_79;
    if ( *(_DWORD *)v124 == 2 && *(_DWORD *)(v124 + 36) )
      return 0LL;
  }
  v35 = v125;
  if ( v125 )
  {
    v36 = **(_QWORD **)(a6 + 456);
    CurrentProcess = PsGetCurrentProcess(v124);
    if ( !PsGetProcessCommonJob(CurrentProcess, v36) )
      return 0LL;
    v34 = v124;
LABEL_79:
    v35 = v125;
    if ( v125 )
      goto LABEL_87;
  }
  if ( !v34 && (v10 == 537 || !(unsigned int)ProcessSuspendedSendMessage(a6, a1, v10, a3, v9))
    || !v35 && *(_DWORD *)(a6 + 568) > 0x2710u )
  {
    return 0LL;
  }
LABEL_87:
  UserSessionState = W32GetUserSessionState(v34, v33);
  v39 = Win32AllocateFromPagedLookasideList(*(_QWORD *)(UserSessionState + 69080));
  v40 = v39;
  v145 = v39;
  v138 = v39;
  if ( !v39 )
    return 0LL;
  *(_QWORD *)(v39 + 120) = 0LL;
  Size = 0;
  v41 = 0;
  LowLimit = (unsigned __int64)v9;
  *(_DWORD *)(v39 + 128) = *((_DWORD *)v121 + 401);
  if ( v124 && *(_DWORD *)v124 == 33 )
    goto LABEL_238;
  if ( v10 > 0x14D )
  {
    if ( v10 > 0x1A2 )
    {
      if ( v10 == 536 )
      {
        if ( v9 && (a3 & 0x8000) != 0 && (!(unsigned __int8)MmIsKernelAddress(v9) || !v35) )
        {
          v41 = *((_DWORD *)v9 + 4) + 20;
          if ( *((_DWORD *)v9 + 4) >= 0xFFFFFFEC )
            goto LABEL_143;
        }
        goto LABEL_182;
      }
      if ( v10 != 537 )
      {
        if ( v10 == 544 )
        {
          v41 = (*((_DWORD *)v9 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v9 + 19) & 0x7FFFFFFF);
          v127 = v9;
          goto LABEL_182;
        }
        if ( v10 == 643 )
        {
          if ( a3 == 24 )
            v41 = (*(_DWORD *)v9 << 9) + 4;
          goto LABEL_182;
        }
        if ( v10 != 780 )
        {
          if ( v10 == 833 )
          {
            v46 = 104;
          }
          else
          {
            if ( v10 == 834 )
            {
              v41 = 80;
              goto LABEL_183;
            }
            if ( v10 != 836 )
            {
              if ( v10 == 838 )
                v41 = 96;
              goto LABEL_182;
            }
            v46 = 1204;
          }
          Size = v46;
          v41 = v46;
          goto LABEL_182;
        }
        goto LABEL_165;
      }
      if ( !v9 || (a3 & 0x8000) == 0 || (unsigned __int8)MmIsKernelAddress(v9) && v35 )
        goto LABEL_182;
      goto LABEL_175;
    }
    if ( v10 == 418 )
      goto LABEL_138;
    if ( v10 > 0x18D )
    {
      if ( v10 != 399 )
      {
        if ( v10 != 401 && v10 != 402 )
        {
          v42 = v10 == 406;
LABEL_159:
          if ( !v42 )
            goto LABEL_182;
          goto LABEL_140;
        }
        goto LABEL_120;
      }
LABEL_138:
      v44 = *((_DWORD *)v121 + 401) == 1;
LABEL_139:
      if ( v44 )
        goto LABEL_182;
      goto LABEL_140;
    }
    if ( v10 != 397 )
    {
      if ( v10 == 344 || v10 == 384 || v10 == 385 )
        goto LABEL_138;
      if ( v10 == 393 )
        goto LABEL_165;
      v45 = v10 == 396;
      goto LABEL_137;
    }
  }
  else
  {
    if ( v10 == 333 )
      goto LABEL_138;
    if ( v10 <= 0x53 )
    {
      if ( v10 != 83 )
      {
        if ( v10 <= 0x38 )
        {
          if ( v10 == 56 )
          {
            v41 = *(unsigned __int16 *)v9;
            goto LABEL_182;
          }
          if ( v10 != 1 )
          {
            if ( v10 != 12 )
            {
              if ( v10 != 13 )
              {
                if ( v10 != 26 )
                {
                  v42 = v10 == 27;
                  goto LABEL_159;
                }
                goto LABEL_121;
              }
LABEL_165:
              *(_OWORD *)Src = *(_OWORD *)v9;
              v130 = (SHIDWORD(Src[0]) >= 0) + 1;
              v133 = v130;
              v9 = Src;
              v120 = Src;
              v123 = Src;
              if ( !(unsigned __int8)MmIsKernelAddress(_mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0]) || !v35 )
                v41 = HIDWORD(Src[0]) & 0x7FFFFFFF;
              goto LABEL_182;
            }
LABEL_121:
            v44 = v9 == 0LL;
            goto LABEL_139;
          }
LABEL_123:
          UserSetLastError(5);
          FreeSMS(v40, 1LL);
          return 0LL;
        }
        if ( v10 != 70 && v10 != 71 )
        {
          if ( v10 == 73 )
          {
            v41 = a3;
          }
          else if ( v10 == 74 )
          {
            BugCheckParameter3 = (ULONG_PTR)v9;
            if ( v9[2] )
            {
              v41 = *((_DWORD *)v9 + 2) + 24;
              if ( v41 < 0x18 )
              {
                FreeSMS(v39, 1LL);
                return 0LL;
              }
            }
            else
            {
              v41 = 24;
            }
          }
          goto LABEL_182;
        }
        v41 = 40;
LABEL_112:
        Size = v41;
        goto LABEL_182;
      }
LABEL_175:
      v41 = *(_DWORD *)v9;
      goto LABEL_182;
    }
    if ( v10 <= 0x143 )
    {
      if ( v10 != 323 )
      {
        switch ( v10 )
        {
          case 0x81u:
            goto LABEL_123;
          case 0x83u:
            v41 = a3 != 0 ? 96 : 16;
            goto LABEL_112;
          case 0xC2u:
            goto LABEL_121;
          case 0xC4u:
            goto LABEL_165;
        }
        if ( v10 != 203 )
          goto LABEL_182;
LABEL_120:
        v41 = 4 * a3;
        goto LABEL_182;
      }
      goto LABEL_138;
    }
    if ( v10 != 325 )
    {
      if ( v10 == 328 )
        goto LABEL_165;
      if ( v10 == 330 )
        goto LABEL_138;
      v45 = v10 == 332;
LABEL_137:
      if ( !v45 )
        goto LABEL_182;
      goto LABEL_138;
    }
  }
LABEL_140:
  *(_OWORD *)Src = *(_OWORD *)v9;
  if ( !(unsigned __int8)MmIsKernelAddress(_mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0]) || !v35 )
  {
    v41 = LODWORD(Src[0]) + 18;
    if ( (unsigned int)(LODWORD(Src[0]) + 18) < LODWORD(Src[0]) )
    {
LABEL_143:
      FreeSMS(v40, 1LL);
      return 8LL;
    }
  }
LABEL_182:
  if ( !v41 )
    goto LABEL_215;
LABEL_183:
  v47 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v41, 1668510549LL);
  *(_QWORD *)(v40 + 120) = v47;
  if ( !v47 )
    goto LABEL_215;
  v132 = v9;
  v139 = v9;
  if ( v10 > 0x14C )
  {
    if ( v10 > 0x18D )
    {
      switch ( v10 )
      {
        case 0x18Fu:
          goto LABEL_213;
        case 0x191u:
          Size = v41;
          goto LABEL_230;
        case 0x196u:
        case 0x1A2u:
          goto LABEL_213;
        case 0x220u:
          v57 = v127;
          v58 = v127[10];
          if ( v58 )
          {
            v59 = *((unsigned int *)v127 + 19);
            LODWORD(v59) = v59 & 0x7FFFFFFF;
            memmove(v47, v58, v59);
            v57 = v127;
            *v127 = *(void **)(v40 + 120);
          }
          if ( *((_DWORD *)v57 + 14) )
          {
            v60 = *((unsigned int *)v57 + 19);
            LODWORD(v60) = v60 & 0x7FFFFFFF;
            v61 = (void *)(*(_QWORD *)(v40 + 120) + v60);
            v62 = *((unsigned int *)v57 + 15);
            LODWORD(v62) = v62 & 0x7FFFFFFF;
            memmove(v61, v57[8], v62);
            v127[1] = v61;
          }
          goto LABEL_215;
      }
      if ( v10 != 780 )
        goto LABEL_230;
    }
    else
    {
      if ( v10 == 397 || v10 == 333 || v10 == 344 || v10 == 384 || v10 == 385 )
        goto LABEL_213;
      if ( v10 != 393 )
      {
        v55 = v10 == 396;
LABEL_212:
        if ( !v55 )
          goto LABEL_230;
LABEL_213:
        v9 = (void **)v47;
        v120 = (void **)v47;
        v123 = (void **)v47;
        v56 = v47[1] & 0x7FFFFFFF | HIDWORD(Src[0]) & 0x80000000;
        v47[1] = v56;
        *v47 = Src[0];
        v49 = v47 + 4;
        *((_QWORD *)v47 + 1) = v47 + 4;
        v50 = v56 ^ (v56 ^ (v41 - 16)) & 0x7FFFFFFF;
        v47[1] = v50;
        LODWORD(v50) = v50 & 0x7FFFFFFF;
        v51 = Src[1];
        goto LABEL_214;
      }
    }
LABEL_224:
    Size = v41;
    v132 = Src[1];
    v139 = (void **)Src[1];
    Src[1] = *(void **)(v40 + 120);
    goto LABEL_215;
  }
  if ( v10 == 332 )
    goto LABEL_213;
  if ( v10 > 0x83 )
  {
    switch ( v10 )
    {
      case 0xC2u:
        goto LABEL_213;
      case 0xC4u:
        *(_WORD *)v47 = *(_WORD *)Src[1];
        goto LABEL_224;
      case 0x143u:
      case 0x145u:
        goto LABEL_213;
    }
    if ( v10 != 328 )
    {
      v55 = v10 == 330;
      goto LABEL_212;
    }
    goto LABEL_224;
  }
  switch ( v10 )
  {
    case 0x83u:
      v52 = LowLimit;
      if ( a3 )
      {
        *(_OWORD *)v47 = *(_OWORD *)LowLimit;
        *((_OWORD *)v47 + 1) = *(_OWORD *)(v52 + 16);
        *((_OWORD *)v47 + 2) = *(_OWORD *)(v52 + 32);
        *((_QWORD *)v47 + 6) = *(_QWORD *)(v52 + 48);
        v53 = *(_QWORD *)(v40 + 120) + 56LL;
        *((_QWORD *)v47 + 6) = v53;
        v54 = *(_QWORD *)(v52 + 48);
        *(_OWORD *)v53 = *(_OWORD *)v54;
        *(_OWORD *)(v53 + 16) = *(_OWORD *)(v54 + 16);
        *(_QWORD *)(v53 + 32) = *(_QWORD *)(v54 + 32);
LABEL_232:
        v9 = *(void ***)(v40 + 120);
        v120 = v9;
        v123 = v9;
        goto LABEL_215;
      }
LABEL_231:
      memmove(v47, (const void *)v52, v41);
      goto LABEL_232;
    case 0xCu:
      goto LABEL_213;
    case 0xDu:
      goto LABEL_224;
    case 0x1Au:
    case 0x1Bu:
      goto LABEL_213;
  }
  if ( v10 != 74 )
  {
LABEL_230:
    v52 = LowLimit;
    goto LABEL_231;
  }
  v9 = (void **)v47;
  v120 = (void **)v47;
  v123 = (void **)v47;
  v48 = BugCheckParameter3;
  *(_OWORD *)v47 = *(_OWORD *)BugCheckParameter3;
  *((_QWORD *)v47 + 2) = *(_QWORD *)(v48 + 16);
  if ( *(_QWORD *)(v48 + 16) )
  {
    v49 = v47 + 6;
    *((_QWORD *)v47 + 2) = v47 + 6;
    v50 = *(unsigned int *)(v48 + 8);
    v51 = *(const void **)(v48 + 16);
LABEL_214:
    memmove(v49, v51, v50);
  }
LABEL_215:
  if ( v41 && !*(_QWORD *)(v40 + 120) )
  {
    FreeSMS(v40, 1LL);
    return 0LL;
  }
  if ( !a9 )
  {
LABEL_238:
    v63 = a1;
    goto LABEL_239;
  }
  v63 = a1;
  if ( a1 && (unsigned int)IsWindowDesktopComposed(a1) && !(unsigned int)IsPointerInputMessage(v10) )
  {
    TransformMessageBetweenCoordinateSpaces(v64, (__int64)a1, 0LL);
    v9 = v123;
    v120 = v123;
  }
LABEL_239:
  *(_QWORD *)(v40 + 112) = 0LL;
  *(_QWORD *)(v40 + 16) = 0LL;
  BugCheckParameter3 = v40 + 112;
  v129 = v63;
  HMAssignmentLock(&BugCheckParameter3, 0LL);
  *(_DWORD *)(v40 + 104) = v10;
  *(_QWORD *)(v40 + 88) = a3;
  *(_QWORD *)(v40 + 96) = v9;
  *(_DWORD *)(v40 + 84) = 0;
  *(_QWORD *)(v40 + 72) = 0LL;
  if ( v10 == 576 || v10 == 281 )
  {
    v78 = _HMObjectFromHandle(v9);
    if ( v78 )
    {
      v70 = a6;
      HMChangeOwnerThread(v78, a6);
      goto LABEL_249;
    }
  }
  else if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v10 == 255 )
    {
      v67 = (struct tagHIDDATA *)HMValidateHandleNoSecure((__int64)v9, 18);
      if ( v67 )
      {
        v66 = v121;
        if ( *((struct tagHIDDATA **)v121 + 142) == v67 )
        {
          if ( v63 )
          {
            v68 = CopyHidData(v67);
            v69 = (void ***)v68;
            if ( v68 )
            {
              *(_DWORD *)(v68 + 48) &= ~1u;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(a6 + 1152), (PSLIST_ENTRY)(v68 + 32));
              v9 = *v69;
              v120 = v9;
              v123 = *v69;
              *(_QWORD *)(v40 + 96) = v9;
            }
          }
        }
      }
    }
  }
  v70 = a6;
LABEL_249:
  v71 = W32GetUserSessionState(v66, v65) + 69048;
  v72 = *(_QWORD *)v71;
  if ( *(_QWORD *)(*(_QWORD *)v71 + 8LL) != v71 )
    goto LABEL_354;
  *(_QWORD *)v40 = v72;
  *(_QWORD *)(v40 + 8) = v71;
  *(_QWORD *)(v72 + 8) = v40;
  *(_QWORD *)v71 = v40;
  v73 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v40 + 80) = v73;
  *(_QWORD *)(v40 + 40) = v70;
  v74 = v125;
  *(_QWORD *)(v40 + 32) = v125;
  *(_DWORD *)(v40 + 132) = W32GetCurrentThreadDpiAwarenessContext(v73);
  *(_QWORD *)(v40 + 64) = 0LL;
  v75 = v124;
  if ( v124 && (*(_DWORD *)v124 & 1) != 0 )
  {
    v76 = *(_DWORD *)v124 & 0x100;
    v77 = *(_DWORD *)(v40 + 84);
    *(_DWORD *)(v40 + 84) = v77 | (v76 != 0 ? 1024 : 2048);
    *(_QWORD *)(v40 + 48) = *(_QWORD *)(v75 + 8);
    *(_QWORD *)(v40 + 56) = *(_QWORD *)(v75 + 16);
    if ( (*(_DWORD *)v75 & 0x20) != 0 )
    {
      *(_DWORD *)(v40 + 84) = v77 | (v76 != 0 ? 1536 : 2560);
      *(_QWORD *)(v40 + 72) = *(_QWORD *)(v75 + 24);
    }
    else
    {
      *(_DWORD *)(v40 + 84) = v77 | (v76 != 0 ? 1280 : 2304);
      *(_QWORD *)(v40 + 64) = v121;
    }
  }
  if ( a9 )
    *(_DWORD *)(v40 + 84) |= 0x10000u;
  v79 = (_QWORD *)(v40 + 16);
  v80 = *(_QWORD **)(a6 + 560);
  if ( *v80 != a6 + 552 )
    goto LABEL_354;
  *v79 = a6 + 552;
  *(_QWORD *)(v40 + 24) = v80;
  *v80 = v79;
  *(_QWORD *)(a6 + 560) = v79;
  ++*(_DWORD *)(a6 + 568);
  if ( v74 )
  {
    v137 = *(_QWORD *)(v74 + 536);
    *(_QWORD *)(v74 + 536) = v40;
  }
  else
  {
    *(_DWORD *)(v40 + 84) |= 8u;
  }
  if ( (*(_DWORD *)(v40 + 84) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState(v10) || (unsigned int)IsPointerParentNotify(v10, a3)) )
  {
    v83 = W32GetUserSessionState(v82, v81);
    CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v83 + 3256), v9, 6LL, v40);
    v75 = v124;
  }
  EtwTraceBeginSendMessage(v40, v74, v75);
  if ( !v74 )
  {
    SetWakeBit(a6, 64LL);
    EtwTraceEndSendMessage(v40);
    return 1LL;
  }
  v84 = 0;
  v85 = 0;
  LODWORD(v127) = 0;
  v86 = 512;
  LODWORD(LowLimit) = 0;
  SetWakeBit(a6, 64LL);
  if ( v124 )
  {
    v85 = *(_DWORD *)(v124 + 36);
    LODWORD(v127) = v85;
    v86 = ((*(_DWORD *)(v124 + 32) & 1) << 15) + 512;
  }
  CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v144);
  v87 = v125;
  if ( *(_QWORD *)(v125 + 464) == *(_QWORD *)(a6 + 464)
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v125 + 520), 0, 0) & 0x10000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v87 + 520), 0x10000u);
    LODWORD(LowLimit) = 1;
  }
  v88 = 0LL;
  if ( v10 == 788 )
  {
    if ( v120 )
    {
      v88 = (__int64)*v120;
      if ( ((_DWORD)v120[3] & 1) != 0 )
      {
        *(_DWORD *)(v40 + 84) |= 0x60000u;
        *(_QWORD *)(v40 + 120) = *(_QWORD *)v88;
      }
    }
  }
  if ( (*(_DWORD *)(v40 + 84) & 1) == 0 )
  {
    while ( 1 )
    {
      if ( v84 )
      {
LABEL_305:
        v10 = v126;
        goto LABEL_306;
      }
      Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
      v90 = 0;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v91 + 480) + 4LL), 0xFFFFFDFF);
      if ( v88
        && (*(_DWORD *)(v88 + 48) == 13 || *(_DWORD *)(v88 + 48) == 14)
        && *(_DWORD *)(v89 + 664) <= 0x501u
        && *(_DWORD *)(v89 + 680) )
      {
        v92 = PtiCurrent((unsigned int)(*(_DWORD *)(v88 + 48) - 13));
        Win32HM_LockIntoThread<1>((__int64)v92, v88, (__int64 *)&BugCheckParameter3);
        v90 = 1;
      }
      v93 = xxxSleepThread(v86, v85, 0LL, 0LL);
      v95 = v93;
      v96 = v93 == 0;
      if ( v90 )
        break;
LABEL_294:
      v84 = v96;
      if ( !v95 && v124 )
      {
        v99 = *(_DWORD *)(v124 + 32);
        if ( (v99 & 0x10) != 0 || (*(_DWORD *)(v40 + 84) & 0x20) != 0 )
        {
          v84 = v96;
          if ( (*(_DWORD *)(v40 + 84) & 0x10) != 0 )
          {
            LODWORD(v127) = 0;
            v84 = 0;
          }
        }
        if ( (v99 & 8) != 0 )
          v84 &= -(IsThreadHung((const struct tagTHREADINFO *)a6, v94) != 0);
        if ( !v84 )
          EtwTraceConvertTimeOutToBlocking();
      }
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3);
      v85 = (unsigned int)v127;
      if ( (*(_DWORD *)(v40 + 84) & 1) != 0 )
        goto LABEL_305;
    }
    v97 = *(unsigned int *)(v88 + 64);
    if ( v93 )
    {
      LODWORD(v97) = v97 & 0xFFFFBFFF;
    }
    else
    {
      LODWORD(v97) = v97 | 0x4000;
      *(_DWORD *)(v88 + 64) = v97;
      if ( (v97 & 0x10) != 0 )
        goto LABEL_293;
      if ( ++*(_BYTE *)(v88 + 97) <= 0xAu )
        goto LABEL_293;
      v97 = (unsigned int)v97 | 0x10;
    }
    *(_DWORD *)(v88 + 64) = v97;
LABEL_293:
    v98 = PtiCurrent(v97);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v98, &BugCheckParameter3);
    v129 = 0LL;
    BugCheckParameter3 = -1LL;
    goto LABEL_294;
  }
LABEL_306:
  v126 = v84;
  CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v144);
  v100 = v125;
  if ( (_DWORD)LowLimit )
  {
    _InterlockedAnd((volatile signed __int32 *)(v125 + 520), 0xFFFEFFFF);
    MergeDeferredMessagesOfThreadOnQueue(v100);
  }
  SetWakeBit(v100, 512LL);
  if ( v84 )
    goto LABEL_334;
  if ( !Size )
  {
    if ( v10 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      TransformMessageBetweenCoordinateSpaces(0x33Fu, 0LL, (__int64)a1);
    goto LABEL_334;
  }
  v101 = (ULONG_PTR)v132;
  BugCheckParameter3 = (ULONG_PTR)v132;
  if ( v10 != 131 )
  {
    v102 = *(__int16 **)(v40 + 120);
    if ( v130 )
    {
      if ( v130 == 1 )
      {
        strncpycch(v132, v102, Size);
      }
      else
      {
        v103 = Size >> 1;
        v134 = Size >> 1;
        v140 = v102;
        v141 = (ULONG_PTR)v132;
        while ( v103 )
        {
          v104 = *v102++;
          v140 = v102;
          *(_WORD *)v101 = v104;
          v101 += 2LL;
          v141 = v101;
          if ( !v104 )
            break;
          v134 = --v103;
        }
      }
    }
    else
    {
      memmove(v132, v102, Size);
    }
    v105 = a6;
    goto LABEL_335;
  }
  if ( a9 && a1 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformMessageBetweenCoordinateSpaces(0x83u, 0LL, (__int64)a1);
      v101 = BugCheckParameter3;
    }
    else
    {
      v101 = (ULONG_PTR)v132;
    }
  }
  v106 = *(__int128 **)(v40 + 120);
  v107 = *v106;
  if ( !a3 )
  {
    *(_OWORD *)v101 = v107;
LABEL_334:
    v105 = a6;
    goto LABEL_335;
  }
  v108 = *(_QWORD *)(v101 + 48);
  *(_OWORD *)v101 = v107;
  *(_OWORD *)(v101 + 16) = v106[1];
  *(_OWORD *)(v101 + 32) = v106[2];
  *(_QWORD *)(v101 + 48) = v108;
  v109 = *((_QWORD *)v106 + 6);
  v105 = a6;
  if ( v109 )
  {
    *(_OWORD *)v108 = *(_OWORD *)v109;
    *(_OWORD *)(v108 + 16) = *(_OWORD *)(v109 + 16);
    *(_QWORD *)(v108 + 32) = *(_QWORD *)(v109 + 32);
  }
LABEL_335:
  EtwTraceEndSendMessage(v40);
  *(_QWORD *)(v100 + 536) = v137;
  v110 = v124;
  if ( v124 )
  {
    **(_QWORD **)(v124 + 40) = *(_QWORD *)(v138 + 72);
    if ( (*(_DWORD *)(v110 + 32) & 0x20) != 0 && (*(_DWORD *)(v40 + 84) & 0x8000) != 0 )
    {
      v111 = 0LL;
      UserSetLastError(1400);
      v110 = v124;
    }
    else
    {
      v111 = v84 == 0;
    }
  }
  else
  {
    v111 = *(_QWORD *)(v138 + 72);
  }
  if ( v110 || v84 )
  {
    v112 = *(_DWORD *)(v40 + 84);
    if ( (v112 & 1) == 0 )
    {
      v113 = v112 | 1;
      *(_DWORD *)(v40 + 84) = v113;
      if ( (v113 & 0x4000) != 0 )
      {
        *(_DWORD *)(v40 + 84) = v113 | 8;
        goto LABEL_349;
      }
      --*(_DWORD *)(v105 + 568);
      v114 = *(_QWORD *)(v40 + 16);
      v115 = *(_QWORD **)(v40 + 24);
      if ( *(_QWORD *)(v114 + 8) == v40 + 16 && *v115 == v40 + 16 )
      {
        *v115 = v114;
        *(_QWORD *)(v114 + 8) = v115;
        *(_QWORD *)(v40 + 16) = 0LL;
        *(_DWORD *)(v40 + 84) |= 0x10u;
        goto LABEL_349;
      }
LABEL_354:
      __fastfail(3u);
    }
  }
LABEL_349:
  v116 = *(_DWORD *)(v40 + 84) & 0xFFFDFFFF;
  *(_DWORD *)(v40 + 84) = v116;
  if ( (v116 & 0x4010) != 0x10 )
  {
    v116 |= 8u;
    *(_DWORD *)(v40 + 84) = v116;
  }
  if ( (v116 & 0x8008) != 8 )
    UnlinkSendListSms(v40);
  return v111;
}
