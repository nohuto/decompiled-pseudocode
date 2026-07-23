/*
 * XREFs of MiTrimOrAgeWorkingSet @ 0x1400A59F0
 * Callers:
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiAttachSession @ 0x140007380 (MiAttachSession.c)
 *     PfLogForegroundProcess @ 0x14001B950 (PfLogForegroundProcess.c)
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     MiReturnCcAccessLog @ 0x1400A6FC0 (MiReturnCcAccessLog.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiDetachSession @ 0x1400E923C (MiDetachSession.c)
 *     MiQueuePageAccessLog @ 0x1400F152C (MiQueuePageAccessLog.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiComputeTrimAmount @ 0x1401D786C (MiComputeTrimAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiTrimOrAgeWorkingSet(_BYTE *SpinLock, __int64 a2, unsigned int a3)
{
  int *v6; // rcx
  char v7; // dl
  unsigned __int16 v8; // ax
  __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int8 ApcStateIndex; // al
  unsigned __int8 CurrentIrql; // cl
  _QWORD **v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r14d
  int v16; // r15d
  unsigned int v17; // ebp
  __int64 v18; // r14
  char v19; // cl
  _QWORD *v20; // rax
  _QWORD *i; // rcx
  char v22; // al
  char v23; // al
  char v24; // al
  _SLIST_ENTRY *v25; // rsi
  __int64 v27; // rax
  __int64 VmPartition; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r10
  int v31; // r15d
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rax
  void *retaddr; // [rsp+A8h] [rbp+0h]

  if ( SpinLock[218] == 2 && (SpinLock[216] & 7) == 0 )
    PfLogForegroundProcess((__int64)SpinLock);
  v6 = MiSystemPartition;
  v7 = SpinLock[216] & 7;
  if ( !v7 )
  {
    v8 = *((_WORD *)SpinLock + 90);
    if ( v8 != 1023 )
      v6 = *(int **)(qword_1402FEC28 + 8LL * v8);
  }
  v9 = *((_QWORD *)v6 + 702);
  if ( v7 )
  {
    if ( v7 == 1 )
      MiAttachSession((unsigned __int64)(SpinLock - 2968));
  }
  else if ( SpinLock - 1280 != (_BYTE *)PsInitialSystemProcess )
  {
    CurrentThread = KeGetCurrentThread();
    ApcStateIndex = CurrentThread->ApcStateIndex;
    if ( ApcStateIndex )
      KeBugCheckEx(5u, (ULONG_PTR)(SpinLock - 1280), (ULONG_PTR)CurrentThread->ApcState.Process, ApcStateIndex, 0LL);
    KiStackAttachProcess((ULONG_PTR)(SpinLock - 1280));
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(SpinLock, CurrentIrql);
  if ( (a3 & 4) != 0 )
    MiEmptyWorkingSet((volatile LONG *)SpinLock, 0LL, 0);
  if ( (SpinLock[216] & 7) == 0 && (a3 & 0x20) != 0 )
    MiTrimWorkingSet(*((_QWORD *)SpinLock + 15), (_DWORD)SpinLock, 0, 0, 2);
  if ( (a3 & 0x100) != 0 )
    MiTrimWorkingSet(*((_QWORD *)SpinLock + 15), (_DWORD)SpinLock, 0, 0, 4);
  v15 = *(unsigned __int16 *)(v9 + 2358);
  v16 = 0;
  v17 = 0;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 1) = MiTrimPassToAge[*(_BYTE *)a2 & 0x7F];
    v27 = MiComputeTrimAmount(a2, SpinLock);
    if ( v27 )
      *(_QWORD *)(a2 + 88) += MiTrimWorkingSet(v27, (_DWORD)SpinLock, 0, *(unsigned __int8 *)(a2 + 1), 1);
    v14 = 0LL;
    if ( ((*(_BYTE *)a2 & 0x7F) == 0 && *(char *)a2 >= 0 || (*(_BYTE *)a2 & 0x7F) == 4) && *(_WORD *)(v9 + 2358) )
      v14 = 1LL;
    if ( *(_BYTE *)(a2 + 4) == 1 )
    {
      v17 = MiAgeWorkingSet((__int64)SpinLock, 0, v14, v15);
      v16 = 1;
    }
  }
  else if ( (a3 & 2) != 0 )
  {
    v16 = 1;
    v17 = MiAgeWorkingSet((__int64)SpinLock, 0, 1, *(unsigned __int16 *)(v9 + 2358));
    if ( !v17 && *(_BYTE *)(v9 + 55) == 1 && v15 - 1 <= 8 )
      v17 = MiAgeWorkingSet((__int64)SpinLock, 0, 2, 0xAu);
  }
  else if ( (a3 & 0x40) != 0 )
  {
    v17 = MiAgeWorkingSet((__int64)SpinLock, 0, 1, v15);
    v16 = 1;
  }
  else if ( (a3 & 0x80u) != 0 )
  {
    v17 = MiAgeWorkingSet((__int64)SpinLock, 0, 2, *(unsigned __int16 *)(v9 + 2358));
    v16 = 1;
  }
  v18 = 0LL;
  if ( v17 != 1 )
  {
    if ( v16 == 1 )
    {
      v19 = 1;
      if ( SpinLock[218] == 2 )
        v19 = 3;
      *(_QWORD *)(a2 + 8) += *((_QWORD *)SpinLock + 5) >> v19;
      *(_QWORD *)(a2 + 16) += *((_QWORD *)SpinLock + 6) >> v19;
      *(_QWORD *)(a2 + 24) += *((_QWORD *)SpinLock + 7) >> v19;
      *(_QWORD *)(a2 + 32) += *((_QWORD *)SpinLock + 8) >> v19;
      *(_QWORD *)(a2 + 40) += *((_QWORD *)SpinLock + 9) >> v19;
      *(_QWORD *)(a2 + 48) += *((_QWORD *)SpinLock + 10) >> v19;
      *(_QWORD *)(a2 + 56) += *((_QWORD *)SpinLock + 11) >> v19;
    }
    if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
      MiCaptureAndResetWorkingSetAccessBits(SpinLock, a3);
    v18 = MEMORY[0xFFFFF78000000320];
    v13 = (_QWORD **)*((_QWORD *)SpinLock + 2);
    if ( v13 )
    {
      v20 = *v13;
      for ( i = (_QWORD *)*((_QWORD *)SpinLock + 2); v20; v20 = (_QWORD *)*v20 )
        i = v20;
      if ( MEMORY[0xFFFFF78000000320] - i[2] > (unsigned __int64)PfKernelGlobals )
      {
        MiEmptyPageAccessLog(*((_QWORD **)SpinLock + 2));
        *((_QWORD *)SpinLock + 2) = 0LL;
      }
    }
  }
  v22 = SpinLock[219];
  if ( (v22 & 0x10) != 0 )
  {
    SpinLock[219] = v22 & 0xEF;
    VmPartition = MiGetVmPartition(SpinLock, v13, v14);
    MiAgeWorkingSet((__int64)SpinLock, 0, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
  }
  v23 = SpinLock[219];
  if ( (v23 & 0x20) != 0 )
  {
    v29 = *((_QWORD *)SpinLock + 17);
    v30 = *((_QWORD *)SpinLock + 15);
    v31 = 7;
    for ( SpinLock[219] = v23 & 0xDF; v30 > v29; --v31 )
    {
      v32 = v30 - v29;
      if ( v31 )
      {
        v33 = v32;
        v32 = *(_QWORD *)&SpinLock[8 * (v31 - 1) + 40];
        if ( v32 > v33 )
          v32 = v33;
      }
      if ( v32 )
      {
        MiTrimWorkingSet(v32, (_DWORD)SpinLock, 0, v31, 0);
        if ( !v31 )
          break;
      }
      v30 = *((_QWORD *)SpinLock + 15);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
  else
    *(_DWORD *)SpinLock = 0;
  __writecr8(0LL);
  v24 = SpinLock[216] & 7;
  if ( v24 )
  {
    if ( v24 == 1 )
      MiDetachSession();
  }
  else if ( SpinLock - 1280 != (_BYTE *)PsInitialSystemProcess )
  {
    KiDetachProcess(&KeGetCurrentThread()->600, 1LL);
  }
  if ( !v17 )
  {
    if ( qword_1402FED80 )
    {
      v25 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_1402FED80, 0LL);
      if ( v25 )
      {
        if ( v18 - (unsigned __int64)v25[1].Next > PfKernelGlobals || (a3 & 0x18) != 0 )
          MiQueuePageAccessLog(v25);
        else
          MiReturnCcAccessLog(v25);
      }
    }
  }
  return v17;
}
