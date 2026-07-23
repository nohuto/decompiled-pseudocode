/*
 * XREFs of KiWaitForAllObjects @ 0x14009759C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiWaitSatisfyOther @ 0x140097914 (KiWaitSatisfyOther.c)
 *     KiUnlockKobjectArray @ 0x14009793C (KiUnlockKobjectArray.c)
 *     KiWaitSatisfyMutant @ 0x140097970 (KiWaitSatisfyMutant.c)
 *     KiBeginThreadWait @ 0x1400CE820 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x1400CE988 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x1400CE9E0 (KiCheckWaitNext.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 *v10; // r15
  unsigned int v11; // r9d
  __int64 v12; // rdi
  unsigned __int64 *v13; // r11
  __int64 *v14; // rbx
  unsigned __int64 v15; // r10
  unsigned int v16; // r8d
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v19; // rdx
  char v20; // r12
  volatile __int64 WaitStatus; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  char *v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rsi
  int v28; // r14d
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // r15
  __int64 v32; // r12
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // r10d
  unsigned int v38; // edx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // r10
  __int64 v42; // r9
  __int64 v43; // r8
  unsigned __int8 CurrentIrql; // al
  __int64 v45; // r14
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // r9
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v62; // [rsp+40h] [rbp-C0h]
  __int64 v63; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  char v66; // [rsp+68h] [rbp-98h] BYREF

  v7 = a7;
  v8 = *a2;
  v9 = a3;
  v10 = a2;
  v11 = 1;
  v60 = a3;
  v64 = a2;
  v12 = a1;
  v62 = (__int64)a7;
  v65 = v8;
  if ( a1 > 1 )
  {
    v13 = a2 + 1;
    v14 = &v65;
    do
    {
      v15 = *v13;
      v16 = v11;
      if ( *v14 > *v13 )
      {
        do
        {
          v17 = v16--;
          *(&v65 + v17) = *(&v65 + v16);
        }
        while ( v16 && *(&v65 + v16 - 1) > v15 );
      }
      ++v11;
      ++v14;
      ++v13;
      *(&v65 + v16) = v15;
    }
    while ( v11 < (unsigned int)v12 );
  }
  CurrentThread = KeGetCurrentThread();
  v20 = KiCheckWaitNext((_DWORD)CurrentThread, a6, 0, (unsigned int)&v63, (__int64)&v59);
  v57 = v20;
LABEL_8:
  LOBYTE(v19) = a4;
  LODWORD(WaitStatus) = KiBeginThreadWait(CurrentThread, v19, v9);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v12 )
    {
      v23 = (char *)v7 + 17;
      v24 = v10;
      v25 = v12;
      do
      {
        v26 = *v24;
        *(v23 - 1) = 0;
        *v23 = 4;
        *(_WORD *)(v23 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v23 + 7) = CurrentThread;
        *(_QWORD *)(v23 + 15) = v26;
        ++v24;
        v23 += 48;
        --v25;
      }
      while ( v25 );
    }
    v27 = v65;
    v28 = 0;
    v29 = v65;
    CurrentThread->WaitStatus = 0LL;
    KiAcquireKobjectLockSafe(v29);
    if ( (unsigned int)v12 > 1 )
    {
      v31 = &v66;
      v32 = (unsigned int)(v12 - 1);
      do
      {
        if ( *(_QWORD *)v31 != v27 )
        {
          v27 = *(_QWORD *)v31;
          KiAcquireKobjectLockSafe(*(_QWORD *)v31);
        }
        v31 += 8;
        --v32;
      }
      while ( v32 );
      v10 = v64;
      v20 = v57;
    }
    v33 = 2LL;
    while ( 1 )
    {
      v34 = v10[v28];
      if ( (*(_BYTE *)v34 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v52 = *(struct _KTHREAD **)(v34 + 40);
        if ( CurrentThread == v52 && *(_BYTE *)(v34 + 2) == DpcRoutineActive && *(_DWORD *)(v34 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v65, (unsigned int)v12, v30, 2LL);
          LOBYTE(v53) = v20;
          KiFastExitThreadWait(CurrentPrcb, CurrentThread, v53, v54);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v34 + 4) <= 0 && (CurrentThread != v52 || *(_BYTE *)(v34 + 2) != DpcRoutineActive) )
        {
LABEL_24:
          if ( v28 == (_DWORD)v12 )
          {
            if ( (_DWORD)v12 )
            {
              v45 = v12;
              do
              {
                v46 = *v10;
                if ( !(unsigned __int8)KiWaitSatisfyOther(*v10)
                  && (*(_BYTE *)v46 & 0x7F) == (_BYTE)v33
                  && (*(_DWORD *)(v46 + 4))-- == 1 )
                {
                  v61 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v61);
                    while ( CurrentThread->ThreadLock );
                  }
                  KiWaitSatisfyMutant(v46, CurrentThread, CurrentPrcb);
                  v33 = 2LL;
                  CurrentThread->ThreadLock = 0LL;
                }
                ++v10;
                --v45;
              }
              while ( v45 );
              v20 = v57;
            }
            KiUnlockKobjectArray(&v65, (unsigned int)v12, v30, v33);
            WaitStatus = CurrentThread->WaitStatus;
            LOBYTE(v47) = v20;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v47, v48);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v59, v63) )
          {
            KiUnlockKobjectArray(&v65, (unsigned int)v12, v35, v36);
            LOBYTE(v55) = v20;
            KiFastExitThreadWait(CurrentPrcb, CurrentThread, v55, v56);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v7 = (__int64 *)v62;
            v38 = v37;
            if ( (_DWORD)v12 )
            {
              v39 = (_QWORD *)v62;
              do
              {
                v40 = v39[4] + 8LL;
                v41 = *(_QWORD **)(v39[4] + 16LL);
                if ( *v41 != v40 )
                  __fastfail(3u);
                *v39 = v40;
                ++v38;
                v39[1] = v41;
                *v41 = v39;
                *(_QWORD *)(v40 + 8) = v39;
                v39 += 6;
              }
              while ( v38 < (unsigned int)v12 );
            }
            KiUnlockKobjectArray(&v65, (unsigned int)v12, v35, v36);
            v42 = v63;
            v43 = v59;
            CurrentThread->WaitBlockCount = v12;
            LODWORD(WaitStatus) = KiCommitThreadWait((__int64)CurrentThread, v7, v43, v42);
            if ( (_DWORD)WaitStatus == 256 )
            {
              v20 = 0;
              v57 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v9 = v60;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_8;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v34 + 4) <= 0 )
      {
        goto LABEL_24;
      }
      if ( ++v28 >= (unsigned int)v12 )
        goto LABEL_24;
    }
  }
  return (unsigned int)WaitStatus;
}
