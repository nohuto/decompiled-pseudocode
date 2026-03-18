/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0060EC0
 * Callers:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     ProcessSuspendedEventMessage @ 0x1C000D7A8 (ProcessSuspendedEventMessage.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     xxxClientCallWinEventProc @ 0x1C0061710 (xxxClientCallWinEventProc.c)
 *     DestroyNotify @ 0x1C00DCAE0 (DestroyNotify.c)
 *     xxxLoadHmodIndex @ 0x1C011ACB4 (xxxLoadHmodIndex.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxProcessNotifyWinEvent(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // ebx
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // r14
  int v16; // r15d
  _DWORD *v17; // rcx
  __int64 v18; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  __int64 CurrentProcess; // rax
  __int64 v26; // rdi
  struct tagNOTIFY **v27; // rax
  struct tagNOTIFY ***v28; // rcx
  struct tagNOTIFY **v29; // rbx
  struct tagNOTIFY **v30; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rbx
  int v33; // eax
  int v34; // eax
  HANDLE ThreadId; // rax
  int v36; // ecx
  struct tagNOTIFY **v37; // rax
  struct tagNOTIFY ***v38; // rcx
  LARGE_INTEGER *v39; // rax
  LARGE_INTEGER *v40; // rdi
  LARGE_INTEGER **v41; // rax
  __int64 v42; // r8
  __int64 v43; // r8
  LONGLONG v44; // rax
  __int64 v45; // rcx
  int v46; // edx
  struct tagNOTIFY **v47; // rbx
  struct tagNOTIFY **v48; // rax
  __int64 v49; // rcx
  __int128 v50; // [rsp+70h] [rbp-78h]
  _QWORD v51[3]; // [rsp+80h] [rbp-68h] BYREF
  __int128 SystemInformation; // [rsp+98h] [rbp-50h] BYREF
  int v53; // [rsp+A8h] [rbp-40h]
  int v54; // [rsp+F4h] [rbp+Ch]
  int ProcessInformation; // [rsp+F8h] [rbp+10h] BYREF
  char v56; // [rsp+FCh] [rbp+14h]

  v4 = (__int64 *)gptiCurrent;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0xC) == 4 )
    goto LABEL_18;
  a1 = *(unsigned int *)(gptiCurrent + 440LL);
  if ( (a1 & 0xD) != 0 )
    goto LABEL_18;
  v8 = gbEnforceUIPI;
  if ( !gbEnforceUIPI )
  {
    v9 = *(_QWORD *)(gptiCurrent + 376LL);
    a4 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL);
    if ( (*(_DWORD *)(a4 + 740) != *(_DWORD *)(v9 + 740) || *(_DWORD *)(a4 + 744) != *(_DWORD *)(v9 + 744))
      && (a1 & 0x400000) == 0 )
    {
      goto LABEL_18;
    }
  }
  v10 = *(_QWORD **)(v6 + 16);
  if ( v10[47] != *(_QWORD *)(gptiCurrent + 376LL) )
  {
    if ( (unsigned __int8)IsRestricted(*v10) )
      goto LABEL_18;
    v4 = (__int64 *)gptiCurrent;
    v8 = gbEnforceUIPI;
  }
  a4 = *(_QWORD *)(v6 + 16);
  a1 = (unsigned int)(*(_DWORD *)(gptiCurrent + 440LL) ^ *(_DWORD *)(a4 + 440));
  if ( ((*(_WORD *)(gptiCurrent + 440LL) ^ *(_WORD *)(a4 + 440)) & 0x100) != 0 )
    goto LABEL_18;
  a1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a4 + 376) + 832LL);
  if ( *(_DWORD *)v8 )
  {
    if ( (unsigned int)v11 <= (unsigned int)a1 )
    {
      if ( (_DWORD)v11 != (_DWORD)a1
        || (v12 = HIDWORD(v11), a1 >>= 32, (_DWORD)v12 != (_DWORD)a1) && (_DWORD)v12 != -1 && (_DWORD)a1 != -1 )
      {
        v7 = 1;
        goto LABEL_18;
      }
    }
  }
  if ( !*(_DWORD *)(v6 + 56) || !*(_QWORD *)(v6 + 48) )
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(a4 + 376))
      || (v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL), *(int *)(v8 + 12) < 0)
      || (v17 = *(_DWORD **)(gptiCurrent + 376LL), (_DWORD *)v8 == v17)
      || (*(_DWORD *)(v8 + 776) & 0x100) != 0
      || !(unsigned int)IsImmersiveAppRestricted(v17)
      && (ProcessInformation = 6,
          ZwQueryInformationProcess(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            ProcessCookie|ProcessUserModeIOPL,
            &ProcessInformation,
            8u,
            0LL) >= 0)
      && (v56 & 1) == 0 )
    {
      v4 = (__int64 *)gptiCurrent;
      goto LABEL_36;
    }
LABEL_18:
    v13 = *(_QWORD *)(v6 + 16);
    v14 = *(_QWORD *)(v6 + 24);
    v15 = *(_QWORD *)(v13 + 384);
    if ( v7 )
      EtwTraceUIPIEventHookError(v5, v13, gptiCurrent);
    ++gdwInAtomicOperation;
    if ( gpAtomickCheckStacks )
    {
      a1 = 0LL;
      v16 = ++gdwAtomicCheckSerial;
      v13 = gdwAtomicCheckLogSize;
      if ( gdwAtomicCheckLogSize )
      {
        v4 = (__int64 *)gpAtomickCheckStacks;
        while ( *(_DWORD *)(((unsigned __int64)(unsigned int)a1 << 6) + gpAtomickCheckStacks) )
        {
          a1 = (unsigned int)(a1 + 1);
          if ( (unsigned int)a1 >= gdwAtomicCheckLogSize )
            goto LABEL_66;
        }
        v31 = (unsigned __int64)(unsigned int)a1 << 6;
        *(_DWORD *)(v31 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
        *(_DWORD *)(v31 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
        *(_DWORD *)(v31 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        RtlWalkFrameChain((PVOID *)(v31 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
      }
    }
    else
    {
      v16 = v54;
    }
LABEL_66:
    *(_DWORD *)(v5 + 48) |= 0xCu;
    if ( v15 )
    {
      v32 = *(_QWORD *)(v6 + 16);
      if ( v32 != gptiRit )
      {
        v33 = *(_DWORD *)(v6 + 40);
        if ( (v33 & 1) == 0 )
        {
          if ( (v33 & 0x10) == 0
            || (a1 = (unsigned int)(*(_DWORD *)(gptiCurrent + 440LL) ^ *(_DWORD *)(v32 + 440)),
                ((*(_WORD *)(gptiCurrent + 440LL) ^ *(_WORD *)(v32 + 440)) & 0x100) == 0) )
          {
            if ( !v32 )
              goto LABEL_81;
            if ( (*(_DWORD *)(v32 + 440) & 1) == 0 )
            {
              v34 = *(_DWORD *)(v32 + 1072);
              if ( (v34 & 0x2000) != 0
                && (v34 & 0x4000) == 0
                && (PsGetCurrentProcess(a1, v13, v4, a4) == gpepCSRSS || (unsigned int)IsDwmInputThread()) )
              {
                *(_QWORD *)&v50 = PsGetThreadProcessId(*(PETHREAD *)v32);
                ThreadId = PsGetThreadId(*(PETHREAD *)v32);
                v53 = 13;
                *((_QWORD *)&v50 + 1) = ThreadId;
                SystemInformation = v50;
                if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
                  *(_DWORD *)(v32 + 1072) |= 0x4000u;
              }
              if ( (*(_DWORD *)(v32 + 1072) & 0x20) == 0
                || (unsigned int)ProcessSuspendedEventMessage(v32, 12, 0LL, 0, 0LL, v5) )
              {
LABEL_81:
                if ( *(_DWORD *)(v15 + 16) < gUserPostMessageLimit )
                {
                  v39 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                  v40 = v39;
                  if ( v39 )
                  {
                    memset(v39, 0, 0x90uLL);
                    if ( *(_DWORD *)(v15 + 20) == 2 )
                      v40[11].HighPart |= 8u;
                    else
                      v40[11].HighPart |= 4u;
                    v41 = *(LARGE_INTEGER ***)(v15 + 8);
                    if ( v41 )
                    {
                      *v41 = v40;
                      v40[1] = *(LARGE_INTEGER *)(v15 + 8);
                    }
                    else
                    {
                      *(_QWORD *)v15 = v40;
                    }
                    ++*(_DWORD *)(v15 + 16);
                    *(_QWORD *)(v15 + 8) = v40;
                    v42 = *(_QWORD *)(v15 + 80);
                    if ( v42 )
                      v43 = *(_QWORD *)(v42 + 16);
                    else
                      v43 = *(_QWORD *)(v15 + 56);
                    v44 = *(_QWORD *)(gpsi + 3976LL);
                    if ( v43 )
                    {
                      v45 = *(_QWORD *)(v43 + 408);
                      if ( v45 )
                      {
                        if ( (*(_DWORD *)(*(_QWORD *)(v45 + 8) + 244LL) & 1) != 0 )
                        {
                          v46 = *(_DWORD *)(*(_QWORD *)(v43 + 376) + 776LL);
                          if ( (v46 & 0x2000) != 0 )
                          {
                            v44 = *(_QWORD *)(gpsi + 3960LL);
                          }
                          else if ( (v46 & 0x6000) == 0 )
                          {
                            v44 = *(_QWORD *)(gpsi + 3952LL);
                          }
                        }
                      }
                    }
                    StoreQMessage(v40, 0LL, 0, 0LL, (LARGE_INTEGER)v5, 0, 0LL, 0xCu, 0LL, 0, 0LL, v44, 0LL, 0LL);
                    v40[12].QuadPart = v32;
                    if ( v32 )
                    {
                      if ( (*(_DWORD *)(v32 + 440) & 1) == 0 )
                      {
                        *(_WORD *)(*(_QWORD *)(v32 + 400) + 6LL) |= 0x2040u;
                        *(_WORD *)(*(_QWORD *)(v32 + 400) + 4LL) |= 0x2040u;
                        if ( (*(_WORD *)(*(_QWORD *)(v32 + 400) + 10LL) & 0x2040) != 0 )
                          KeSetEvent(*(PRKEVENT *)(v32 + 648), 2, 0);
                      }
                    }
                    else
                    {
                      SetWakeBit(*(_QWORD *)(v15 + 48), 0x2040u);
                      SetWakeBit(*(_QWORD *)(v15 + 56), 0x2040u);
                    }
LABEL_118:
                    --gdwInAtomicOperation;
                    if ( gpAtomickCheckStacks )
                    {
                      v49 = 0LL;
                      if ( gdwAtomicCheckLogSize )
                      {
                        while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v49 << 6) + gpAtomickCheckStacks) != v16 )
                        {
                          v49 = (unsigned int)(v49 + 1);
                          if ( (unsigned int)v49 >= gdwAtomicCheckLogSize )
                            return v14;
                        }
                        *(_DWORD *)((v49 << 6) + gpAtomickCheckStacks) = 0;
                      }
                    }
                    return v14;
                  }
                  v36 = 8;
                }
                else
                {
                  v36 = 1816;
                }
                UserSetLastError(v36);
              }
            }
          }
        }
      }
    }
    v37 = gpPendingNotifies;
    v38 = &gpPendingNotifies;
    if ( gpPendingNotifies )
    {
      while ( v37 != (struct tagNOTIFY **)v5 )
      {
        v38 = (struct tagNOTIFY ***)v37;
        v37 = (struct tagNOTIFY **)*v37;
        if ( !v37 )
          goto LABEL_118;
      }
      v47 = *v38;
      v48 = (struct tagNOTIFY **)**v38;
      *v38 = v48;
      if ( !v48 )
      {
        if ( !gpPendingNotifies )
          v38 = 0LL;
        gpLastPendingNotify = (__int64)v38;
      }
      HMAssignmentUnlock(v47 + 1);
      if ( v47 == (struct tagNOTIFY **)&unk_1C03277A0 )
        dword_1C03234F0 = 0;
      else
        Win32FreePool(v47);
    }
    goto LABEL_118;
  }
LABEL_36:
  if ( (*(_DWORD *)(v6 + 40) & 1) != 0 )
  {
    v18 = *(_QWORD *)(v6 + 24);
    DestroyNotify(v5);
    return v18;
  }
  v20 = *v4;
  v51[0] = *(_QWORD *)(*v4 + 368);
  *(_QWORD *)(v20 + 368) = v51;
  v51[1] = v6;
  ++*(_DWORD *)(v6 + 8);
  *(_QWORD *)(v5 + 56) = gptiCurrent;
  if ( (*(_DWORD *)(v6 + 40) & 8) == 0 )
  {
    v21 = *(_QWORD *)(v6 + 64);
    goto LABEL_50;
  }
  v22 = gSharedInfo;
  v21 = *(unsigned __int8 *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v6
                           + *((_QWORD *)&gSharedInfo + 1)
                           + 17LL);
  if ( (v21 & 1) == 0 )
  {
    v8 = *(unsigned int *)(v6 + 72);
    if ( (_DWORD)v8 != -1 )
    {
      v23 = *(_QWORD *)(*v4 + 376);
      v24 = *(_DWORD *)(v23 + 380);
      if ( !_bittest(&v24, v8) )
      {
        CurrentProcess = PsGetCurrentProcess(v23, v8, v4, gSharedInfo);
        if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(*(unsigned int *)(v6 + 72)) )
          goto LABEL_52;
        v4 = (__int64 *)gptiCurrent;
        v22 = gSharedInfo;
      }
    }
    v21 = *(_DWORD *)(v22 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)v6;
    if ( (*(_BYTE *)(v21 + *(_QWORD *)(v22 + 8) + 17) & 1) == 0 )
    {
      if ( *(_DWORD *)(v6 + 72) == -1 )
      {
        v21 = *(_QWORD *)(v6 + 64);
      }
      else
      {
        v8 = *(int *)(v6 + 72);
        v21 = *(_QWORD *)(v6 + 64) + *(_QWORD *)(*(_QWORD *)(*v4 + 376) + 8 * v8 + 384);
      }
LABEL_50:
      if ( v21 )
        xxxClientCallWinEventProc(v21, v6, v5);
    }
  }
LABEL_52:
  *(_QWORD *)(v5 + 56) = 0LL;
  v26 = *(_QWORD *)(v6 + 24);
  ThreadUnlock1(v21, v8);
  v27 = gpPendingNotifies;
  v28 = &gpPendingNotifies;
  if ( gpPendingNotifies )
  {
    while ( v27 != (struct tagNOTIFY **)v5 )
    {
      v28 = (struct tagNOTIFY ***)v27;
      v27 = (struct tagNOTIFY **)*v27;
      if ( !v27 )
        return v26;
    }
    v29 = *v28;
    v30 = (struct tagNOTIFY **)**v28;
    *v28 = v30;
    if ( !v30 )
    {
      if ( !gpPendingNotifies )
        v28 = 0LL;
      gpLastPendingNotify = (__int64)v28;
    }
    HMAssignmentUnlock(v29 + 1);
    if ( v29 == (struct tagNOTIFY **)&unk_1C03277A0 )
    {
      dword_1C03234F0 = 0;
      return v26;
    }
    Win32FreePool(v29);
  }
  return v26;
}
