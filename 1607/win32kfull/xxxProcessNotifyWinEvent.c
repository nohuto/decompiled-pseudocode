/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C0085350
 * Callers:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0084BE0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCallWinEventProc @ 0x1C00887CC (xxxClientCallWinEventProc.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DestroyNotify @ 0x1C00FE060 (DestroyNotify.c)
 *     xxxLoadHmodIndex @ 0x1C0109684 (xxxLoadHmodIndex.c)
 *     ProcessSuspendedEventMessage @ 0x1C0120610 (ProcessSuspendedEventMessage.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
LARGE_INTEGER __fastcall xxxProcessNotifyWinEvent(LARGE_INTEGER a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *v4; // rdi
  LARGE_INTEGER v5; // rsi
  int v6; // r15d
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *QuadPart; // rcx
  LARGE_INTEGER v10; // rdx
  __int16 ProcessMachine; // bx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  LARGE_INTEGER v16; // rdx
  LARGE_INTEGER v17; // r12
  __int64 v18; // r14
  int v19; // r15d
  __int64 v20; // rcx
  LARGE_INTEGER v21; // rbx
  __int64 v23; // rcx
  LARGE_INTEGER v24; // rbp
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  LARGE_INTEGER v31; // rdi
  struct tagNOTIFY **v32; // rax
  struct tagNOTIFY ***v33; // rcx
  struct tagNOTIFY **v34; // rbx
  struct tagNOTIFY **v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned __int64 v38; // rbx
  LARGE_INTEGER v39; // rdx
  DWORD LowPart; // eax
  __int16 v41; // bx
  LARGE_INTEGER v42; // rbx
  int v43; // eax
  __int64 v44; // rdx
  HANDLE ThreadId; // rax
  __int64 v46; // rcx
  struct tagNOTIFY **v47; // rax
  struct tagNOTIFY ***v48; // rcx
  LARGE_INTEGER *v49; // rax
  LARGE_INTEGER *v50; // rdi
  LARGE_INTEGER **v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  LONGLONG v55; // rax
  __int64 v56; // r8
  __int64 v57; // r8
  struct tagNOTIFY **v58; // rbx
  struct tagNOTIFY **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rcx
  __int128 v63; // [rsp+70h] [rbp-68h]
  _QWORD v64[3]; // [rsp+80h] [rbp-58h] BYREF
  __int128 SystemInformation; // [rsp+98h] [rbp-40h] BYREF
  int v66; // [rsp+A8h] [rbp-30h]
  int ProcessInformation; // [rsp+E0h] [rbp+8h] BYREF
  int v68; // [rsp+E4h] [rbp+Ch]

  v4 = *(LARGE_INTEGER **)(a1.QuadPart + 8);
  v5 = a1;
  v6 = 0;
  if ( (*(_DWORD *)(a1.QuadPart + 48) & 0xC) == 4 )
    goto LABEL_19;
  a1.QuadPart = *(unsigned int *)(gptiCurrent + 440LL);
  if ( (a1.LowPart & 0xD) != 0 )
    goto LABEL_19;
  if ( !gbEnforceUIPI )
  {
    v7 = *(_QWORD *)(gptiCurrent + 376LL);
    v8 = *(_QWORD *)(v4[2].QuadPart + 376);
    if ( (*(_DWORD *)(v8 + 732) != *(_DWORD *)(v7 + 732) || *(_DWORD *)(v8 + 736) != *(_DWORD *)(v7 + 736))
      && (a1.LowPart & 0x400000) == 0 )
    {
      goto LABEL_19;
    }
  }
  QuadPart = (_QWORD *)v4[2].QuadPart;
  if ( QuadPart[47] != *(_QWORD *)(gptiCurrent + 376LL) )
  {
    if ( (unsigned __int8)IsRestricted(*QuadPart) )
      goto LABEL_19;
  }
  v10 = v4[2];
  a1.QuadPart = *(_DWORD *)(gptiCurrent + 440LL) & 0x100;
  if ( (*(_DWORD *)(v10.QuadPart + 440) & 0x100) != a1.LowPart )
    goto LABEL_19;
  if ( a1.LowPart )
  {
    ProcessMachine = PsWow64GetProcessMachine(**(_QWORD **)(v10.QuadPart + 376));
    if ( (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL)) != ProcessMachine )
      goto LABEL_19;
  }
  v12 = gbEnforceUIPI;
  v13 = *(_QWORD *)(v4[2].QuadPart + 376);
  a1 = *(LARGE_INTEGER *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
  v14 = *(_QWORD *)(v13 + 824);
  if ( gbEnforceUIPI )
  {
    if ( (unsigned int)v14 <= a1.LowPart )
    {
      if ( (_DWORD)v14 != a1.LowPart
        || (v15 = HIDWORD(v14), a1.QuadPart = HIDWORD(a1.QuadPart), (_DWORD)v15 != a1.LowPart)
        && (_DWORD)v15 != -1
        && a1.LowPart != -1 )
      {
        v6 = 1;
        goto LABEL_19;
      }
    }
  }
  if ( (!v4[7].LowPart || !v4[6].QuadPart) && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(v4[2].QuadPart + 376)) )
  {
    v12 = *(_QWORD *)(v4[2].QuadPart + 376);
    if ( *(int *)(v12 + 12) >= 0 )
    {
      v20 = *(_QWORD *)(gptiCurrent + 376LL);
      if ( v12 != v20 && (*(_DWORD *)(v12 + 768) & 0x100) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v20)
          || (ProcessInformation = 6,
              ZwQueryInformationProcess(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                ProcessCookie|ProcessUserModeIOPL,
                &ProcessInformation,
                8u,
                0LL) < 0)
          || (v68 & 1) != 0 )
        {
LABEL_19:
          v16 = v4[2];
          v17 = v4[3];
          v18 = *(_QWORD *)(v16.QuadPart + 384);
          if ( v6 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))EtwTraceUIPIEventHookError)(
              (LARGE_INTEGER)v5.QuadPart,
              (LARGE_INTEGER)v16.QuadPart,
              gptiCurrent);
          ++gdwInAtomicOperation;
          if ( gpAtomickCheckStacks )
          {
            a1.QuadPart = 0LL;
            v19 = ++gdwAtomicCheckSerial;
            if ( gdwAtomicCheckLogSize )
            {
              while ( *(_DWORD *)(((unsigned __int64)a1.LowPart << 6) + gpAtomickCheckStacks) )
              {
                a1.QuadPart = a1.LowPart + 1;
                if ( a1.LowPart >= gdwAtomicCheckLogSize )
                  goto LABEL_65;
              }
              v38 = (unsigned __int64)a1.LowPart << 6;
              *(_DWORD *)(v38 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
              *(_DWORD *)(v38 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
              *(_DWORD *)(v38 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                           * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              RtlWalkFrameChain((PVOID *)(v38 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
            }
          }
          else
          {
            v19 = v68;
          }
LABEL_65:
          *(_DWORD *)(v5.QuadPart + 48) |= 0xCu;
          if ( v18 )
          {
            v39 = v4[2];
            if ( v39.QuadPart != gptiRit )
            {
              LowPart = v4[5].LowPart;
              if ( (LowPart & 1) == 0 )
              {
                if ( (LowPart & 0x10) == 0
                  || (a1.QuadPart = *(_DWORD *)(gptiCurrent + 440LL) & 0x100,
                      (*(_DWORD *)(v39.QuadPart + 440) & 0x100) == a1.LowPart)
                  && (!a1.LowPart
                   || (v41 = PsWow64GetProcessMachine(**(_QWORD **)(v39.QuadPart + 376)),
                       (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(gptiCurrent + 376LL)) == v41)) )
                {
                  v42 = v4[2];
                  if ( !v42.QuadPart )
                    goto LABEL_82;
                  if ( (*(_DWORD *)(v42.QuadPart + 440) & 1) == 0 )
                  {
                    v43 = *(_DWORD *)(v42.QuadPart + 1096);
                    if ( (v43 & 0x2000) != 0
                      && (v43 & 0x4000) == 0
                      && (((__int64 (__fastcall *)(_QWORD))PsGetCurrentProcess)((LARGE_INTEGER)a1.QuadPart) == gpepCSRSS
                       || (unsigned int)IsDwmInputThread(gpepCSRSS, v44)) )
                    {
                      *(_QWORD *)&v63 = PsGetThreadProcessId(*(PETHREAD *)v42.QuadPart);
                      ThreadId = PsGetThreadId(*(PETHREAD *)v42.QuadPart);
                      v66 = 13;
                      *((_QWORD *)&v63 + 1) = ThreadId;
                      SystemInformation = v63;
                      if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
                        *(_DWORD *)(v42.QuadPart + 1096) |= 0x4000u;
                    }
                    if ( (*(_DWORD *)(v42.QuadPart + 1096) & 0x20) == 0
                      || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))ProcessSuspendedEventMessage)(
                                         (LARGE_INTEGER)v42.QuadPart,
                                         12LL,
                                         0LL,
                                         0LL,
                                         0LL,
                                         (LARGE_INTEGER)v5.QuadPart) )
                    {
LABEL_82:
                      if ( *(_DWORD *)(v18 + 16) < gUserPostMessageLimit )
                      {
                        v49 = (LARGE_INTEGER *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
                        v50 = v49;
                        if ( v49 )
                        {
                          memset(v49, 0, 0x98uLL);
                          if ( *(_DWORD *)(v18 + 20) == 2 )
                            v50[12].HighPart |= 8u;
                          else
                            v50[12].HighPart |= 4u;
                          v51 = *(LARGE_INTEGER ***)(v18 + 8);
                          if ( v51 )
                          {
                            *v51 = v50;
                            v50[1] = *(LARGE_INTEGER *)(v18 + 8);
                          }
                          else
                          {
                            *(_QWORD *)v18 = v50;
                          }
                          ++*(_DWORD *)(v18 + 16);
                          *(_QWORD *)(v18 + 8) = v50;
                          v52 = *(_QWORD *)(v18 + 88);
                          if ( v52 )
                            v53 = *(_QWORD *)(v52 + 16);
                          else
                            v53 = *(_QWORD *)(v18 + 64);
                          v54 = *(_DWORD *)(*(_QWORD *)(v53 + 376) + 280LL) & 0xF;
                          if ( v54 )
                          {
                            if ( v54 == 1 )
                              v55 = *(_QWORD *)(gpsi + 5352LL);
                            else
                              v55 = *(_QWORD *)(gpsi + 5368LL);
                          }
                          else
                          {
                            v55 = *(_QWORD *)(gpsi + 5344LL);
                          }
                          StoreQMessage(v50, 0LL, 0, 0LL, v5, 0, 0LL, 0xCu, 0LL, 0, 0LL, v55, 0LL, 0LL);
                          v50[13] = v42;
                          if ( v42.QuadPart )
                          {
                            if ( (*(_DWORD *)(v42.QuadPart + 440) & 1) == 0 )
                            {
                              *(_WORD *)(*(_QWORD *)(v42.QuadPart + 400) + 6LL) |= 0x2040u;
                              *(_WORD *)(*(_QWORD *)(v42.QuadPart + 400) + 4LL) |= 0x2040u;
                              if ( (*(_WORD *)(*(_QWORD *)(v42.QuadPart + 400) + 10LL) & 0x2040) != 0 )
                                KeSetEvent(*(PRKEVENT *)(v42.QuadPart + 648), 2, 0);
                            }
                          }
                          else
                          {
                            SetWakeBit(*(_QWORD *)(v18 + 56), 8256LL, v56);
                            SetWakeBit(*(_QWORD *)(v18 + 64), 8256LL, v57);
                          }
LABEL_117:
                          --gdwInAtomicOperation;
                          if ( gpAtomickCheckStacks )
                          {
                            v62 = 0LL;
                            if ( gdwAtomicCheckLogSize )
                            {
                              while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v62 << 6) + gpAtomickCheckStacks) != v19 )
                              {
                                v62 = (unsigned int)(v62 + 1);
                                if ( (unsigned int)v62 >= gdwAtomicCheckLogSize )
                                  return v17;
                              }
                              *(_DWORD *)((v62 << 6) + gpAtomickCheckStacks) = 0;
                            }
                          }
                          return v17;
                        }
                        v46 = 8LL;
                      }
                      else
                      {
                        v46 = 1816LL;
                      }
                      UserSetLastError(v46);
                    }
                  }
                }
              }
            }
          }
          v47 = gpPendingNotifies;
          v48 = &gpPendingNotifies;
          if ( gpPendingNotifies )
          {
            while ( v47 != (struct tagNOTIFY **)v5.QuadPart )
            {
              v48 = (struct tagNOTIFY ***)v47;
              v47 = (struct tagNOTIFY **)*v47;
              if ( !v47 )
                goto LABEL_117;
            }
            v58 = *v48;
            v59 = (struct tagNOTIFY **)**v48;
            *v48 = v59;
            if ( !v59 )
            {
              if ( !gpPendingNotifies )
                v48 = 0LL;
              gpLastPendingNotify = (__int64)v48;
            }
            HMAssignmentUnlock(v58 + 1);
            if ( v58 == (struct tagNOTIFY **)&unk_1C032DAB0 )
              dword_1C0328B9C = 0;
            else
              Win32FreePool(v58, v60, v61);
          }
          goto LABEL_117;
        }
      }
    }
  }
  if ( (v4[5].LowPart & 1) != 0 )
  {
    v21 = v4[3];
    ((void (__fastcall *)(_QWORD))DestroyNotify)((LARGE_INTEGER)v5.QuadPart);
    return v21;
  }
  v23 = gptiCurrent;
  v64[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v64;
  v64[1] = v4;
  ++v4[1].LowPart;
  *(_QWORD *)(v5.QuadPart + 56) = gptiCurrent;
  if ( (v4[5].LowPart & 8) == 0 )
  {
    v24 = v4[8];
    goto LABEL_49;
  }
  v13 = gSharedInfo;
  v23 = *(unsigned __int8 *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v4->LowPart
                           + *((_QWORD *)&gSharedInfo + 1)
                           + 17LL);
  if ( (v23 & 1) == 0 )
  {
    v12 = v4[9].LowPart;
    if ( (_DWORD)v12 != -1 )
    {
      v25 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL);
      if ( !_bittest(&v25, v12) )
      {
        v26 = ((__int64 (*)(void))PsGetCurrentProcess)();
        if ( (unsigned int)PsIsProtectedProcess(v26) || !xxxLoadHmodIndex(v4[9].LowPart) )
          goto LABEL_51;
        v13 = gSharedInfo;
      }
    }
    v23 = *(_DWORD *)(v13 + 16) * (unsigned int)(unsigned __int16)v4->LowPart;
    if ( (*(_BYTE *)(v23 + *(_QWORD *)(v13 + 8) + 17) & 1) == 0 )
    {
      if ( v4[9].LowPart == -1 )
      {
        v24 = v4[8];
      }
      else
      {
        v12 = (int)v4[9].LowPart;
        v23 = gptiCurrent;
        v24.QuadPart = v4[8].QuadPart + *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 8 * v12 + 376);
      }
LABEL_49:
      if ( v24.QuadPart )
      {
        v27 = W32SetCurrentThreadDpiAwarenessContext(v4[11].LowPart, v12, v13, a4);
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))xxxClientCallWinEventProc)(
          (LARGE_INTEGER)v24.QuadPart,
          v4,
          (LARGE_INTEGER)v5.QuadPart);
        W32SetCurrentThreadDpiAwarenessContext(v27, v28, v29, v30);
      }
    }
  }
LABEL_51:
  *(_QWORD *)(v5.QuadPart + 56) = 0LL;
  v31 = v4[3];
  ThreadUnlock1(v23, v12);
  v32 = gpPendingNotifies;
  v33 = &gpPendingNotifies;
  if ( gpPendingNotifies )
  {
    while ( v32 != (struct tagNOTIFY **)v5.QuadPart )
    {
      v33 = (struct tagNOTIFY ***)v32;
      v32 = (struct tagNOTIFY **)*v32;
      if ( !v32 )
        return v31;
    }
    v34 = *v33;
    v35 = (struct tagNOTIFY **)**v33;
    *v33 = v35;
    if ( !v35 )
    {
      if ( !gpPendingNotifies )
        v33 = 0LL;
      gpLastPendingNotify = (__int64)v33;
    }
    HMAssignmentUnlock(v34 + 1);
    if ( v34 == (struct tagNOTIFY **)&unk_1C032DAB0 )
    {
      dword_1C0328B9C = 0;
      return v31;
    }
    Win32FreePool(v34, v36, v37);
  }
  return v31;
}
