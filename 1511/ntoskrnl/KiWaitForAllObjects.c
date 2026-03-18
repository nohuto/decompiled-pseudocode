/*
 * XREFs of KiWaitForAllObjects @ 0x1400DECEC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiBeginThreadWait @ 0x140029950 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14002A094 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14002A0E0 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiWaitSatisfyOther @ 0x1400DF0A8 (KiWaitSatisfyOther.c)
 *     KiUnlockKobjectArray @ 0x1400DF0D0 (KiUnlockKobjectArray.c)
 *     KiWaitSatisfyMutant @ 0x1400DF104 (KiWaitSatisfyMutant.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        __int64 *a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r15
  volatile signed __int32 *v8; // rax
  char v9; // r13
  __int64 *v10; // r12
  unsigned int v11; // r9d
  __int64 v12; // rdi
  volatile signed __int32 **v13; // r11
  volatile signed __int32 **v14; // rbx
  volatile signed __int32 *v15; // r10
  unsigned int v16; // r8d
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  char v19; // r14
  char v20; // r8
  __int64 v21; // rdx
  volatile __int64 WaitStatus; // rsi
  __int64 v23; // r8
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v25; // rax
  __int64 *v26; // rcx
  volatile signed __int32 *v27; // rsi
  int v28; // r15d
  volatile signed __int32 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  volatile signed __int32 **v32; // r14
  __int64 v33; // r12
  __int64 v34; // r9
  __int64 v35; // rcx
  volatile unsigned __int8 DpcRoutineActive; // al
  struct _KTHREAD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // edx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // r10
  __int64 v44; // r9
  int v45; // r8d
  unsigned __int8 CurrentIrql; // al
  __int64 v47; // r8
  __int64 v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v52; // r8
  __int64 v54; // r8
  char v55; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  int v59; // [rsp+3Ch] [rbp-C4h]
  unsigned int v60; // [rsp+40h] [rbp-C0h]
  __int64 v61; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v63; // [rsp+58h] [rbp-A8h]
  volatile signed __int32 *v64; // [rsp+60h] [rbp-A0h] BYREF
  char v65; // [rsp+68h] [rbp-98h] BYREF

  v7 = a7;
  v8 = (volatile signed __int32 *)*a2;
  v9 = a3;
  v10 = a2;
  v11 = 1;
  v12 = a1;
  v59 = a3;
  v63 = a2;
  v60 = a1;
  v61 = a7;
  v64 = v8;
  if ( a1 > 1 )
  {
    v13 = (volatile signed __int32 **)(a2 + 1);
    v14 = &v64;
    do
    {
      v15 = *v13;
      v16 = v11;
      if ( *v14 > *v13 )
      {
        do
        {
          v17 = v16--;
          (&v64)[v17] = (&v64)[v16];
        }
        while ( v16 && *(&v64 + v16 - 1) > v15 );
      }
      ++v11;
      ++v14;
      ++v13;
      (&v64)[v16] = v15;
    }
    while ( v11 < (unsigned int)v12 );
  }
  CurrentThread = KeGetCurrentThread();
  v19 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, (__int64 *)&v62, &v57);
  v55 = v19;
  v20 = v9;
LABEL_8:
  LODWORD(WaitStatus) = KiBeginThreadWait((__int64)CurrentThread, a4, v20, a5);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_DWORD)v12 )
    {
      v25 = v7 + 17;
      v26 = v10;
      v21 = v12;
      do
      {
        v23 = *v26;
        *(_BYTE *)(v25 - 1) = 0;
        *(_BYTE *)v25 = 4;
        *(_WORD *)(v25 + 1) = 0;
        if ( CurrentThread )
          *(_QWORD *)(v25 + 7) = CurrentThread;
        *(_QWORD *)(v25 + 15) = v23;
        ++v26;
        v25 += 48LL;
        --v21;
      }
      while ( v21 );
    }
    v27 = v64;
    v28 = 0;
    v29 = v64;
    CurrentThread->WaitStatus = 0LL;
    KiAcquireKobjectLockSafe(v29, v21, v23);
    if ( (unsigned int)v12 > 1 )
    {
      v32 = (volatile signed __int32 **)&v65;
      v33 = (unsigned int)(v12 - 1);
      do
      {
        if ( *v32 != v27 )
        {
          v27 = *v32;
          KiAcquireKobjectLockSafe(*v32, v30, v31);
        }
        ++v32;
        --v33;
      }
      while ( v33 );
      v10 = v63;
      v19 = v55;
    }
    v34 = 2LL;
    while ( 1 )
    {
      v35 = v10[v28];
      if ( (*(_BYTE *)v35 & 0x7F) == 2 )
      {
        DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
        v37 = *(struct _KTHREAD **)(v35 + 40);
        if ( CurrentThread == v37 && *(_BYTE *)(v35 + 2) == DpcRoutineActive && *(_DWORD *)(v35 + 4) == 0x80000000 )
        {
          KiUnlockKobjectArray(&v64, (unsigned int)v12, v31, 2LL);
          LOBYTE(v54) = v19;
          KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v54);
          RtlRaiseStatus(-1073741423);
        }
        if ( *(int *)(v35 + 4) <= 0 && (CurrentThread != v37 || *(_BYTE *)(v35 + 2) != DpcRoutineActive) )
        {
LABEL_31:
          if ( v28 == (_DWORD)v12 )
          {
            if ( (_DWORD)v12 )
            {
              v48 = v12;
              do
              {
                v49 = *v10;
                if ( !(unsigned __int8)KiWaitSatisfyOther(*v10)
                  && (*(_BYTE *)v49 & 0x7F) == (_BYTE)v34
                  && (*(_DWORD *)(v49 + 4))-- == 1 )
                {
                  v58 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v58, v50, v31);
                    while ( CurrentThread->ThreadLock );
                  }
                  KiWaitSatisfyMutant(v49, CurrentThread, CurrentPrcb, v34);
                  CurrentThread->ThreadLock = 0LL;
                  v34 = 2LL;
                }
                ++v10;
                --v48;
              }
              while ( v48 );
              LODWORD(v12) = v60;
            }
            KiUnlockKobjectArray(&v64, (unsigned int)v12, v31, v34);
            LOBYTE(v52) = v55;
            WaitStatus = CurrentThread->WaitStatus;
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v52);
          }
          else if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v57, v62) )
          {
            KiUnlockKobjectArray(&v64, (unsigned int)v12, v38, v39);
            LOBYTE(v47) = v19;
            KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v47);
            LODWORD(WaitStatus) = 258;
          }
          else
          {
            v7 = v61;
            v40 = 0;
            if ( (_DWORD)v12 )
            {
              v41 = (_QWORD *)v61;
              do
              {
                v42 = v41[4] + 8LL;
                v43 = *(_QWORD **)(v41[4] + 16LL);
                *v41 = v42;
                v41[1] = v43;
                if ( *v43 != v42 )
                  __fastfail(3u);
                *v43 = v41;
                ++v40;
                *(_QWORD *)(v42 + 8) = v41;
                v41 += 6;
              }
              while ( v40 < (unsigned int)v12 );
            }
            KiUnlockKobjectArray(&v64, (unsigned int)v12, v38, v39);
            v44 = v62;
            v45 = v57;
            CurrentThread->WaitBlockCount = v12;
            LODWORD(WaitStatus) = KiCommitThreadWait((__int64)CurrentThread, v7, v45, v44);
            if ( (_DWORD)WaitStatus == 256 )
            {
              v19 = 0;
              v55 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              v20 = v59;
              CurrentThread->WaitIrql = CurrentIrql;
              goto LABEL_8;
            }
          }
          return (unsigned int)WaitStatus;
        }
      }
      else if ( *(int *)(v35 + 4) <= 0 )
      {
        goto LABEL_31;
      }
      if ( ++v28 >= (unsigned int)v12 )
        goto LABEL_31;
    }
  }
  return (unsigned int)WaitStatus;
}
