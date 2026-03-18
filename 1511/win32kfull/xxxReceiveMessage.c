/*
 * XREFs of xxxReceiveMessage @ 0x1C005D110
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C005B640 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C0081988 (xxxWaitForDITMouseInjectionFlush.c)
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E2DB4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01EA12C (xxxUserYield.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000B9B8 (xxxPointerCallHook.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059200 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     SfnDWORD @ 0x1C005CF50 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     UnlinkSendListSms @ 0x1C0065234 (UnlinkSendListSms.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r14
  _QWORD *v11; // rax
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // r15d
  __int64 v15; // r13
  __int64 *v16; // r8
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  int v21; // ecx
  __int64 Valid; // rcx
  __int64 v23; // r10
  __int64 v24; // rcx
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // r10
  _OWORD *v36; // rdi
  unsigned int v37; // eax
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  int *v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rdx
  _DWORD *v46; // rcx
  int v47; // esi
  unsigned int v48; // r10d
  __int64 v49; // rdx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  void *v56; // rdi
  __int64 *v57; // rax
  __int64 v58; // rdi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int MonitorFlags; // eax
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rdi
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // eax
  unsigned int v75; // eax
  _OWORD *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  unsigned int v81; // eax
  unsigned int v82; // eax
  __int64 *v83; // rax
  char v85; // [rsp+50h] [rbp-108h]
  __int64 v86; // [rsp+58h] [rbp-100h] BYREF
  _OWORD *v87; // [rsp+60h] [rbp-F8h]
  _QWORD *v88; // [rsp+68h] [rbp-F0h]
  unsigned int v89; // [rsp+70h] [rbp-E8h]
  __int64 v90; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+88h] [rbp-D0h]
  __int64 v93; // [rsp+90h] [rbp-C8h]
  __int64 v94; // [rsp+98h] [rbp-C0h]
  __int64 v95; // [rsp+A0h] [rbp-B8h]
  __int64 v96; // [rsp+A8h] [rbp-B0h]
  __int64 v97; // [rsp+B0h] [rbp-A8h]
  _BYTE v98[8]; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v100; // [rsp+C8h] [rbp-90h]
  _QWORD v101[3]; // [rsp+E0h] [rbp-78h] BYREF
  _BYTE v102[40]; // [rsp+F8h] [rbp-60h] BYREF

  v87 = (_OWORD *)a1;
  v2 = 0LL;
  v90 = 0LL;
  v3 = (_QWORD *)(a1 + 472);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v4 == a1 + 472 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x40u;
    v27 = *(_QWORD *)(a1 + 400);
    *(_WORD *)(v27 + 4) &= ~0x40u;
    return v27;
  }
  v5 = v4 - 16;
  v88 = (_QWORD *)v5;
  --*(_DWORD *)(a1 + 488);
  v6 = (_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = *(_QWORD **)(v5 + 24);
  if ( *(_QWORD *)(v7 + 8) != v5 + 16 || (_QWORD *)*v8 != v6 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *v6 = 0LL;
  EtwTraceBeginRetrieveSendMessage(v5);
  *(_DWORD *)(v5 + 84) |= 0x4010u;
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) &= ~0x40u;
  }
  v10 = *(_QWORD *)(v5 + 32);
  v86 = v10;
  if ( v10 )
  {
    v11 = *(_QWORD **)(a1 + 432);
    if ( (*(_DWORD *)(v10 + 440) & 0x100) != 0 )
      *v11 |= 0x1000uLL;
    else
      *v11 &= ~0x1000uLL;
  }
  v12 = *(_DWORD *)(v5 + 84);
  if ( (v12 & 0x200) != 0 )
  {
    if ( !v10 )
    {
      v45 = *(_QWORD *)(v5 + 112);
      v99 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v99;
      v100 = v45;
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
    }
    if ( (*(_DWORD *)(v5 + 84) & 0x400) != 0 )
    {
      v46 = *(_DWORD **)(gptiCurrent + 400LL);
      v47 = *v46 & 8;
      *v46 |= 4u;
      **(_DWORD **)(gptiCurrent + 400LL) |= 8u;
      v48 = *(_DWORD *)(v5 + 104);
      if ( v48 == 576 || v48 == 281 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v48]])(
          *(_QWORD *)(v5 + 112),
          v48,
          *(_QWORD *)(v5 + 56),
          *(_QWORD *)(v5 + 72),
          *(_QWORD *)(v5 + 48),
          *(_QWORD *)(gpsi + 744LL),
          1,
          0LL);
      else
        SfnDWORD(
          *(__int64 **)(v5 + 112),
          v48,
          *(_QWORD *)(v5 + 56),
          *(_QWORD *)(v5 + 72),
          *(_QWORD *)(v5 + 48),
          *(_QWORD *)(gpsi + 744LL));
      **(_DWORD **)(gptiCurrent + 400LL) &= ~4u;
      v51 = *(_DWORD **)(gptiCurrent + 400LL);
      if ( v47 )
        *v51 |= 8u;
      else
        *v51 &= ~8u;
    }
    else
    {
      v57 = *(__int64 **)(v5 + 112);
      if ( v57 )
        v2 = *v57;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v5 + 48))(
        v2,
        *(unsigned int *)(v5 + 104),
        *(_QWORD *)(v5 + 56),
        *(_QWORD *)(v5 + 72));
    }
    if ( !v10 )
      ThreadUnlock1(v50, v49);
    goto LABEL_39;
  }
  if ( (v12 & 7) == 0 )
  {
    v13 = *(_DWORD **)(a1 + 400);
    v14 = *v13 & 8;
    v15 = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(a1 + 464) = v5;
    *v13 |= 2u;
    **(_DWORD **)(a1 + 400) |= 8u;
    v16 = (__int64 *)gptiCurrent;
    if ( !v10 )
    {
      v34 = *(_QWORD *)(v5 + 112);
      v99 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v99;
      v100 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
    }
    if ( *(_DWORD *)(v5 + 104) != 788 )
    {
      v17 = *(_DWORD *)(gptiCurrent + 1244LL);
      v89 = v17;
      *(_DWORD *)(gptiCurrent + 1244LL) = *(_DWORD *)(v5 + 128);
      v18 = *(_QWORD *)(a1 + 416);
      v19 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(v18 + 24));
      if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(v18 + 24)) & 0x20) == 0 )
      {
LABEL_26:
        if ( (*(_DWORD *)(v5 + 84) & 7) == 0 )
        {
          v23 = *(_QWORD *)(v5 + 112);
          if ( v23 )
          {
            if ( (*(_BYTE *)(v23 + 42) & 4) != 0 )
            {
              v85 = 0;
              v29 = *v16;
              v101[0] = *(_QWORD *)(*v16 + 368);
              *(_QWORD *)(v29 + 368) = v101;
              v101[1] = v23;
              ++*(_DWORD *)(v23 + 8);
              v30 = *(unsigned int *)(v5 + 104);
              v31 = 0x1C0000000uLL;
              if ( (unsigned int)v30 < 0x400
                && ((MessageTable[v30] & 0x200) != 0 || (_DWORD)v30 == 537 && (*(_DWORD *)(v5 + 88) & 0x8000LL) != 0) )
              {
                *(_DWORD *)(v5 + 84) |= 0x20u;
                if ( v10 )
                {
                  v85 = 1;
                  v56 = *(void **)v10;
                  PushW32ThreadLock(*(_QWORD *)v10, v102, (__int64)DereferenceKernelStack);
                  ObfReferenceObject(v56);
                  PsReferenceKernelStack(v56);
                  v17 = v89;
                  v31 = 0x1C0000000uLL;
                }
              }
              v32 = *(_QWORD *)(v5 + 112);
              v33 = *(_QWORD *)(v32 + 144);
              if ( v33 >= 7 )
                v90 = 0LL;
              else
                v90 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v33))(
                        v32,
                        *(unsigned int *)(v5 + 104),
                        *(_QWORD *)(v5 + 88),
                        *(_QWORD *)(v5 + 96));
              if ( v85 )
                PopAndFreeW32ThreadLock(v102);
              ThreadUnlock1(v32, v31);
            }
            else
            {
              xxxSendMessageToClient(
                (struct tagWND *)v23,
                *(_DWORD *)(v5 + 104),
                *(_QWORD *)(v5 + 88),
                *(_QWORD *)(v5 + 96),
                (struct tagSMS *)v5,
                1,
                &v90);
            }
            v19 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL));
            if ( ((*(_WORD *)(a1 + 600) | *(_WORD *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x2000) != 0
              && (*(_BYTE *)(v5 + 84) & 4) == 0 )
            {
              v83 = *(__int64 **)(v5 + 112);
              if ( v83 )
                v95 = *v83;
              else
                v95 = 0LL;
              LODWORD(v94) = *(_DWORD *)(v5 + 104);
              v93 = *(_QWORD *)(v5 + 88);
              v92 = *(_QWORD *)(v5 + 96);
              v91 = v90;
              v96 = v5;
              xxxCallHook(0LL, 1LL, &v91);
            }
            *(_DWORD *)(gptiCurrent + 1244LL) = v17;
          }
        }
        goto LABEL_32;
      }
      v20 = *(_QWORD **)(v5 + 112);
      if ( v20 )
        *(_QWORD *)&v102[24] = *v20;
      else
        *(_QWORD *)&v102[24] = 0LL;
      v21 = *(_DWORD *)(v5 + 104);
      *(_DWORD *)&v102[16] = v21;
      *(_QWORD *)&v102[8] = *(_QWORD *)(v5 + 88);
      *(_QWORD *)v102 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)&v102[32] = v5;
      if ( (unsigned int)(v21 - 577) > 3 && ((unsigned int)(v21 - 581) > 0x12 || v21 == 589) )
      {
        if ( v21 == 528 && *(_WORD *)&v102[8] == 582 )
          goto LABEL_147;
      }
      else if ( v21 != 595 )
      {
LABEL_147:
        xxxPointerCallHook(0, 1, (__int64)v102, 4u, 0);
LABEL_25:
        v16 = (__int64 *)gptiCurrent;
        goto LABEL_26;
      }
      Valid = *(_QWORD *)(gptiCurrent + 824LL);
      if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 72LL)) != 0)
        && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
      {
        Valid = PhkNextValid(Valid, v19, gptiCurrent, v9);
      }
      xxxCallHook2(Valid, 0, 1LL, (int *)v102, 0LL);
      goto LABEL_25;
    }
    memset(v102, 0, sizeof(v102));
    v35 = *(_QWORD **)(v5 + 96);
    v88 = v35;
    v36 = (_OWORD *)v35[2];
    v87 = v36;
    v37 = *(_DWORD *)(*v35 + 48LL);
    v89 = v37;
    v38 = *(_QWORD *)(a1 + 1208);
    v97 = v38;
    if ( v37 == 13 )
    {
      if ( v36 )
      {
        *(_OWORD *)v102 = *v36;
        *(_QWORD *)&v102[16] = *((_QWORD *)v36 + 2);
        if ( *((_DWORD *)v35 + 6) != -1 )
        {
          v39 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 832LL);
          v40 = v35[3];
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v40 <= (unsigned int)v39 )
            {
              if ( (_DWORD)v40 != (_DWORD)v39
                || (v41 = HIDWORD(v40), v42 = HIDWORD(v39), (_DWORD)v41 != (_DWORD)v42)
                && (_DWORD)v42 != -1
                && (_DWORD)v41 != -1 )
              {
                *(_DWORD *)&v102[8] |= 2u;
              }
            }
          }
        }
      }
LABEL_65:
      v88 = *(_QWORD **)(a1 + 1192);
      v86 = *(_QWORD *)(a1 + 1200);
      *(_QWORD *)(a1 + 1192) = v35[3];
      *(_QWORD *)(a1 + 1200) = v35[4];
      *(_QWORD *)(a1 + 1208) = v102;
    }
    else
    {
      switch ( v37 )
      {
        case 0u:
        case 1u:
          if ( !v36 )
            goto LABEL_136;
          *(_OWORD *)v102 = *v36;
          *(_QWORD *)&v102[16] = *((_QWORD *)v36 + 2);
          if ( (unsigned int)(_mm_cvtsi128_si32(*(__m128i *)v102) - 512) > 0xE )
            break;
          v58 = *(_QWORD *)(v5 + 32);
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
          if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v58 + 376)) )
          {
            v86 = *(_QWORD *)&v102[4];
            MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 376LL));
            LogicalToPhysicalDPIPoint(&v86, &v86, MonitorFlags, 0LL);
            v62 = PsGetCurrentProcessWin32Process(v61);
            v63 = GetMonitorFlags(v62);
            PhysicalToLogicalDPIPoint(&v86, &v86, v63, 0LL);
            *(_QWORD *)&v102[4] = v86;
          }
LABEL_126:
          v36 = v87;
          v35 = v88;
          break;
        case 2u:
        case 0xAu:
          v36 = 0LL;
          v87 = 0LL;
          goto LABEL_136;
        case 7u:
          if ( !v36 )
            goto LABEL_136;
          *(_OWORD *)v102 = *v36;
          *(_OWORD *)&v102[16] = v36[1];
          *(_QWORD *)&v102[32] = *((_QWORD *)v36 + 4);
          v64 = *(_QWORD *)(v5 + 32);
          v65 = PsGetCurrentProcessWin32Process(v38);
          if ( (unsigned int)SameCoordinateSpace(v65, *(_QWORD *)(v64 + 376)) )
            goto LABEL_126;
          v66 = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 376LL));
          LogicalToPhysicalDPIPoint(v102, v102, v66, 0LL);
          v68 = PsGetCurrentProcessWin32Process(v67);
          v69 = GetMonitorFlags(v68);
          PhysicalToLogicalDPIPoint(v102, v102, v69, 0LL);
          v36 = v87;
          v35 = v88;
          break;
        case 0xEu:
          if ( v36 )
          {
            *(_OWORD *)v102 = *v36;
            *(_OWORD *)&v102[16] = v36[1];
            if ( *((_DWORD *)v35 + 6) != -1 )
            {
              v52 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 832LL);
              v53 = v35[3];
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v53 <= (unsigned int)v52 )
                {
                  if ( (_DWORD)v53 != (_DWORD)v52
                    || (v54 = HIDWORD(v53), v55 = HIDWORD(v52), (_DWORD)v54 != (_DWORD)v55)
                    && (_DWORD)v55 != -1
                    && (_DWORD)v54 != -1 )
                  {
                    *(_DWORD *)&v102[12] |= 2u;
                  }
                }
              }
            }
          }
          goto LABEL_65;
        default:
          UserSetLastError(87);
          v36 = 0LL;
          v87 = 0LL;
          v35 = v88;
          break;
      }
    }
    if ( v36 )
      v43 = (int *)v102;
    else
LABEL_136:
      v43 = (int *)v35[2];
    v90 = xxxCallHook2(*v35, *((_DWORD *)v35 + 2), *(_QWORD *)(v5 + 88), v43, (__int64)v98);
    v44 = v89;
    if ( v89 - 13 <= 1 )
    {
      *(_QWORD *)(a1 + 1192) = v88;
      *(_QWORD *)(a1 + 1200) = v86;
      *(_QWORD *)(a1 + 1208) = v97;
    }
    if ( (*(_DWORD *)(v5 + 84) & 5) != 0 || !v36 )
      goto LABEL_32;
    if ( (_DWORD)v44 != 13 )
    {
      if ( (int)v44 < 0 )
      {
LABEL_32:
        v24 = *(unsigned int *)(v5 + 84);
        if ( (*(_DWORD *)(v5 + 84) & 0x101) == 0x100 )
        {
          v24 = (unsigned int)v24 | 1;
          *(_DWORD *)(v5 + 84) = v24;
          if ( (v24 & 4) == 0 )
          {
            LODWORD(v91) = 33;
            if ( (v24 & 0x400) != 0 )
              LODWORD(v91) = 289;
            v92 = *(_QWORD *)(v5 + 48);
            v93 = *(_QWORD *)(v5 + 56);
            v94 = v90;
            xxxInterSendMsgEx(
              *(_QWORD *)(v5 + 112),
              *(_DWORD *)(v5 + 104),
              0,
              0,
              0LL,
              *(_QWORD *)(v5 + 64),
              (__int64)&v91,
              1,
              v24 & 0x10000);
          }
        }
        if ( !v10 )
          ThreadUnlock1(v24, v19);
        *(_QWORD *)(a1 + 464) = v15;
        v25 = *(_DWORD **)(a1 + 400);
        if ( v15 )
          *v25 |= 2u;
        else
          *v25 &= ~2u;
        v26 = *(_DWORD **)(a1 + 400);
        if ( v14 )
          *v26 |= 8u;
        else
          *v26 &= ~8u;
        goto LABEL_39;
      }
      if ( (int)v44 > 1 )
      {
        if ( (_DWORD)v44 == 7 )
        {
          v70 = *(_QWORD *)(v5 + 32);
          v71 = PsGetCurrentProcessWin32Process(v44);
          if ( !(unsigned int)SameCoordinateSpace(v71, *(_QWORD *)(v70 + 376)) )
          {
            v73 = PsGetCurrentProcessWin32Process(v72);
            v74 = GetMonitorFlags(v73);
            LogicalToPhysicalDPIPoint(v102, v102, v74, 0LL);
            v75 = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 376LL));
            PhysicalToLogicalDPIPoint(v102, v102, v75, 0LL);
          }
          v76 = v87;
          *v87 = *(_OWORD *)v102;
          v76[1] = *(_OWORD *)&v102[16];
          *((_QWORD *)v76 + 4) = *(_QWORD *)&v102[32];
        }
        else if ( (_DWORD)v44 == 14 )
        {
          *v36 = *(_OWORD *)v102;
          v36[1] = *(_OWORD *)&v102[16];
        }
        goto LABEL_32;
      }
      if ( (unsigned int)(*(_DWORD *)v102 - 512) <= 0xE )
      {
        v77 = *(_QWORD *)(v5 + 32);
        v78 = PsGetCurrentProcessWin32Process(v44);
        if ( !(unsigned int)SameCoordinateSpace(v78, *(_QWORD *)(v77 + 376)) )
        {
          v86 = *(_QWORD *)&v102[4];
          v80 = PsGetCurrentProcessWin32Process(v79);
          v81 = GetMonitorFlags(v80);
          LogicalToPhysicalDPIPoint(&v86, &v86, v81, 0LL);
          v82 = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 376LL));
          PhysicalToLogicalDPIPoint(&v86, &v86, v82, 0LL);
          *(_QWORD *)&v102[4] = v86;
        }
        v36 = v87;
      }
    }
    *v36 = *(_OWORD *)v102;
    *((_QWORD *)v36 + 2) = *(_QWORD *)&v102[16];
    goto LABEL_32;
  }
LABEL_39:
  LODWORD(v27) = EtwTraceEndRetrieveSendMessage(v5);
  v28 = *(_DWORD *)(v5 + 84) & 0xFFFFBFFF;
  *(_DWORD *)(v5 + 84) = v28;
  if ( (v28 & 8) != 0 )
  {
    LODWORD(v27) = UnlinkSendListSms(v5);
  }
  else if ( (v28 & 1) == 0 )
  {
    LODWORD(v27) = v90;
    *(_QWORD *)(v5 + 72) = v90;
    *(_DWORD *)(v5 + 84) = v28 | 1;
    if ( v10 )
    {
      LODWORD(v27) = *(_DWORD *)(v10 + 440);
      if ( (v27 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v10 + 400) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v10 + 400) + 4LL) |= 0x200u;
        v27 = *(_QWORD *)(v10 + 400);
        if ( (*(_WORD *)(v27 + 10) & 0x200) != 0 )
          LODWORD(v27) = KeSetEvent(*(PRKEVENT *)(v10 + 648), 2, 0);
      }
    }
  }
  return v27;
}
