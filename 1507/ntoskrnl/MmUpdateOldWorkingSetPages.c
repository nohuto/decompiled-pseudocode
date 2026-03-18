/*
 * XREFs of MmUpdateOldWorkingSetPages @ 0x14021B8BC
 * Callers:
 *     PfpDeprioritizeOldPagesInWs @ 0x1406AEF38 (PfpDeprioritizeOldPagesInWs.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x14007BAE0 (MiEmptyWorkingSetHelper.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRotateHeadWsle @ 0x140081B34 (MiRotateHeadWsle.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiLockSetPfnPriority @ 0x140120268 (MiLockSetPfnPriority.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MmUpdateOldWorkingSetPages(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // r14
  volatile signed __int32 *v6; // rsi
  __int64 v7; // r12
  int v8; // r15d
  unsigned int v9; // edi
  signed __int32 v10; // edx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // al
  unsigned int v25; // eax
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  int v29; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v30; // [rsp+38h] [rbp-D0h]
  unsigned __int64 i; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+50h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-B0h]
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v37[40]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v38[48]; // [rsp+118h] [rbp+10h] BYREF

  v3 = 0;
  if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)a1 )
  {
    v29 = 0;
  }
  else
  {
    v29 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v38);
  }
  v5 = -1LL;
  v30 = 0LL;
  v6 = (volatile signed __int32 *)(a1 + 1272);
  v37[0] = 0;
  v7 = *(_QWORD *)(a1 + 1456);
  v34 = 0LL;
  v27 = 0;
  v8 = 2;
  while ( 1 )
  {
    v33 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
    }
    else
    {
      v9 = 0;
      if ( _interlockedbittestandset(v6, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
      while ( 1 )
      {
        v10 = *v6;
        if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v10 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v6, v10 | 0x40000000, v10);
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
    }
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      break;
    if ( v8 == 2 )
    {
      if ( *(_DWORD *)(v7 + 64) == 16 )
      {
        v11 = 13;
        v27 = 13;
        v8 = 1;
LABEL_23:
        v12 = *(_QWORD *)(v7 + 8LL * v11 + 112);
        v5 = MiRotateHeadWsle(v7, v11);
        i = 0LL;
        v13 = 0LL;
        goto LABEL_27;
      }
      v11 = 5;
      v8 = 0;
      v27 = 5;
    }
    else
    {
      v11 = v27;
    }
    if ( v8 )
      goto LABEL_23;
    if ( ++v5 < *(_QWORD *)(v7 + 8) )
      v5 = *(_QWORD *)(v7 + 8);
    v12 = *(_QWORD *)&v6[2 * v11 + 10];
    v13 = *(_QWORD *)(v7 + 16);
    for ( i = v13; ; v13 = i )
    {
LABEL_27:
      if ( v8 )
      {
        v14 = 0xFFFFFFFFFLL;
        if ( v5 == 0xFFFFFFFFFLL )
          goto LABEL_29;
      }
      else
      {
        if ( v5 > v13 )
          goto LABEL_29;
        v14 = 0xFFFFFFFFFLL;
      }
      if ( v30 >= v12 )
      {
LABEL_29:
        if ( v37[0] )
          MiFreeWsleList(a1 + 1272, v37, 0);
        goto LABEL_81;
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v7 + 496) + v5 * *(unsigned int *)(v7 + 64));
      if ( (v15 & 1) != 0 && (*(_QWORD *)(*(_QWORD *)(v7 + 496) + v5 * *(unsigned int *)(v7 + 64)) & 0xE00LL) == 0xC00 )
      {
        ++v30;
        if ( (v15 & 0x800000000000LL) != 0 )
          v16 = v15 | 0xFFFF000000000000uLL;
        else
          v16 = v15 & 0xFFFFFFFFFFFFLL;
        v17 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v18 = *(_QWORD *)v17;
        if ( v17 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v18)
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v19 )
          {
            v20 = *(_QWORD *)(v19 + 8 * ((v17 >> 3) & 0x1FF));
            if ( (v20 & 0x20) != 0 )
              v18 |= 0x20uLL;
            if ( (v20 & 0x42) != 0 )
              v18 |= 0x42uLL;
          }
        }
        v36 = v18;
        if ( (v18 & 0x20) == 0 )
        {
          if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
          {
            if ( (unsigned int)MiPteHasShadow(0x90482413000LL, v18) )
            {
              if ( (v18 & 1) != 0 )
              {
                v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
                if ( v21 )
                {
                  v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)&v36 >> 3) & 0x1FF));
                  if ( (v22 & 0x20) != 0 )
                    v18 |= 0x20uLL;
                  if ( (v22 & 0x42) != 0 )
                    v18 |= 0x42uLL;
                }
              }
            }
          }
          v23 = 48 * (v14 & (v18 >> 12)) - 0x58000000000LL;
          if ( (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
            && ((a3 & 2) == 0 || (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0) )
          {
            v24 = *(_BYTE *)(v23 + 35);
            if ( (v24 & 8) != 0 )
              v25 = 5;
            else
              v25 = v24 & 7;
            if ( (a3 & 1) != 0 )
            {
              if ( a2 == 8 || v25 == a2 )
              {
                MiEmptyWorkingSetHelper(a1 + 1272, (unsigned __int64 *)v17, v5, v37);
                ++v33;
              }
            }
            else if ( v25 > a2 )
            {
              MiLockSetPfnPriority(v23, a2);
            }
          }
        }
      }
      if ( (++v34 & 0xF) == 0 && (*v6 & 0x40000000) != 0 )
        break;
      if ( KeShouldYieldProcessor() )
        break;
      if ( v8 )
        v5 = MiRotateHeadWsle(v7, v27);
      else
        ++v5;
    }
    if ( v37[0] )
    {
      MiFreeWsleList(a1 + 1272, v37, 0);
      v37[0] = 0;
    }
    MiUnlockWorkingSetExclusive(a1 + 1272, CurrentIrql);
    v30 -= v33;
  }
  v3 = -1073741558;
LABEL_81:
  MiUnlockWorkingSetExclusive(a1 + 1272, CurrentIrql);
  if ( v29 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v38, 0);
  return v3;
}
