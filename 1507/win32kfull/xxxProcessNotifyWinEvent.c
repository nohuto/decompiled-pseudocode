/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0071500
 * Callers:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C005735C (xxxLoadHmodIndex.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     xxxClientCallWinEventProc @ 0x1C0071D50 (xxxClientCallWinEventProc.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     DestroyNotify @ 0x1C00D9A00 (DestroyNotify.c)
 *     ProcessSuspendedEventMessage @ 0x1C00E7B3C (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
LARGE_INTEGER __fastcall xxxProcessNotifyWinEvent(LARGE_INTEGER a1)
{
  __int64 *v1; // r8
  LARGE_INTEGER v2; // rsi
  LARGE_INTEGER *v3; // rdi
  int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  _QWORD *QuadPart; // rcx
  LARGE_INTEGER v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER v13; // r12
  __int64 v14; // r14
  int v15; // r15d
  _DWORD *v16; // rcx
  LARGE_INTEGER v17; // rbx
  __int64 v19; // rcx
  LARGE_INTEGER v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // eax
  __int64 CurrentProcess; // rax
  LARGE_INTEGER v25; // rdi
  struct tagNOTIFY **v26; // rax
  struct tagNOTIFY ***v27; // rcx
  struct tagNOTIFY **v28; // rbx
  struct tagNOTIFY **v29; // rax
  unsigned __int64 v30; // rbx
  LARGE_INTEGER v31; // rbx
  DWORD LowPart; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  HANDLE ThreadId; // rax
  int v38; // ecx
  struct tagNOTIFY **v39; // rax
  struct tagNOTIFY ***v40; // rcx
  LARGE_INTEGER *v41; // rax
  LARGE_INTEGER *v42; // rdi
  LARGE_INTEGER **v43; // rax
  __int64 v44; // r8
  __int64 v45; // r8
  LONGLONG v46; // rax
  __int64 v47; // rcx
  int v48; // edx
  struct tagNOTIFY **v49; // rbx
  struct tagNOTIFY **v50; // rax
  __int64 v51; // rcx
  __int128 v52; // [rsp+70h] [rbp-78h]
  _QWORD v53[3]; // [rsp+80h] [rbp-68h] BYREF
  __int128 SystemInformation; // [rsp+98h] [rbp-50h] BYREF
  int v55; // [rsp+A8h] [rbp-40h]
  int v56; // [rsp+F4h] [rbp+Ch]
  int ProcessInformation; // [rsp+F8h] [rbp+10h] BYREF
  char v58; // [rsp+FCh] [rbp+14h]

  v1 = (__int64 *)gptiCurrent;
  v2 = a1;
  v3 = *(LARGE_INTEGER **)(a1.QuadPart + 8);
  v4 = 0;
  if ( (*(_DWORD *)(a1.QuadPart + 48) & 0xC) == 4 )
    goto LABEL_18;
  a1.QuadPart = *(unsigned int *)(gptiCurrent + 448LL);
  if ( (a1.LowPart & 0xD) != 0 )
    goto LABEL_18;
  v5 = gbEnforceUIPI;
  if ( !gbEnforceUIPI )
  {
    v6 = *(_QWORD *)(gptiCurrent + 384LL);
    v7 = *(_QWORD *)(v3[2].QuadPart + 384);
    if ( (*(_DWORD *)(v7 + 740) != *(_DWORD *)(v6 + 740) || *(_DWORD *)(v7 + 744) != *(_DWORD *)(v6 + 744))
      && (a1.LowPart & 0x400000) == 0 )
    {
      goto LABEL_18;
    }
  }
  QuadPart = (_QWORD *)v3[2].QuadPart;
  if ( QuadPart[48] != *(_QWORD *)(gptiCurrent + 384LL) )
  {
    if ( (unsigned __int8)IsRestricted(*QuadPart) )
      goto LABEL_18;
    v1 = (__int64 *)gptiCurrent;
    v5 = gbEnforceUIPI;
  }
  v9 = v3[2];
  a1.QuadPart = (unsigned int)(*(_DWORD *)(gptiCurrent + 448LL) ^ *(_DWORD *)(v9.QuadPart + 448));
  if ( ((*(_WORD *)(gptiCurrent + 448LL) ^ *(_WORD *)(v9.QuadPart + 448)) & 0x100) != 0 )
    goto LABEL_18;
  a1 = *(LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL);
  v10 = *(_QWORD *)(*(_QWORD *)(v9.QuadPart + 384) + 832LL);
  if ( *(_DWORD *)v5 )
  {
    if ( (unsigned int)v10 <= a1.LowPart )
    {
      if ( (_DWORD)v10 != a1.LowPart
        || (v11 = HIDWORD(v10), a1.QuadPart = HIDWORD(a1.QuadPart), (_DWORD)v11 != a1.LowPart)
        && (_DWORD)v11 != -1
        && a1.LowPart != -1 )
      {
        v4 = 1;
        goto LABEL_18;
      }
    }
  }
  if ( !v3[7].LowPart || !v3[6].QuadPart )
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v9.QuadPart + 384))
      || (v5 = *(_QWORD *)(v3[2].QuadPart + 384), *(int *)(v5 + 12) < 0)
      || (v16 = *(_DWORD **)(gptiCurrent + 384LL), (_DWORD *)v5 == v16)
      || (*(_DWORD *)(v5 + 776) & 0x100) != 0
      || !(unsigned int)IsImmersiveAppRestricted(v16)
      && (ProcessInformation = 6,
          ZwQueryInformationProcess(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            ProcessCookie|ProcessUserModeIOPL,
            &ProcessInformation,
            8u,
            0LL) >= 0)
      && (v58 & 1) == 0 )
    {
      v1 = (__int64 *)gptiCurrent;
      goto LABEL_35;
    }
LABEL_18:
    v12 = v3[2];
    v13 = v3[3];
    v14 = *(_QWORD *)(v12.QuadPart + 392);
    if ( v4 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwTraceUIPIEventHookError)(
        (LARGE_INTEGER)v2.QuadPart,
        (LARGE_INTEGER)v12.QuadPart,
        gptiCurrent);
    ++gdwInAtomicOperation;
    if ( gpAtomickCheckStacks )
    {
      a1.QuadPart = 0LL;
      v15 = ++gdwAtomicCheckSerial;
      v12.QuadPart = gdwAtomicCheckLogSize;
      if ( gdwAtomicCheckLogSize )
      {
        while ( *(_DWORD *)(((unsigned __int64)a1.LowPart << 6) + gpAtomickCheckStacks) )
        {
          a1.QuadPart = a1.LowPart + 1;
          if ( a1.LowPart >= gdwAtomicCheckLogSize )
            goto LABEL_65;
        }
        v30 = (unsigned __int64)a1.LowPart << 6;
        *(_DWORD *)(v30 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
        *(_DWORD *)(v30 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
        *(_DWORD *)(v30 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        RtlWalkFrameChain((PVOID *)(v30 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
      }
    }
    else
    {
      v15 = v56;
    }
LABEL_65:
    *(_DWORD *)(v2.QuadPart + 48) |= 0xCu;
    if ( v14 )
    {
      v31 = v3[2];
      if ( v31.QuadPart != gptiRit )
      {
        LowPart = v3[5].LowPart;
        if ( (LowPart & 1) == 0 )
        {
          if ( (LowPart & 0x10) == 0
            || (a1.QuadPart = (unsigned int)(*(_DWORD *)(gptiCurrent + 448LL) ^ *(_DWORD *)(v31.QuadPart + 448)),
                ((*(_WORD *)(gptiCurrent + 448LL) ^ *(_WORD *)(v31.QuadPart + 448)) & 0x100) == 0) )
          {
            if ( !v31.QuadPart )
              goto LABEL_80;
            if ( (*(_DWORD *)(v31.QuadPart + 448) & 1) == 0 )
            {
              v33 = *(_DWORD *)(v31.QuadPart + 1080);
              if ( (v33 & 0x2000) != 0
                && (v33 & 0x4000) == 0
                && (((__int64 (__fastcall *)(_QWORD, _QWORD))PsGetCurrentProcess)(
                      (LARGE_INTEGER)a1.QuadPart,
                      (LARGE_INTEGER)v12.QuadPart) == gpepCSRSS
                 || (unsigned int)IsDwmInputThread(gpepCSRSS, v34, v35, v36)) )
              {
                *(_QWORD *)&v52 = PsGetThreadProcessId(*(PETHREAD *)v31.QuadPart);
                ThreadId = PsGetThreadId(*(PETHREAD *)v31.QuadPart);
                v55 = 13;
                *((_QWORD *)&v52 + 1) = ThreadId;
                SystemInformation = v52;
                if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
                  *(_DWORD *)(v31.QuadPart + 1080) |= 0x4000u;
              }
              if ( (*(_DWORD *)(v31.QuadPart + 1080) & 0x20) == 0
                || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ProcessSuspendedEventMessage)(
                                   (LARGE_INTEGER)v31.QuadPart,
                                   12LL,
                                   0LL) )
              {
LABEL_80:
                if ( *(_DWORD *)(v14 + 16) < gUserPostMessageLimit )
                {
                  v41 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                  v42 = v41;
                  if ( v41 )
                  {
                    memset(v41, 0, 0x90uLL);
                    if ( *(_DWORD *)(v14 + 20) == 2 )
                      v42[11].HighPart |= 8u;
                    else
                      v42[11].HighPart |= 4u;
                    v43 = *(LARGE_INTEGER ***)(v14 + 8);
                    if ( v43 )
                    {
                      *v43 = v42;
                      v42[1] = *(LARGE_INTEGER *)(v14 + 8);
                    }
                    else
                    {
                      *(_QWORD *)v14 = v42;
                    }
                    ++*(_DWORD *)(v14 + 16);
                    *(_QWORD *)(v14 + 8) = v42;
                    v44 = *(_QWORD *)(v14 + 80);
                    if ( v44 )
                      v45 = *(_QWORD *)(v44 + 16);
                    else
                      v45 = *(_QWORD *)(v14 + 56);
                    v46 = *(_QWORD *)(gpsi + 3976LL);
                    if ( v45 )
                    {
                      v47 = *(_QWORD *)(v45 + 416);
                      if ( v47 )
                      {
                        if ( (*(_DWORD *)(*(_QWORD *)(v47 + 8) + 260LL) & 1) != 0 )
                        {
                          v48 = *(_DWORD *)(*(_QWORD *)(v45 + 384) + 776LL);
                          if ( (v48 & 0x2000) != 0 )
                          {
                            v46 = *(_QWORD *)(gpsi + 3960LL);
                          }
                          else if ( (v48 & 0x6000) == 0 )
                          {
                            v46 = *(_QWORD *)(gpsi + 3952LL);
                          }
                        }
                      }
                    }
                    StoreQMessage(v42, 0LL, 0, 0LL, v2, 0, 0, 0xCu, 0LL, 0, 0LL, v46, 0LL, 0LL);
                    v42[12] = v31;
                    if ( v31.QuadPart )
                    {
                      if ( (*(_DWORD *)(v31.QuadPart + 448) & 1) == 0 )
                      {
                        *(_WORD *)(*(_QWORD *)(v31.QuadPart + 408) + 6LL) |= 0x2040u;
                        *(_WORD *)(*(_QWORD *)(v31.QuadPart + 408) + 4LL) |= 0x2040u;
                        if ( (*(_WORD *)(*(_QWORD *)(v31.QuadPart + 408) + 10LL) & 0x2040) != 0 )
                          KeSetEvent(*(PRKEVENT *)(v31.QuadPart + 656), 2, 0);
                      }
                    }
                    else
                    {
                      SetWakeBit(*(_QWORD *)(v14 + 48), 8256LL);
                      SetWakeBit(*(_QWORD *)(v14 + 56), 8256LL);
                    }
LABEL_117:
                    --gdwInAtomicOperation;
                    if ( gpAtomickCheckStacks )
                    {
                      v51 = 0LL;
                      if ( gdwAtomicCheckLogSize )
                      {
                        while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v51 << 6) + gpAtomickCheckStacks) != v15 )
                        {
                          v51 = (unsigned int)(v51 + 1);
                          if ( (unsigned int)v51 >= gdwAtomicCheckLogSize )
                            return v13;
                        }
                        *(_DWORD *)((v51 << 6) + gpAtomickCheckStacks) = 0;
                      }
                    }
                    return v13;
                  }
                  v38 = 8;
                }
                else
                {
                  v38 = 1816;
                }
                UserSetLastError(v38);
              }
            }
          }
        }
      }
    }
    v39 = gpPendingNotifies;
    v40 = &gpPendingNotifies;
    if ( gpPendingNotifies )
    {
      while ( v39 != (struct tagNOTIFY **)v2.QuadPart )
      {
        v40 = (struct tagNOTIFY ***)v39;
        v39 = (struct tagNOTIFY **)*v39;
        if ( !v39 )
          goto LABEL_117;
      }
      v49 = *v40;
      v50 = (struct tagNOTIFY **)**v40;
      *v40 = v50;
      if ( !v50 )
      {
        if ( !gpPendingNotifies )
          v40 = 0LL;
        gpLastPendingNotify = (__int64)v40;
      }
      HMAssignmentUnlock(v49 + 1);
      if ( v49 == (struct tagNOTIFY **)&unk_1C03246E0 )
        dword_1C0322C04 = 0;
      else
        Win32FreePool(v49);
    }
    goto LABEL_117;
  }
LABEL_35:
  if ( (v3[5].LowPart & 1) != 0 )
  {
    v17 = v3[3];
    ((void (__fastcall *)(_QWORD))DestroyNotify)((LARGE_INTEGER)v2.QuadPart);
    return v17;
  }
  v19 = *v1;
  v53[0] = *(_QWORD *)(*v1 + 376);
  *(_QWORD *)(v19 + 376) = v53;
  v53[1] = v3;
  ++v3[1].LowPart;
  *(_QWORD *)(v2.QuadPart + 56) = gptiCurrent;
  if ( (v3[5].LowPart & 8) == 0 )
  {
    v20 = v3[8];
    goto LABEL_49;
  }
  v21 = gSharedInfo[0];
  v20.QuadPart = *(unsigned __int8 *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v3->LowPart
                                    + gSharedInfo[1]
                                    + 17LL);
  if ( (v20.LowPart & 1) == 0 )
  {
    v5 = v3[9].LowPart;
    if ( (_DWORD)v5 != -1 )
    {
      v22 = *(_QWORD *)(*v1 + 384);
      v23 = *(_DWORD *)(v22 + 380);
      if ( !_bittest(&v23, v5) )
      {
        CurrentProcess = PsGetCurrentProcess(v22, v5);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(v3[9].LowPart) )
          goto LABEL_51;
        v1 = (__int64 *)gptiCurrent;
        v21 = gSharedInfo[0];
      }
    }
    v20.QuadPart = *(_DWORD *)(v21 + 16) * (unsigned int)(unsigned __int16)v3->LowPart;
    if ( (*(_BYTE *)(v20.QuadPart + *(_QWORD *)(v21 + 8) + 17) & 1) == 0 )
    {
      if ( v3[9].LowPart == -1 )
      {
        v20 = v3[8];
      }
      else
      {
        v5 = (int)v3[9].LowPart;
        v20.QuadPart = v3[8].QuadPart + *(_QWORD *)(*(_QWORD *)(*v1 + 384) + 8 * v5 + 384);
      }
LABEL_49:
      if ( v20.QuadPart )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))xxxClientCallWinEventProc)(
          (LARGE_INTEGER)v20.QuadPart,
          v3,
          (LARGE_INTEGER)v2.QuadPart);
    }
  }
LABEL_51:
  *(_QWORD *)(v2.QuadPart + 56) = 0LL;
  v25 = v3[3];
  ((void (__fastcall *)(_QWORD, _QWORD))ThreadUnlock1)((LARGE_INTEGER)v20.QuadPart, v5);
  v26 = gpPendingNotifies;
  v27 = &gpPendingNotifies;
  if ( gpPendingNotifies )
  {
    while ( v26 != (struct tagNOTIFY **)v2.QuadPart )
    {
      v27 = (struct tagNOTIFY ***)v26;
      v26 = (struct tagNOTIFY **)*v26;
      if ( !v26 )
        return v25;
    }
    v28 = *v27;
    v29 = (struct tagNOTIFY **)**v27;
    *v27 = v29;
    if ( !v29 )
    {
      if ( !gpPendingNotifies )
        v27 = 0LL;
      gpLastPendingNotify = (__int64)v27;
    }
    HMAssignmentUnlock(v28 + 1);
    if ( v28 == (struct tagNOTIFY **)&unk_1C03246E0 )
    {
      dword_1C0322C04 = 0;
      return v25;
    }
    Win32FreePool(v28);
  }
  return v25;
}
