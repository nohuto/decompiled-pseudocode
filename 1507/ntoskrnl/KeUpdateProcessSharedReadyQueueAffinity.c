/*
 * XREFs of KeUpdateProcessSharedReadyQueueAffinity @ 0x14000B7FC
 * Callers:
 *     PspUpdateSharedReadyQueueAffinityProcessCallback @ 0x14013067C (PspUpdateSharedReadyQueueAffinityProcessCallback.c)
 * Callees:
 *     KeUpdateThreadSchedulingProperties @ 0x14000B9FC (KeUpdateThreadSchedulingProperties.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeUpdateProcessSharedReadyQueueAffinity(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r13
  volatile signed __int32 *v3; // rdi
  unsigned int v4; // ebx
  signed __int32 i; // edx
  _QWORD *v6; // r15
  _QWORD *j; // r14
  struct _KPRCB *CurrentPrcb; // r12
  volatile signed __int32 *v9; // rsi
  unsigned int v10; // ebx
  char v11; // al
  __int64 v12; // rbp
  __int64 v13; // rdx
  char v14; // bl
  __int64 v15; // rcx
  volatile signed __int32 **v16; // r8
  char v17; // r9
  volatile signed __int32 **v18; // rdx
  __int64 result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (volatile signed __int32 *)(a1 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(a1 + 64);
    for ( i = *v3; (*v3 & 0xBFFFFFFF) != 0x80000000; i = *v3 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, i | 0x40000000, i);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  v6 = (_QWORD *)(a1 + 48);
  for ( j = *(_QWORD **)(a1 + 48); j != v6; j = (_QWORD *)*j )
  {
    CurrentPrcb = 0LL;
    v9 = (volatile signed __int32 *)(j - 95);
    v10 = 0;
    while ( _interlockedbittestandset64(v9 + 16, 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( *((_QWORD *)v9 + 8) );
    }
    v11 = KiAcquireThreadStateLock(j - 95, &v22, &v21);
    v12 = v22;
    LOBYTE(v13) = v11;
    v14 = v11;
    KeUpdateThreadSchedulingProperties(j - 95, v13, v22);
    v15 = v21;
    if ( v14 == 1 && v21 && (v9[30] & 0x1000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = (volatile signed __int32 **)*((_QWORD *)v9 + 27);
      v17 = *((_BYTE *)v9 + 195);
      v18 = (volatile signed __int32 **)*((_QWORD *)v9 + 28);
      if ( v16[1] != v9 + 54 || *v18 != v9 + 54 )
        __fastfail(3u);
      v15 = v21;
      *v18 = (volatile signed __int32 *)v16;
      v16[1] = (volatile signed __int32 *)v18;
      if ( v18 == v16 )
        *(_DWORD *)(v15 + 8) ^= 1 << v17;
      v12 = v22;
      *((_BYTE *)v9 + 388) = 7;
    }
    if ( v12 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
      v15 = v21;
    }
    if ( v15 )
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    *((_QWORD *)v9 + 8) = 0LL;
    if ( CurrentPrcb )
      KiDeferredReadyThread(CurrentPrcb, j - 95);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
