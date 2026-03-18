/*
 * XREFs of MiDeleteSessionPdes @ 0x14014BED8
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     MiFreeUnmappedPageTables @ 0x140039270 (MiFreeUnmappedPageTables.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteSessionPdes(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  unsigned int v2; // edi
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  signed __int32 i; // edx
  unsigned __int64 v8; // rbx
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v11[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h]
  int v13; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v14; // [rsp+6Ch] [rbp-9Ch]
  __int64 v15; // [rsp+70h] [rbp-98h]
  __int64 v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]

  v2 = 0;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  v10 = 0LL;
  v5 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
  v15 = 20LL;
  v13 = 2;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
  }
  else
  {
    if ( _interlockedbittestandset(v5, 0x1Fu) )
      v2 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
    for ( i = *v5; (*v5 & 0xBFFFFFFF) != 0x80000000; i = *v5 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v5, i | 0x40000000, i);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
    }
  }
  while ( BugCheckParameter2 <= a2 )
  {
    MiDeleteValidSystemPte(
      (unsigned __int64 *)BugCheckParameter2,
      (__int64)(BugCheckParameter2 << 25) >> 16,
      (__int64)v5,
      (__int64)&v13,
      &v10);
    BugCheckParameter2 += 8LL;
  }
  MiFlushTbList((__int64)&v13);
  MiUnlockWorkingSetExclusive((__int64)v5, CurrentIrql);
  MiFreeUnmappedPageTables((volatile signed __int32 *)v10, v11);
  v8 = v11[0];
  MiReturnResidentAvailable(v11[0]);
  _InterlockedExchangeAdd64(&qword_14034F848, v8);
  return MiReturnCommit((__int64)MiSystemPartition, v12);
}
