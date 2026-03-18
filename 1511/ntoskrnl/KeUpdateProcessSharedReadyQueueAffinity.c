/*
 * XREFs of KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC
 * Callers:
 *     PspUpdateSharedReadyQueueAffinityProcessCallback @ 0x1400967B0 (PspUpdateSharedReadyQueueAffinityProcessCallback.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x140095C70 (KeUpdateThreadSchedulingProperties.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140096AF4 (KiRemoveThreadFromSharedReadyQueue.c)
 */

__int64 __fastcall KeUpdateProcessSharedReadyQueueAffinity(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r13
  volatile LONG *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD **v6; // r14
  _QWORD *i; // rsi
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v9; // rdi
  char v10; // al
  __int64 v11; // rbp
  __int64 v12; // rdx
  char v13; // bl
  volatile signed __int64 *v14; // r10
  __int64 result; // rax
  int v16; // [rsp+60h] [rbp+8h] BYREF
  volatile signed __int64 *v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v6 = (_QWORD **)(a1 + 48);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    CurrentPrcb = 0LL;
    v9 = (volatile signed __int32 *)(i - 95);
    v16 = 0;
    while ( _interlockedbittestandset64(v9 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v16, v4, v5);
      while ( *((_QWORD *)v9 + 8) );
    }
    v10 = KiAcquireThreadStateLock((__int64)(i - 95), &v18, (volatile signed __int32 **)&v17);
    v11 = v18;
    LOBYTE(v12) = v10;
    v13 = v10;
    KeUpdateThreadSchedulingProperties(i - 95, v12, v18);
    v14 = v17;
    if ( v13 == 1 && v17 && (v9[30] & 0x1000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiRemoveThreadFromSharedReadyQueue(v17, i - 95, (unsigned int)*((char *)v9 + 195));
      v11 = v18;
      *((_BYTE *)v9 + 388) = 7;
    }
    if ( v11 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
      v14 = v17;
    }
    if ( v14 )
      _InterlockedAnd64(v14, 0LL);
    *((_QWORD *)v9 + 8) = 0LL;
    if ( CurrentPrcb )
      KiDeferredReadyThread((__int64)CurrentPrcb, (__int64)(i - 95), v5);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
