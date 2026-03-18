/*
 * XREFs of MiCleanPhysicalProcessPages @ 0x14065C30C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140013C68 (RtlClearBitsEx.c)
 *     MiFreeMdlPageRun @ 0x140022A34 (MiFreeMdlPageRun.c)
 *     MiGetProcessPartition @ 0x14002BAF0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140097430 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400982A0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiReturnProcessCommitment @ 0x1400A3E4C (MiReturnProcessCommitment.c)
 *     RtlFindNextForwardRunClearEx @ 0x1401129E8 (RtlFindNextForwardRunClearEx.c)
 *     RtlFindSetBitsEx @ 0x1401129F0 (RtlFindSetBitsEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x1401718E8 (MiReturnPartitionResidentAvailable.c)
 */

__int64 __fastcall MiCleanPhysicalProcessPages(__int64 a1)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  int *ProcessPartition; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rdi
  unsigned __int64 *v7; // r14
  _DWORD *v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 SetBits; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  int *v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  struct _KTHREAD *v20; // [rsp+80h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h]

  v2 = 0LL;
  v3 = 0LL;
  ProcessPartition = MiGetProcessPartition(a1);
  CurrentThread = KeGetCurrentThread();
  v6 = (__int64)ProcessPartition;
  v7 = *(unsigned __int64 **)(a1 + 1032);
  v20 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v7 + 2);
  ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v7 + 2), 0LL);
  if ( *(_QWORD *)(a1 + 1600) )
  {
    v9 = 0LL;
    do
    {
      SetBits = RtlFindSetBitsEx(v7, 1uLL, v9);
      v11 = SetBits;
      if ( SetBits < v9 || SetBits == -1LL )
        break;
      NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v7, SetBits, &v19);
      v13 = v19;
      v14 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        v13 = *v7;
      v15 = v13 - v11;
      RtlClearBitsEx((__int64)v7, v11, v15);
      v9 = v11 + v15 + v14;
      v2 += v15;
      v3 += MiFreeMdlPageRun(v11, v15, 0);
    }
    while ( v9 < *v7 );
    CurrentThread = v20;
    v16 = MiSystemPartition;
    if ( v2 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 7352), -v2);
      *(_QWORD *)(a1 + 1600) = 0LL;
      MiReturnProcessCommitment(a1, v2);
      if ( (int *)v6 == v16 )
        _InterlockedExchangeAdd64(&qword_1403278E8, v17);
    }
    if ( v3 )
    {
      if ( (int *)v6 == v16 )
        MiReturnResidentAvailable(v3);
      else
        MiReturnPartitionResidentAvailable(v6, v3);
      MiReturnCommit(v6, v3);
    }
    v8 = (_DWORD *)BugCheckParameter2;
  }
  else
  {
    v8 = v7 + 2;
  }
  ExReleaseAutoExpandPushLockExclusive(v8, 0LL);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
