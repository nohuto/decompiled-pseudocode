/*
 * XREFs of ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4
 * Callers:
 *     xxxSendMessageBSM @ 0x140004CE0 (xxxSendMessageBSM.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401A3E8C (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendBSMtoDesktop(
        struct tagWND **a1,
        unsigned int a2,
        __int64 a3,
        __int128 *a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  void *v6; // rdi
  unsigned int v7; // r15d
  __int128 *v8; // r12
  struct tagTHREADINFO *v11; // rsi
  __int64 *i; // rax
  __int64 v13; // rsi
  __int64 UserSessionState; // rbx
  __int64 v15; // rbx
  ULONG_PTR *v16; // r15
  ULONG_PTR v17; // rbx
  int v18; // edx
  ULONG_PTR v19; // rsi
  struct tagTHREADINFO *v20; // r15
  int v21; // esi
  int v22; // edx
  int v23; // esi
  BOOL v24; // r12d
  int v25; // r15d
  PETHREAD *v26; // rcx
  ULONG_PTR *CurrentThreadWin32Thread; // rax
  ULONG_PTR v28; // r8
  ULONG_PTR *v29; // rcx
  __int64 v30; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rcx
  __int128 v34; // xmm0
  int v35; // eax
  bool v36; // zf
  LastWokenThread *v37; // rcx
  void *v38; // rcx
  int v39; // [rsp+50h] [rbp-99h]
  HANDLE InputBuffer; // [rsp+58h] [rbp-91h] BYREF
  __int64 v41; // [rsp+60h] [rbp-89h] BYREF
  BOOL v42; // [rsp+68h] [rbp-81h]
  __int64 v43; // [rsp+70h] [rbp-79h]
  int v44; // [rsp+78h] [rbp-71h]
  void *Handle; // [rsp+80h] [rbp-69h] BYREF
  int v46; // [rsp+88h] [rbp-61h]
  __int64 v47; // [rsp+90h] [rbp-59h] BYREF
  struct tagTHREADINFO *v48; // [rsp+98h] [rbp-51h]
  __int128 *v49; // [rsp+A0h] [rbp-49h]
  __int64 v50; // [rsp+A8h] [rbp-41h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-39h] BYREF
  char v52[8]; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-21h]
  __int128 v54; // [rsp+D0h] [rbp-19h]
  int v55; // [rsp+E0h] [rbp-9h]

  v6 = 0LL;
  v39 = 1;
  v7 = 1;
  v42 = 0;
  v8 = a4;
  v49 = a4;
  v43 = a3;
  v11 = PtiCurrent();
  v48 = v11;
  v54 = 0LL;
  v55 = 0;
  if ( !a1 )
    return 0LL;
  if ( a2 - 1024 > 0xBBFF )
  {
    if ( !a6 && (a2 == 295 || a2 == 21 || a2 == 26 || a2 == 29 || a2 == 794) )
      a6 = 1;
    v50 = BuildHwndList(a1[14], 2u);
    if ( v50 )
    {
      if ( (*((_DWORD *)a5 + 1) & 0x90) == 0x80 )
      {
        v37 = *(LastWokenThread **)(W32GetUserSessionState() + 19176);
        if ( a1[3] == v37
          && ((_InterlockedCompareExchange((volatile signed __int32 *)v11 + 130, 0, 0) & 8) != 0
           || CanForceForeground(*((const struct tagPROCESSINFO **)v11 + 57))) )
        {
          LastWokenThread::Clear(v37);
        }
      }
      if ( a2 != 537 || ((v43 - 0x8000) & 0xFFFFFFFFFFFFFFFBuLL) != 0 || *((_DWORD *)v8 + 1) != 2 )
        goto LABEL_13;
      if ( (*((_DWORD *)v8 + 3) & 0x40000000) == 0 )
      {
        v34 = *v8;
        v55 = *((_DWORD *)v8 + 4);
        v35 = HIDWORD(*((_QWORD *)v8 + 1)) | 0x40000000;
        v36 = (*((_DWORD *)a5 + 1) & 0x400) == 0;
        v54 = v34;
        HIDWORD(v54) = v35;
        if ( v36 )
        {
          v41 = 0LL;
          GetProcessLuid(0LL, &v41);
          if ( (_DWORD)v41 == luidSystem[0] )
            v42 = HIDWORD(v41) == luidSystem[1];
        }
LABEL_13:
        for ( i = (__int64 *)(v50 + 32); ; i = (__int64 *)((char *)Handle + 8) )
        {
          v13 = *i;
          Handle = i;
          if ( v13 == 1 )
          {
LABEL_58:
            FreeHwndList(v50);
            return v7;
          }
          v44 = 0;
          PsGetCurrentThreadWin32Thread();
          if ( (unsigned __int64)(unsigned __int16)v13 < *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 19904) + 8LL) )
          {
            UserSessionState = W32GetUserSessionState();
            v15 = *(_DWORD *)(W32GetUserSessionState() + 19928) * (unsigned int)(unsigned __int16)v13
                + *(_QWORD *)(UserSessionState + 19920);
            v16 = (ULONG_PTR *)HMPkheFromPhe(v15);
            LOWORD(v13) = WORD1(v13) & 0x7FFF;
            if ( ((WORD1(v13) & 0x7FFF) == *(_WORD *)(v15 + 26)
               || (_WORD)v13 == 0x7FFF
               || !(_WORD)v13 && PsGetCurrentProcessWow64Process())
              && (*(_BYTE *)(v15 + 25) & 1) == 0
              && *(_BYTE *)(v15 + 24) == 1 )
            {
              v17 = *v16;
              if ( *v16 )
              {
                v18 = *((_DWORD *)a5 + 1);
                v19 = v17 + 16;
                v20 = v48;
                if ( (v18 & 2) == 0 || *(_QWORD *)(*(_QWORD *)v19 + 464LL) != *((_QWORD *)v48 + 58) )
                {
                  if ( (v18 & 0x400) == 0
                    || (v33 = *(_QWORD **)v19, v41 = 0LL, (int)GetProcessLuid(*v33, &v41) >= 0)
                    && *((_QWORD *)a5 + 4) == v41 )
                  {
                    if ( v42 )
                    {
                      v32 = *(_QWORD **)v19;
                      InputBuffer = 0LL;
                      if ( (int)GetProcessLuid(*v32, &InputBuffer) < 0 )
                        goto LABEL_45;
                      if ( (HANDLE)__PAIR64__(luidSystem[1], luidSystem[0]) != InputBuffer )
                        v44 = 1;
                    }
                    if ( (*(_WORD *)(*(_QWORD *)(v17 + 40) + 42LL) & 0x2FFF) != 0x29C
                      && *(_WORD *)(W32GetUserSessionState() + 41370) != **(_WORD **)(*(_QWORD *)(v17 + 136) + 8LL) )
                    {
                      BugCheckParameter3[0] = *((_QWORD *)v20 + 56);
                      *((_QWORD *)v20 + 56) = BugCheckParameter3;
                      BugCheckParameter3[1] = v17;
                      HMLockObject(v17);
                      v21 = *((_DWORD *)a5 + 1);
                      if ( (v21 & 0x10) != 0 )
                      {
                        PostTransformableMessageIL((struct tagWND *)v17, a2, a6);
                      }
                      else if ( (v21 & 0x100) != 0 )
                      {
                        xxxSendNotifyMessage(v17, a2, v43, v8, a6);
                      }
                      else if ( (v21 & 0x20000000) != 0 )
                      {
                        AtomicExecutionCheck::AtomicExecutionCheck(v52);
                        xxxSendMessageCallback((struct tagWND *)v17, a2, 0LL, 1LL, 0, a6 != 0, 1);
                        if ( v52[0] )
                        {
                          v30 = v53;
                          v53 = 0LL;
                          v52[0] = 0;
                          --*(_DWORD *)(v30 + 28);
                        }
                      }
                      else
                      {
                        v47 = 0LL;
                        v22 = v21 & 8;
                        InputBuffer = 0LL;
                        v23 = v21 & 0x20;
                        v46 = v22;
                        v24 = a2 == 536 && v43 == 4;
                        if ( v22 )
                          v25 = v24 ? 2000 : 5000;
                        else
                          v25 = 0;
                        if ( v24 )
                        {
                          InputBuffer = PsGetThreadProcessId(**(PETHREAD **)(v17 + 16));
                          ZwPowerInformation(TraceApplicationPowerMessage, &InputBuffer, 8u, 0LL, 0);
                          v22 = v46;
                        }
                        if ( xxxSendTransformableMessageTimeout(
                               (struct tagWND *)v17,
                               a2,
                               (v22 != 0 ? 2 : 0) | (*((_DWORD *)a5 + 1) >> 3) & 8u,
                               v25,
                               (__int64)&v47,
                               a6,
                               1) )
                        {
                          if ( (*((_DWORD *)a5 + 1) & 1) != 0 )
                          {
                            v7 = 0;
                            if ( a2 == 17 )
                              v36 = v47 == 0;
                            else
                              v36 = v47 == 1112363332;
                            LOBYTE(v7) = !v36;
                            v39 = v7;
                          }
                          else
                          {
                            v7 = v39;
                          }
                        }
                        else
                        {
                          v7 = v23;
                          v39 = v23;
                        }
                        if ( v24 )
                        {
                          v26 = *(PETHREAD **)(v17 + 16);
                          InputBuffer = 0LL;
                          InputBuffer = PsGetThreadProcessId(*v26);
                          ZwPowerInformation(TraceApplicationPowerMessageEnd, &InputBuffer, 8u, 0LL, 0);
                        }
                        if ( !v7 )
                        {
                          v36 = (*((_DWORD *)a5 + 1) & 0x200) == 0;
                          *((_QWORD *)a5 + 3) = *(_QWORD *)v17;
                          if ( !v36 )
                          {
                            v38 = *(void **)(v17 + 24);
                            Handle = 0LL;
                            if ( v38 )
                            {
                              ObOpenObjectByPointer(v38, 0, 0LL, 0x1F0003u, 0LL, 1, &Handle);
                              v6 = Handle;
                            }
                            *((_QWORD *)a5 + 2) = v6;
                          }
                          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
                          goto LABEL_58;
                        }
                        v8 = v49;
                      }
                      CurrentThreadWin32Thread = (ULONG_PTR *)PsGetCurrentThreadWin32Thread();
                      if ( CurrentThreadWin32Thread )
                        v28 = *CurrentThreadWin32Thread;
                      else
                        v28 = 0LL;
                      v29 = *(ULONG_PTR **)(v28 + 448);
                      if ( v29 != BugCheckParameter3 )
                        KeBugCheckEx(0x164u, 0x3BuLL, v28, (ULONG_PTR)BugCheckParameter3, 0LL);
                      *(_QWORD *)(v28 + 448) = *v29;
                      HMUnlockObject(v29[1]);
                    }
                  }
                }
              }
            }
          }
LABEL_45:
          v7 = v39;
        }
      }
    }
    return 0LL;
  }
  UserSetLastError(87LL);
  return 1LL;
}
