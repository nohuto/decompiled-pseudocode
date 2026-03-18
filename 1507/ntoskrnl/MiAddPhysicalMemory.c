/*
 * XREFs of MiAddPhysicalMemory @ 0x1402123C8
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x1406A197C (MiAddPhysicalMemoryChunks.c)
 *     MiAddFileOnlyPfns @ 0x1406AA220 (MiAddFileOnlyPfns.c)
 * Callees:
 *     KePulseEvent @ 0x1400118D0 (KePulseEvent.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiPageTablesNeeded @ 0x140069BA0 (MiPageTablesNeeded.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     MiInitializeNumaRanges @ 0x1401639AC (MiInitializeNumaRanges.c)
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F3AD8 (IoUpdateDumpPhysicalRanges.c)
 *     MiEnableNewPfns @ 0x1402128C8 (MiEnableNewPfns.c)
 *     MiPerformMemoryChange @ 0x140212ECC (MiPerformMemoryChange.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiComputeNodeMemory @ 0x14059AD7C (MiComputeNodeMemory.c)
 *     MiConfigureMemoryInsertion @ 0x1406A1A20 (MiConfigureMemoryInsertion.c)
 *     MiMapNewPfns @ 0x1406A1F4C (MiMapNewPfns.c)
 */

__int64 __fastcall MiAddPhysicalMemory(__int16 *a1, __int64 *a2, _DWORD *a3, int a4)
{
  _QWORD *v5; // r13
  unsigned int v8; // r12d
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // r14
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r14
  __int64 i; // r13
  PVOID v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // r9
  volatile signed __int32 *v25; // r8
  int v26; // eax
  int v27; // r10d
  unsigned __int64 v28; // rcx
  PVOID v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-49h]
  PVOID P[3]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v33; // [rsp+58h] [rbp-21h] BYREF
  __int64 v34; // [rsp+60h] [rbp-19h] BYREF
  struct _KTHREAD *v35; // [rsp+68h] [rbp-11h]
  _QWORD v36[12]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int8 v37; // [rsp+E8h] [rbp+6Fh]

  v5 = a3;
  if ( (*(_DWORD *)a2 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a3 & 0xFFF) != 0 )
    return 3221225712LL;
  if ( !MmDynamicPfn && (a4 & 2) == 0 )
    return 3221225659LL;
  v8 = a4 | 1;
  v9 = *a2 >> 12;
  v10 = *(__int64 *)a3 >> 12;
  v11 = v10 + v9;
  if ( v9 >= v10 + v9 )
    return 3221225711LL;
  v12 = qword_14034EC10;
  if ( qword_14034EC10 > ((unsigned __int64)qword_14034EBC0 >> 12) - 1 )
    v12 = ((unsigned __int64)qword_14034EBC0 >> 12) - 1;
  if ( v11 - 1 > v12 )
  {
    if ( (v8 & 2) != 0 )
      return 3221225712LL;
    v11 = v12 + 1;
    v10 = v12 + 1 - v9;
  }
  if ( v9 >= v11 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  P[1] = P;
  P[0] = P;
  v35 = CurrentThread;
  v33 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  P[2] = 0LL;
  if ( a1 == MiSystemPartition )
  {
    v37 = 0;
  }
  else
  {
    v37 = 1;
    v8 |= 4u;
  }
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread, 0LL, (__int64)a1);
  v14 = MiInitializeNumaRanges();
  if ( v14 >= 0 )
  {
    v15 = v8 & 2;
    if ( (v8 & 2) == 0 )
    {
      if ( qword_1403551D0 + v10 > qword_14034EBB0 )
      {
        v10 = qword_14034EBB0 - qword_1403551D0;
        v11 = qword_14034EBB0 - qword_1403551D0 + v9;
      }
      v31 = MiReferencePageRuns((__int64)MiSystemPartition, 1u);
      v16 = v31;
      if ( v9 >= v11 )
      {
        v14 = -1073741585;
        goto LABEL_66;
      }
      if ( !(unsigned int)MiDescribePageRun((__int64)P, v9, v10) )
      {
        v14 = -1073741670;
        goto LABEL_66;
      }
      v36[0] = 0LL;
      v36[2] = v9;
      v36[3] = v10;
      v14 = MiConfigureMemoryInsertion(&v34, MmPhysicalMemoryBlock, v36);
      if ( v14 < 0 )
      {
LABEL_66:
        MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)v35);
        if ( v34 )
          ExFreePoolWithTag((PVOID)(v34 - 16), 0);
        if ( !v33 )
          goto LABEL_71;
        v29 = (PVOID)(v33 - 16);
        while ( 1 )
        {
          ExFreePoolWithTag(v29, 0);
LABEL_71:
          v29 = P[0];
          if ( P[0] == P )
            break;
          v30 = *(_QWORD *)P[0];
          if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v30 + 8) != P[0] )
            __fastfail(3u);
          P[0] = *(PVOID *)P[0];
          *(_QWORD *)(v30 + 8) = P;
        }
        if ( (v8 & 2) == 0 )
        {
          MiDereferencePageRuns(v16);
          if ( v14 >= 0 )
            IoUpdateDumpPhysicalRanges();
        }
        return (unsigned int)v14;
      }
      for ( i = v31; ; i = v33 )
      {
        v18 = P[0];
        if ( P[0] == P )
          break;
        v19 = *(_QWORD *)P[0];
        if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v19 + 8) != P[0] )
          __fastfail(3u);
        P[0] = *(PVOID *)P[0];
        *(_QWORD *)(v19 + 8) = P;
        v14 = MiConfigureMemoryInsertion(&v33, i, v18);
        ExFreePoolWithTag(v18, 0);
        v16 = v31;
        if ( i != v31 )
          ExFreePoolWithTag((PVOID)(i - 16), 0);
        if ( v14 < 0 )
          goto LABEL_66;
      }
      v15 = v8 & 2;
      v5 = a3;
    }
    v20 = MiPageTablesNeeded(48 * v9 - 0x58000000000LL, 48 * v11 - 0x58000000001LL, 0, 0);
    v22 = v20;
    if ( v20 )
    {
      if ( !(unsigned int)MiChargeResident(MiSystemPartition, v20, 0LL, v21) )
      {
        v14 = -1073741670;
LABEL_65:
        v16 = v31;
        goto LABEL_66;
      }
      _InterlockedExchangeAdd64(&qword_14034F9D8, v22);
      if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v22, 0) )
      {
        v14 = -1073741670;
        goto LABEL_46;
      }
    }
    if ( !v15 && !(unsigned int)MiIncreaseCommitLimits((__int64)MiSystemPartition, v10, v10, v37, 0LL) )
    {
      v14 = -1073741523;
      MiReturnCommit((__int64)MiSystemPartition, v22);
LABEL_46:
      if ( v22 )
      {
        MiReturnResidentAvailable(v22);
        _InterlockedExchangeAdd64(&qword_14034F9F8, v22);
      }
      goto LABEL_65;
    }
    MiMapNewPfns(v9, v11, v8);
    *v5 = v10 << 12;
    if ( v15 )
    {
LABEL_64:
      v14 = 0;
      goto LABEL_65;
    }
    MiPerformMemoryChange(v9, v10, (unsigned int)&v34, (unsigned int)&v33, v8);
    MiComputeNodeMemory();
    _InterlockedExchangeAdd((volatile signed __int32 *)0xFFFFF780000002E8LL, v10);
    v23 = (unsigned __int64)(v10 + 511) >> 9;
    v24 = (v9 >> 9) & 0x1F;
    v25 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v9 >> 14));
    if ( v24 + v23 > 0x20 )
    {
      if ( v24 )
      {
        v27 = (v9 >> 9) & 0x1F;
        _InterlockedAnd(v25, ~(((1 << (32 - v27)) - 1) << v24));
        v23 -= (unsigned int)(32 - v27);
        ++v25;
      }
      if ( v23 >= 0x20 )
      {
        v28 = v23 >> 5;
        v23 += -32LL * (v23 >> 5);
        do
        {
          *v25++ = 0;
          --v28;
        }
        while ( v28 );
      }
      if ( !v23 )
        goto LABEL_61;
      v26 = (1 << v23) - 1;
    }
    else
    {
      if ( v23 == 32 )
      {
        *v25 = 0;
LABEL_61:
        if ( (v8 & 4) == 0 )
          MiEnableNewPfns(v9, v11);
        KePulseEvent(qword_140353E60, 0, 0);
        goto LABEL_64;
      }
      v26 = ((1 << v23) - 1) << v24;
    }
    _InterlockedAnd(v25, ~v26);
    goto LABEL_61;
  }
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  return (unsigned int)v14;
}
