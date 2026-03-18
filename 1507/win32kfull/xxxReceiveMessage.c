/*
 * XREFs of xxxReceiveMessage @ 0x1C006D6A0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E02A8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 *     xxxUserYield @ 0x1C01E9B0C (xxxUserYield.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C006D340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C006D4F0 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 v11; // r14
  _QWORD *v12; // rax
  int v13; // eax
  _DWORD *v14; // rax
  int v15; // r15d
  __int64 v16; // r13
  unsigned int v17; // edi
  __int64 v18; // rax
  _QWORD *v19; // rax
  int v20; // ecx
  __int64 Valid; // rcx
  __int64 v22; // r10
  __int64 v23; // rcx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 *v30; // rcx
  __int64 **v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  char v34; // di
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 *v40; // r10
  _OWORD *v41; // rdi
  __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int *v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rdx
  _DWORD *v50; // rcx
  int v51; // esi
  unsigned int v52; // r10d
  __int64 v53; // rcx
  _DWORD *v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  void *v59; // rdi
  __int64 *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rdi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int MonitorFlags; // eax
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // eax
  unsigned int v78; // eax
  _OWORD *v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  unsigned int v84; // eax
  unsigned int v85; // eax
  __int64 *v86; // rax
  __int64 v88; // [rsp+50h] [rbp-F8h] BYREF
  _OWORD *v89; // [rsp+58h] [rbp-F0h]
  __int64 *v90; // [rsp+60h] [rbp-E8h]
  unsigned int v91; // [rsp+68h] [rbp-E0h]
  __int64 v92; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v94; // [rsp+80h] [rbp-C8h]
  __int64 v95; // [rsp+88h] [rbp-C0h]
  __int64 v96; // [rsp+90h] [rbp-B8h]
  __int64 v97; // [rsp+98h] [rbp-B0h]
  __int64 *v98; // [rsp+A0h] [rbp-A8h]
  __int64 v99; // [rsp+A8h] [rbp-A0h]
  int v100; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v101; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v102; // [rsp+C0h] [rbp-88h]
  _QWORD v103[3]; // [rsp+D8h] [rbp-70h] BYREF
  _BYTE v104[40]; // [rsp+F0h] [rbp-58h] BYREF

  v89 = (_OWORD *)a1;
  v2 = 0LL;
  v92 = 0LL;
  v3 = (_QWORD *)(a1 + 480);
  v4 = *(_QWORD *)(a1 + 480);
  if ( v4 == a1 + 480 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 408) + 6LL) &= ~0x40u;
    v26 = *(_QWORD *)(a1 + 408);
    *(_WORD *)(v26 + 4) &= ~0x40u;
    return v26;
  }
  v5 = (__int64 *)(v4 - 16);
  v90 = v5;
  --*(_DWORD *)(a1 + 496);
  v6 = v5 + 2;
  v7 = v5[2];
  v8 = (_QWORD *)v5[3];
  if ( *(__int64 **)(v7 + 8) != v5 + 2 || (_QWORD *)*v8 != v6 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *v6 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v5);
  *((_DWORD *)v5 + 21) |= 0x4010u;
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 408) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 408) + 4LL) &= ~0x40u;
  }
  v11 = v5[4];
  v88 = v11;
  if ( v11 )
  {
    v12 = *(_QWORD **)(a1 + 440);
    if ( (*(_DWORD *)(v11 + 448) & 0x100) != 0 )
      *v12 |= 0x1000uLL;
    else
      *v12 &= ~0x1000uLL;
  }
  v13 = *((_DWORD *)v5 + 21);
  if ( (v13 & 0x200) != 0 )
  {
    if ( !v11 )
    {
      v49 = v5[14];
      v101 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v101;
      v102 = v49;
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
    }
    if ( (*((_DWORD *)v5 + 21) & 0x400) != 0 )
    {
      v50 = *(_DWORD **)(gptiCurrent + 408LL);
      v51 = *v50 & 8;
      *v50 |= 4u;
      **(_DWORD **)(gptiCurrent + 408LL) |= 8u;
      v52 = *((_DWORD *)v5 + 26);
      if ( v52 == 576 || v52 == 281 )
        ((void (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v52]])(
          v5[14],
          v52,
          v5[7],
          v5[9],
          v5[6],
          *(_QWORD *)(gpsi + 744LL),
          1,
          0LL);
      else
        SfnDWORD((__int64 *)v5[14], v52, v5[7], v5[9], v5[6], *(_QWORD *)(gpsi + 744LL));
      **(_DWORD **)(gptiCurrent + 408LL) &= ~4u;
      v54 = *(_DWORD **)(gptiCurrent + 408LL);
      if ( v51 )
        *v54 |= 8u;
      else
        *v54 &= ~8u;
    }
    else
    {
      v60 = (__int64 *)v5[14];
      if ( v60 )
        v2 = *v60;
      ((void (__fastcall *)(__int64, _QWORD, __int64, __int64))v5[6])(v2, *((unsigned int *)v5 + 26), v5[7], v5[9]);
    }
    if ( !v11 )
      ThreadUnlock1(v53, v9);
    goto LABEL_39;
  }
  if ( (v13 & 7) == 0 )
  {
    v14 = *(_DWORD **)(a1 + 408);
    v15 = *v14 & 8;
    v16 = *(_QWORD *)(a1 + 472);
    *(_QWORD *)(a1 + 472) = v5;
    *v14 |= 2u;
    **(_DWORD **)(a1 + 408) |= 8u;
    v10 = (__int64 *)gptiCurrent;
    if ( !v11 )
    {
      v33 = v5[14];
      v101 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v101;
      v102 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
    }
    if ( *((_DWORD *)v5 + 26) != 788 )
    {
      v17 = *(_DWORD *)(gptiCurrent + 1252LL);
      v91 = v17;
      *(_DWORD *)(gptiCurrent + 1252LL) = *((_DWORD *)v5 + 32);
      v18 = *(_QWORD *)(a1 + 424);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 608) | *(_DWORD *)(v18 + 24));
      if ( ((*(_BYTE *)(a1 + 608) | *(_BYTE *)(v18 + 24)) & 0x20) == 0 )
      {
LABEL_26:
        if ( (*((_DWORD *)v5 + 21) & 7) == 0 )
        {
          v22 = v5[14];
          if ( v22 )
          {
            if ( (*(_BYTE *)(v22 + 42) & 4) != 0 )
            {
              v34 = 0;
              v35 = *v10;
              v103[0] = *(_QWORD *)(*v10 + 376);
              *(_QWORD *)(v35 + 376) = v103;
              v103[1] = v22;
              ++*(_DWORD *)(v22 + 8);
              v36 = *((unsigned int *)v5 + 26);
              v37 = 0x1C0000000uLL;
              if ( (unsigned int)v36 < 0x400
                && ((MessageTable[v36] & 0x200) != 0 || (_DWORD)v36 == 537 && (v5[11] & 0x8000) != 0) )
              {
                *((_DWORD *)v5 + 21) |= 0x20u;
                if ( v11 )
                {
                  v59 = *(void **)v11;
                  PushW32ThreadLock(*(_QWORD *)v11, v104, (__int64)DereferenceKernelStack);
                  ObfReferenceObject(v59);
                  PsReferenceKernelStack(v59);
                  v37 = 0x1C0000000uLL;
                  v34 = 1;
                }
              }
              v38 = v5[14];
              v39 = *(_QWORD *)(v38 + 144);
              if ( v39 >= 7 )
                v92 = 0LL;
              else
                v92 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))*(&gServerHandlers + v39))(
                        v38,
                        *((unsigned int *)v5 + 26),
                        v5[11],
                        v5[12]);
              if ( v34 )
                PopAndFreeW32ThreadLock(v104);
              ThreadUnlock1(v38, v37);
              v17 = v91;
            }
            else
            {
              xxxSendMessageToClient(
                (struct tagWND *)v22,
                *((_DWORD *)v5 + 26),
                v5[11],
                v5[12],
                (struct tagSMS *)v5,
                1,
                &v92);
            }
            v9 = (unsigned int)(*(_DWORD *)(a1 + 608) | *(_DWORD *)(*(_QWORD *)(a1 + 424) + 24LL));
            if ( ((*(_WORD *)(a1 + 608) | *(_WORD *)(*(_QWORD *)(a1 + 424) + 24LL)) & 0x2000) != 0
              && (*((_BYTE *)v5 + 84) & 4) == 0 )
            {
              v86 = (__int64 *)v5[14];
              if ( v86 )
                v97 = *v86;
              else
                v97 = 0LL;
              LODWORD(v96) = *((_DWORD *)v5 + 26);
              v95 = v5[11];
              v94 = v5[12];
              v93 = v92;
              v98 = v5;
              xxxCallHook(0, 1, (__int64)&v93, 0xCu);
            }
            *(_DWORD *)(gptiCurrent + 1252LL) = v17;
          }
        }
        goto LABEL_32;
      }
      v19 = (_QWORD *)v5[14];
      if ( v19 )
        *(_QWORD *)&v104[24] = *v19;
      else
        *(_QWORD *)&v104[24] = 0LL;
      v20 = *((_DWORD *)v5 + 26);
      *(_DWORD *)&v104[16] = v20;
      *(_QWORD *)&v104[8] = v5[11];
      *(_QWORD *)v104 = v5[12];
      *(_QWORD *)&v104[32] = v5;
      if ( (unsigned int)(v20 - 577) > 3 && ((unsigned int)(v20 - 581) > 0x12 || v20 == 589) )
      {
        if ( v20 == 528 && *(_WORD *)&v104[8] == 582 )
          goto LABEL_160;
      }
      else if ( v20 != 595 )
      {
LABEL_160:
        xxxPointerCallHook(0, 1, (__int64)v104, 4u, 0);
LABEL_25:
        v10 = (__int64 *)gptiCurrent;
        goto LABEL_26;
      }
      Valid = *(_QWORD *)(gptiCurrent + 832LL);
      if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 72LL)) != 0)
        && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
      {
        Valid = PhkNextValid(Valid);
      }
      xxxCallHook2(Valid, 0, 1LL, (int *)v104, 0LL);
      goto LABEL_25;
    }
    memset(v104, 0, sizeof(v104));
    v40 = (__int64 *)v5[12];
    v90 = v40;
    v41 = (_OWORD *)v40[2];
    v89 = v41;
    v42 = *(unsigned int *)(*v40 + 48);
    v91 = v42;
    v99 = *(_QWORD *)(a1 + 1216);
    if ( (_DWORD)v42 == 13 )
    {
      if ( v41 )
      {
        *(_OWORD *)v104 = *v41;
        *(_QWORD *)&v104[16] = *((_QWORD *)v41 + 2);
        if ( *((_DWORD *)v40 + 6) != -1 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 832LL);
          v44 = v40[3];
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v44 <= (unsigned int)v43 )
            {
              if ( (_DWORD)v44 != (_DWORD)v43
                || (v45 = HIDWORD(v44), v46 = HIDWORD(v43), (_DWORD)v45 != (_DWORD)v46)
                && (_DWORD)v45 != -1
                && (_DWORD)v46 != -1 )
              {
                *(_DWORD *)&v104[8] |= 2u;
              }
            }
          }
        }
      }
LABEL_76:
      v90 = *(__int64 **)(a1 + 1200);
      v88 = *(_QWORD *)(a1 + 1208);
      *(_QWORD *)(a1 + 1200) = v40[3];
      *(_QWORD *)(a1 + 1208) = v40[4];
      *(_QWORD *)(a1 + 1216) = v104;
      goto LABEL_77;
    }
    if ( (_DWORD)v42 == 14 )
    {
      if ( v41 )
      {
        *(_OWORD *)v104 = *v41;
        *(_OWORD *)&v104[16] = v41[1];
        if ( *((_DWORD *)v40 + 6) != -1 )
        {
          v55 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 832LL);
          v56 = v40[3];
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v56 <= (unsigned int)v55 )
            {
              if ( (_DWORD)v56 != (_DWORD)v55
                || (v57 = HIDWORD(v56), v58 = HIDWORD(v55), (_DWORD)v57 != (_DWORD)v58)
                && (_DWORD)v57 != -1
                && (_DWORD)v58 != -1 )
              {
                *(_DWORD *)&v104[12] |= 2u;
              }
            }
          }
        }
      }
      goto LABEL_76;
    }
    if ( (int)v42 >= 0 )
    {
      if ( (int)v42 <= 1 )
      {
        if ( !v41 )
          goto LABEL_149;
        *(_OWORD *)v104 = *v41;
        *(_QWORD *)&v104[16] = *((_QWORD *)v41 + 2);
        if ( (unsigned int)(_mm_cvtsi128_si32(*(__m128i *)v104) - 512) > 0xE )
          goto LABEL_77;
        v67 = v5[4];
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v42);
        if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v67 + 384)) )
        {
          v88 = *(_QWORD *)&v104[4];
          MonitorFlags = GetMonitorFlags(*(_QWORD *)(v5[4] + 384));
          LogicalToPhysicalDPIPoint(&v88, &v88, MonitorFlags, 0LL);
          v71 = PsGetCurrentProcessWin32Process(v70);
          v72 = GetMonitorFlags(v71);
          PhysicalToLogicalDPIPoint(&v88, &v88, v72, 0LL);
          *(_QWORD *)&v104[4] = v88;
        }
      }
      else
      {
        if ( (_DWORD)v42 == 2 )
        {
LABEL_142:
          v41 = 0LL;
          v89 = 0LL;
          goto LABEL_149;
        }
        if ( (_DWORD)v42 != 7 )
        {
          if ( (_DWORD)v42 == 10 )
            goto LABEL_142;
          goto LABEL_148;
        }
        if ( !v41 )
          goto LABEL_149;
        *(_OWORD *)v104 = *v41;
        *(_OWORD *)&v104[16] = v41[1];
        *(_QWORD *)&v104[32] = *((_QWORD *)v41 + 4);
        v61 = v5[4];
        v62 = PsGetCurrentProcessWin32Process(v42);
        if ( !(unsigned int)SameCoordinateSpace(v62, *(_QWORD *)(v61 + 384)) )
        {
          v63 = GetMonitorFlags(*(_QWORD *)(v5[4] + 384));
          LogicalToPhysicalDPIPoint(v104, v104, v63, 0LL);
          v65 = PsGetCurrentProcessWin32Process(v64);
          v66 = GetMonitorFlags(v65);
          PhysicalToLogicalDPIPoint(v104, v104, v66, 0LL);
          v41 = v89;
          v40 = v90;
          goto LABEL_77;
        }
      }
      v41 = v89;
      v40 = v90;
      goto LABEL_77;
    }
LABEL_148:
    UserSetLastError(87);
    v41 = 0LL;
    v89 = 0LL;
    v40 = v90;
LABEL_77:
    if ( v41 )
    {
      v47 = (int *)v104;
      goto LABEL_79;
    }
LABEL_149:
    v47 = (int *)v40[2];
LABEL_79:
    v92 = xxxCallHook2(*v40, *((_DWORD *)v40 + 2), v5[11], v47, &v100);
    v48 = v91;
    if ( v91 - 13 <= 1 )
    {
      *(_QWORD *)(a1 + 1200) = v90;
      *(_QWORD *)(a1 + 1208) = v88;
      *(_QWORD *)(a1 + 1216) = v99;
    }
    if ( (*((_DWORD *)v5 + 21) & 5) != 0 || !v41 )
      goto LABEL_32;
    if ( (_DWORD)v48 != 13 )
    {
      if ( (int)v48 < 0 )
      {
LABEL_32:
        v23 = *((unsigned int *)v5 + 21);
        if ( (*((_DWORD *)v5 + 21) & 0x101) == 0x100 )
        {
          v23 = (unsigned int)v23 | 1;
          *((_DWORD *)v5 + 21) = v23;
          if ( (v23 & 4) == 0 )
          {
            LODWORD(v93) = 33;
            if ( (v23 & 0x400) != 0 )
              LODWORD(v93) = 289;
            v94 = v5[6];
            v95 = v5[7];
            v96 = v92;
            xxxInterSendMsgEx(v5[14], *((_DWORD *)v5 + 26), 0, 0, 0LL, v5[8], (__int64)&v93, 1, v23 & 0x10000);
          }
        }
        if ( !v11 )
          ThreadUnlock1(v23, v9);
        *(_QWORD *)(a1 + 472) = v16;
        v24 = *(_DWORD **)(a1 + 408);
        if ( v16 )
          *v24 |= 2u;
        else
          *v24 &= ~2u;
        v25 = *(_DWORD **)(a1 + 408);
        if ( v15 )
          *v25 |= 8u;
        else
          *v25 &= ~8u;
        goto LABEL_39;
      }
      if ( (int)v48 > 1 )
      {
        if ( (_DWORD)v48 == 7 )
        {
          v73 = v5[4];
          v74 = PsGetCurrentProcessWin32Process(v48);
          if ( !(unsigned int)SameCoordinateSpace(v74, *(_QWORD *)(v73 + 384)) )
          {
            v76 = PsGetCurrentProcessWin32Process(v75);
            v77 = GetMonitorFlags(v76);
            LogicalToPhysicalDPIPoint(v104, v104, v77, 0LL);
            v78 = GetMonitorFlags(*(_QWORD *)(v5[4] + 384));
            PhysicalToLogicalDPIPoint(v104, v104, v78, 0LL);
          }
          v79 = v89;
          *v89 = *(_OWORD *)v104;
          v79[1] = *(_OWORD *)&v104[16];
          *((_QWORD *)v79 + 4) = *(_QWORD *)&v104[32];
        }
        else if ( (_DWORD)v48 == 14 )
        {
          *v41 = *(_OWORD *)v104;
          v41[1] = *(_OWORD *)&v104[16];
        }
        goto LABEL_32;
      }
      if ( (unsigned int)(*(_DWORD *)v104 - 512) <= 0xE )
      {
        v80 = v5[4];
        v81 = PsGetCurrentProcessWin32Process(v48);
        if ( !(unsigned int)SameCoordinateSpace(v81, *(_QWORD *)(v80 + 384)) )
        {
          v88 = *(_QWORD *)&v104[4];
          v83 = PsGetCurrentProcessWin32Process(v82);
          v84 = GetMonitorFlags(v83);
          LogicalToPhysicalDPIPoint(&v88, &v88, v84, 0LL);
          v85 = GetMonitorFlags(*(_QWORD *)(v5[4] + 384));
          PhysicalToLogicalDPIPoint(&v88, &v88, v85, 0LL);
          *(_QWORD *)&v104[4] = v88;
        }
        v41 = v89;
      }
    }
    *v41 = *(_OWORD *)v104;
    *((_QWORD *)v41 + 2) = *(_QWORD *)&v104[16];
    goto LABEL_32;
  }
LABEL_39:
  LODWORD(v26) = EtwTraceEndRetrieveSendMessage(v5, v9, v10);
  v27 = *((_DWORD *)v5 + 21) & 0xFFFFBFFF;
  *((_DWORD *)v5 + 21) = v27;
  if ( (v27 & 8) != 0 )
  {
    v28 = *((_DWORD *)v5 + 26);
    if ( v28 == 576 )
    {
      FreeTouchInputInfo(v5[12], 0LL);
    }
    else if ( v28 == 281 )
    {
      FreeGestureInfo(v5[12], 0LL);
    }
    if ( (*((_DWORD *)v5 + 21) & 0x200) == 0 )
    {
      if ( ((v29 = *((_DWORD *)v5 + 26), (unsigned int)(v29 - 577) <= 3)
         || (unsigned int)(v29 - 581) <= 0x12 && v29 != 589)
        && v29 != 595
        || v29 == 528 && *((_WORD *)v5 + 44) == 582 )
      {
        PointerList::UnreferenceMsgData(v5[12], 6LL);
      }
    }
    v30 = (__int64 *)*v5;
    v31 = (__int64 **)v5[1];
    if ( *(__int64 **)(*v5 + 8) != v5 || *v31 != v5 )
      __fastfail(3u);
    *v31 = v30;
    v30[1] = (__int64)v31;
    HMAssignmentUnlock(v5 + 14);
    v32 = v5[15];
    if ( v32 )
      Win32FreePool(v32);
    LODWORD(v26) = Win32FreeToPagedLookasideList(SMSLookaside, v5);
  }
  else if ( (v27 & 1) == 0 )
  {
    LODWORD(v26) = v92;
    v5[9] = v92;
    *((_DWORD *)v5 + 21) = v27 | 1;
    if ( v11 )
    {
      LODWORD(v26) = *(_DWORD *)(v11 + 448);
      if ( (v26 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v11 + 408) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v11 + 408) + 4LL) |= 0x200u;
        v26 = *(_QWORD *)(v11 + 408);
        if ( (*(_WORD *)(v26 + 10) & 0x200) != 0 )
          LODWORD(v26) = KeSetEvent(*(PRKEVENT *)(v11 + 656), 2, 0);
      }
    }
  }
  return v26;
}
