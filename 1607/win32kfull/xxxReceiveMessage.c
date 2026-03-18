/*
 * XREFs of xxxReceiveMessage @ 0x1C007F630
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0082AD0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00E0460 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0104BCC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxUserYield @ 0x1C01E09AC (xxxUserYield.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     UnlinkSendListSms @ 0x1C0058070 (UnlinkSendListSms.c)
 *     RemoveSMSReceiveList @ 0x1C007F5F4 (RemoveSMSReceiveList.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00851A0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

int __fastcall xxxReceiveMessage(__int64 a1)
{
  __int64 v2; // r12
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rax
  int v8; // eax
  _DWORD *v9; // rax
  int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r10
  ULONG_PTR v21; // r9
  unsigned __int64 v22; // rdx
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  char v27; // di
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdi
  int v36; // eax
  ULONG_PTR v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  _BYTE *v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rdx
  _DWORD *v46; // rcx
  int v47; // esi
  unsigned int v48; // r10d
  __int64 v49; // rdx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  int v52; // edi
  int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  void *v58; // rdi
  __int64 *v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v66; // rcx
  unsigned int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rax
  unsigned int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rax
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 *v78; // rax
  __int64 v80; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v81; // [rsp+58h] [rbp-F0h]
  unsigned int v82; // [rsp+60h] [rbp-E8h]
  __int64 v83; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v84; // [rsp+70h] [rbp-D8h]
  ULONG_PTR BugCheckParameter3; // [rsp+78h] [rbp-D0h]
  __int64 v86; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+88h] [rbp-C0h]
  __int64 v88; // [rsp+90h] [rbp-B8h]
  __int64 v89; // [rsp+98h] [rbp-B0h]
  __int64 v90; // [rsp+A0h] [rbp-A8h]
  __int64 v91; // [rsp+A8h] [rbp-A0h]
  char v92[4]; // [rsp+B0h] [rbp-98h] BYREF
  int v93; // [rsp+B4h] [rbp-94h]
  __int64 v94; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-88h]
  _QWORD v96[3]; // [rsp+D8h] [rbp-70h] BYREF
  _BYTE v97[40]; // [rsp+F0h] [rbp-58h] BYREF

  v81 = a1;
  v2 = 0LL;
  v83 = 0LL;
  v3 = (_QWORD *)(a1 + 472);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v4 == a1 + 472 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x40u;
    v25 = *(_QWORD *)(a1 + 400);
    *(_WORD *)(v25 + 4) &= ~0x40u;
    return v25;
  }
  v5 = v4 - 16;
  v84 = v5;
  RemoveSMSReceiveList(v5, a1);
  EtwTraceBeginRetrieveSendMessage(v5);
  *(_DWORD *)(v5 + 84) |= 0x4010u;
  if ( (_QWORD *)*v3 == v3 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 6LL) &= ~0x40u;
    *(_WORD *)(*(_QWORD *)(a1 + 400) + 4LL) &= ~0x40u;
  }
  v6 = *(_QWORD *)(v5 + 32);
  v80 = v6;
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 432);
    if ( (*(_DWORD *)(v6 + 440) & 0x100) != 0 )
      *v7 |= 0x1000uLL;
    else
      *v7 &= ~0x1000uLL;
  }
  v8 = *(_DWORD *)(v5 + 84);
  if ( (v8 & 0x200) != 0 )
  {
    if ( !v6 )
    {
      v45 = *(_QWORD *)(v5 + 112);
      v94 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v94;
      v95 = v45;
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
          *(_QWORD *)(v5 + 112),
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
      v59 = *(__int64 **)(v5 + 112);
      if ( v59 )
        v2 = *v59;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v5 + 48))(
        v2,
        *(unsigned int *)(v5 + 104),
        *(_QWORD *)(v5 + 56),
        *(_QWORD *)(v5 + 72));
    }
    if ( !v6 )
      ThreadUnlock1(v50, v49);
    goto LABEL_40;
  }
  if ( (v8 & 7) == 0 )
  {
    v9 = *(_DWORD **)(a1 + 400);
    v10 = *v9 & 8;
    v11 = *(_QWORD *)(a1 + 464);
    *(_QWORD *)(a1 + 464) = v5;
    *v9 |= 2u;
    **(_DWORD **)(a1 + 400) |= 8u;
    v12 = gptiCurrent;
    if ( !v6 )
    {
      v33 = *(_QWORD *)(v5 + 112);
      v94 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v94;
      v95 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
    }
    if ( *(_DWORD *)(v5 + 104) != 788 )
    {
      v13 = gptiCurrent;
      v14 = *(_DWORD *)(gptiCurrent + 1268LL);
      v82 = v14;
      *(_DWORD *)(gptiCurrent + 1268LL) = *(_DWORD *)(v5 + 128);
      v15 = *(_QWORD *)(a1 + 416);
      v16 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(v15 + 24));
      if ( ((*(_BYTE *)(a1 + 600) | *(_BYTE *)(v15 + 24)) & 0x20) == 0 )
      {
LABEL_24:
        if ( (*(_DWORD *)(v5 + 84) & 7) == 0 )
        {
          v20 = *(_QWORD *)(v5 + 112);
          if ( v20 )
          {
            v21 = 0LL;
            BugCheckParameter3 = 0LL;
            v22 = (unsigned __int16)*(_QWORD *)v20;
            v93 = (unsigned __int16)*(_QWORD *)v20;
            if ( v22 >= *(_QWORD *)(gpsi + 8LL)
              || (v21 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v22 * *((_DWORD *)&gSharedInfo + 4)),
                  *(_QWORD *)v21 != v20)
              || *(_BYTE *)(v21 + 16) != 1 )
            {
              KeBugCheckEx(0x197u, 1uLL, *(_QWORD *)(v5 + 112), v21, 1uLL);
            }
            if ( (*(_BYTE *)(v20 + 42) & 4) != 0 )
            {
              v27 = 0;
              v28 = *(_QWORD *)v12;
              v96[0] = *(_QWORD *)(*(_QWORD *)v12 + 368LL);
              *(_QWORD *)(v28 + 368) = v96;
              v96[1] = v20;
              ++*(_DWORD *)(v20 + 8);
              v29 = *(unsigned int *)(v5 + 104);
              v30 = 0x1C0000000uLL;
              if ( (unsigned int)v29 < 0x400 )
              {
                v12 = 512LL;
                if ( (MessageTable[v29] & 0x200) != 0 || (_DWORD)v29 == 537 && (*(_DWORD *)(v5 + 88) & 0x8000LL) != 0 )
                {
                  *(_DWORD *)(v5 + 84) |= 0x20u;
                  if ( v6 )
                  {
                    v58 = *(void **)v6;
                    PushW32ThreadLock(*(_QWORD *)v6, v97, DereferenceKernelStack);
                    ObfReferenceObject(v58);
                    PsReferenceKernelStack(v58);
                    v30 = 0x1C0000000uLL;
                    v27 = 1;
                  }
                }
              }
              v31 = *(_QWORD *)(v5 + 112);
              v32 = *(_QWORD *)(v31 + 144);
              if ( v32 >= 7 )
                v83 = 0LL;
              else
                v83 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))*(&gServerHandlers + v32))(
                        v31,
                        *(unsigned int *)(v5 + 104),
                        *(_QWORD *)(v5 + 88),
                        *(_QWORD *)(v5 + 96));
              if ( v27 )
                PopAndFreeW32ThreadLock((__int64)v97, v30, v12, v21);
              ThreadUnlock1(v31, v30);
              v14 = v82;
            }
            else
            {
              xxxSendMessageToClient(
                (struct tagWND *)v20,
                *(_DWORD *)(v5 + 104),
                *(_QWORD *)(v5 + 88),
                *(_QWORD *)(v5 + 96),
                (struct tagSMS *)v5,
                1,
                &v83);
            }
            v16 = (unsigned int)(*(_DWORD *)(a1 + 600) | *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL));
            if ( ((*(_WORD *)(a1 + 600) | *(_WORD *)(*(_QWORD *)(a1 + 416) + 24LL)) & 0x2000) != 0
              && (*(_BYTE *)(v5 + 84) & 4) == 0 )
            {
              v78 = *(__int64 **)(v5 + 112);
              if ( v78 )
                v90 = *v78;
              else
                v90 = 0LL;
              LODWORD(v89) = *(_DWORD *)(v5 + 104);
              v88 = *(_QWORD *)(v5 + 88);
              v87 = *(_QWORD *)(v5 + 96);
              v86 = v83;
              v91 = v5;
              xxxCallHook(0LL, 1LL, &v86, 12LL);
            }
            v13 = gptiCurrent;
            *(_DWORD *)(gptiCurrent + 1268LL) = v14;
          }
        }
        goto LABEL_33;
      }
      v17 = *(_QWORD **)(v5 + 112);
      if ( v17 )
        *(_QWORD *)&v97[24] = *v17;
      else
        *(_QWORD *)&v97[24] = 0LL;
      v18 = *(_DWORD *)(v5 + 104);
      *(_DWORD *)&v97[16] = v18;
      *(_QWORD *)&v97[8] = *(_QWORD *)(v5 + 88);
      *(_QWORD *)v97 = *(_QWORD *)(v5 + 96);
      *(_QWORD *)&v97[32] = v5;
      if ( (unsigned int)(v18 - 577) > 3 && ((unsigned int)(v18 - 581) > 0x12 || v18 == 589) )
      {
        if ( v18 == 528 && *(_WORD *)&v97[8] == 582 )
          goto LABEL_154;
      }
      else if ( v18 != 595 )
      {
LABEL_154:
        xxxPointerCallHook(0, 1, (__int64)v97, 4u, 0);
LABEL_23:
        v12 = gptiCurrent;
        goto LABEL_24;
      }
      v19 = *(_QWORD *)(gptiCurrent + 832LL);
      if ( (v19 || (v19 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 72LL)) != 0)
        && (*(_DWORD *)(v19 + 64) & 0x80u) != 0 )
      {
        LODWORD(v19) = PhkNextValid(v19, v16, gptiCurrent);
      }
      xxxCallHook2(v19, 0, 1, (unsigned int)v97, 0LL, 0);
      goto LABEL_23;
    }
    memset(v97, 0, sizeof(v97));
    v35 = *(_QWORD *)(v5 + 96);
    v81 = *(_QWORD *)(v35 + 16);
    v36 = *(_DWORD *)(*(_QWORD *)v35 + 48LL);
    v82 = v36;
    v37 = *(_QWORD *)(a1 + 1232);
    BugCheckParameter3 = v37;
    if ( v36 == 13 )
    {
      if ( v81 )
      {
        *(_OWORD *)v97 = *(_OWORD *)v81;
        *(_QWORD *)&v97[16] = *(_QWORD *)(v81 + 16);
        if ( *(_DWORD *)(v35 + 24) != -1 )
        {
          v38 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 824LL);
          v39 = *(_QWORD *)(v35 + 24);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v39 <= (unsigned int)v38 )
            {
              if ( (_DWORD)v39 != (_DWORD)v38
                || (v40 = HIDWORD(v39), v41 = HIDWORD(v38), (_DWORD)v40 != (_DWORD)v41)
                && (_DWORD)v41 != -1
                && (_DWORD)v40 != -1 )
              {
                *(_DWORD *)&v97[8] |= 2u;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( v36 != 14 )
      {
        if ( v36 >= 0 )
        {
          if ( v36 <= 1 )
          {
            if ( !v81 )
              goto LABEL_144;
            *(_OWORD *)v97 = *(_OWORD *)v81;
            *(_QWORD *)&v97[16] = *(_QWORD *)(v81 + 16);
            if ( (unsigned int)(_mm_cvtsi128_si32(*(__m128i *)v97) - 512) <= 0xE )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37, v34);
              v66 = *(unsigned int *)(v5 + 132);
              if ( (*(_DWORD *)(CurrentProcessWin32Process + 280) & 0xF) != (*(_DWORD *)(v5 + 132) & 0xF) )
              {
                v80 = *(_QWORD *)&v97[4];
                v67 = MonitorFlagsFromDpiAwarenessContext(v66);
                LogicalToPhysicalDPIPoint(&v80, &v80, v67, 0LL);
                v70 = PsGetCurrentProcessWin32Process(v69, v68);
                v71 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v70 + 280));
                PhysicalToLogicalDPIPoint(&v80, &v80, v71);
                *(_QWORD *)&v97[4] = v80;
              }
            }
            goto LABEL_67;
          }
          switch ( v36 )
          {
            case 2:
              goto LABEL_134;
            case 7:
              if ( !v81 )
                goto LABEL_144;
              *(_OWORD *)v97 = *(_OWORD *)v81;
              *(_OWORD *)&v97[16] = *(_OWORD *)(v81 + 16);
              *(_QWORD *)&v97[32] = *(_QWORD *)(v81 + 32);
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37, v34) + 280) & 0xF) != (*(_DWORD *)(v5 + 132) & 0xF) )
              {
                v60 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v5 + 132));
                LogicalToPhysicalDPIPoint(v97, v97, v60, 0LL);
                v63 = PsGetCurrentProcessWin32Process(v62, v61);
                v64 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v63 + 280));
                PhysicalToLogicalDPIPoint(v97, v97, v64);
              }
              goto LABEL_67;
            case 10:
LABEL_134:
              v81 = 0LL;
              goto LABEL_144;
          }
        }
        UserSetLastError(87LL);
        v42 = 0LL;
        v81 = 0LL;
LABEL_68:
        if ( v42 )
        {
          v43 = v97;
          goto LABEL_70;
        }
LABEL_144:
        v43 = *(_BYTE **)(v35 + 16);
LABEL_70:
        v83 = xxxCallHook2(*(_QWORD *)v35, *(_DWORD *)(v35 + 8), *(_QWORD *)(v5 + 88), (_DWORD)v43, (__int64)v92, 0);
        v13 = v82;
        if ( v82 - 13 <= 1 )
        {
          *(_QWORD *)(a1 + 1216) = v80;
          *(_QWORD *)(a1 + 1224) = v84;
          *(_QWORD *)(a1 + 1232) = BugCheckParameter3;
        }
        if ( (*(_DWORD *)(v5 + 84) & 5) != 0 )
          goto LABEL_33;
        v44 = v81;
        if ( !v81 )
          goto LABEL_33;
        if ( (_DWORD)v13 != 13 )
        {
          if ( (int)v13 < 0 )
          {
LABEL_33:
            if ( (*(_DWORD *)(v5 + 84) & 0x101) == 0x100 )
            {
              v52 = *(_DWORD *)(v5 + 84) | 1;
              *(_DWORD *)(v5 + 84) = v52;
              if ( (v52 & 4) == 0 )
              {
                LODWORD(v86) = 33;
                if ( (v52 & 0x400) != 0 )
                  LODWORD(v86) = 289;
                v87 = *(_QWORD *)(v5 + 48);
                v88 = *(_QWORD *)(v5 + 56);
                v89 = v83;
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v16, v12);
                xxxInterSendMsgEx(
                  *(_QWORD *)(v5 + 112),
                  *(_DWORD *)(v5 + 104),
                  0,
                  0,
                  0LL,
                  CurrentThreadDpiAwarenessContext,
                  *(_QWORD *)(v5 + 64),
                  (__int64)&v86,
                  1,
                  v52 & 0x10000);
              }
            }
            if ( !v6 )
              ThreadUnlock1(v13, v16);
            *(_QWORD *)(a1 + 464) = v11;
            v23 = *(_DWORD **)(a1 + 400);
            if ( v11 )
              *v23 |= 2u;
            else
              *v23 &= ~2u;
            v24 = *(_DWORD **)(a1 + 400);
            if ( v10 )
              *v24 |= 8u;
            else
              *v24 &= ~8u;
            goto LABEL_40;
          }
          if ( (int)v13 > 1 )
          {
            if ( (_DWORD)v13 == 7 )
            {
              v13 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v13, v16) + 280) & 0xF;
              if ( (_DWORD)v13 != (*(_DWORD *)(v5 + 132) & 0xF) )
              {
                v72 = PsGetCurrentProcessWin32Process(v13, v16);
                v73 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v72 + 280));
                LogicalToPhysicalDPIPoint(v97, v97, v73, 0LL);
                v74 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v5 + 132));
                PhysicalToLogicalDPIPoint(v97, v97, v74);
              }
              *(_OWORD *)v44 = *(_OWORD *)v97;
              *(_OWORD *)(v44 + 16) = *(_OWORD *)&v97[16];
              *(_QWORD *)(v44 + 32) = *(_QWORD *)&v97[32];
            }
            else if ( (_DWORD)v13 == 14 )
            {
              *(_OWORD *)v81 = *(_OWORD *)v97;
              *(_OWORD *)(v44 + 16) = *(_OWORD *)&v97[16];
            }
            goto LABEL_33;
          }
          if ( (unsigned int)(*(_DWORD *)v97 - 512) <= 0xE )
          {
            v13 = *(_DWORD *)(PsGetCurrentProcessWin32Process(v13, v16) + 280) & 0xF;
            if ( (_DWORD)v13 != (*(_DWORD *)(v5 + 132) & 0xF) )
            {
              v80 = *(_QWORD *)&v97[4];
              v75 = PsGetCurrentProcessWin32Process(v13, v16);
              v76 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v75 + 280));
              LogicalToPhysicalDPIPoint(&v80, &v80, v76, 0LL);
              v77 = MonitorFlagsFromDpiAwarenessContext(*(unsigned int *)(v5 + 132));
              PhysicalToLogicalDPIPoint(&v80, &v80, v77);
              *(_QWORD *)&v97[4] = v80;
            }
          }
        }
        *(_OWORD *)v44 = *(_OWORD *)v97;
        *(_QWORD *)(v44 + 16) = *(_QWORD *)&v97[16];
        goto LABEL_33;
      }
      if ( v81 )
      {
        *(_OWORD *)v97 = *(_OWORD *)v81;
        *(_OWORD *)&v97[16] = *(_OWORD *)(v81 + 16);
        if ( *(_DWORD *)(v35 + 24) != -1 )
        {
          v54 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 824LL);
          v55 = *(_QWORD *)(v35 + 24);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v55 <= (unsigned int)v54 )
            {
              if ( (_DWORD)v55 != (_DWORD)v54
                || (v56 = HIDWORD(v55), v57 = HIDWORD(v54), (_DWORD)v56 != (_DWORD)v57)
                && (_DWORD)v57 != -1
                && (_DWORD)v56 != -1 )
              {
                *(_DWORD *)&v97[12] |= 2u;
              }
            }
          }
        }
      }
    }
    v80 = *(_QWORD *)(a1 + 1216);
    v84 = *(_QWORD *)(a1 + 1224);
    *(_QWORD *)(a1 + 1216) = *(_QWORD *)(v35 + 24);
    *(_QWORD *)(a1 + 1224) = *(_QWORD *)(v35 + 32);
    *(_QWORD *)(a1 + 1232) = v97;
LABEL_67:
    v42 = v81;
    goto LABEL_68;
  }
LABEL_40:
  LODWORD(v25) = EtwTraceEndRetrieveSendMessage(v5);
  v26 = *(_DWORD *)(v5 + 84) & 0xFFFFBFFF;
  *(_DWORD *)(v5 + 84) = v26;
  if ( (v26 & 8) != 0 )
  {
    LODWORD(v25) = UnlinkSendListSms((__int64 *)v5);
  }
  else if ( (v26 & 1) == 0 )
  {
    LODWORD(v25) = v83;
    *(_QWORD *)(v5 + 72) = v83;
    *(_DWORD *)(v5 + 84) = v26 | 1;
    if ( v6 )
    {
      LODWORD(v25) = *(_DWORD *)(v6 + 440);
      if ( (v25 & 1) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v6 + 400) + 6LL) |= 0x200u;
        *(_WORD *)(*(_QWORD *)(v6 + 400) + 4LL) |= 0x200u;
        v25 = *(_QWORD *)(v6 + 400);
        if ( (*(_WORD *)(v25 + 10) & 0x200) != 0 )
          LODWORD(v25) = KeSetEvent(*(PRKEVENT *)(v6 + 648), 2, 0);
      }
    }
  }
  return v25;
}
