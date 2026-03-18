/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140011F70
 * Callers:
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x140113D0C (MiRemoveDecayClusterTimer.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v2; // r9
  unsigned __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // r13
  volatile signed __int64 *v6; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v22; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+78h] [rbp+10h]

  v1 = a1;
  v2 = 0xFFFFF78000000008uLL;
  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - *(_QWORD *)(a1 + 3952);
  if ( result < 0x989680 )
    return result;
  v4 = ((unsigned __int8)*(_DWORD *)(a1 + 3944) + 1) & 3;
  *(_QWORD *)(a1 + 3952) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v5 = a1 + 8 * v4;
  result = *(_QWORD *)(v5 + 3912) >> 33;
  if ( result == 0x7FFFFFFF )
    goto LABEL_33;
  v6 = (volatile signed __int64 *)(a1 + 1960);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v22 = v6;
    v21 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v21, v6);
    }
    else
    {
      v8 = _InterlockedExchange64(v6, (__int64)&v21);
      if ( v8 )
        KxWaitForLockOwnerShip(&v21, v8, 0xFFFFFFFFFLL, v2);
    }
    v9 = *(_QWORD *)(v5 + 3912) >> 33;
    if ( v9 == 0x7FFFFFFF )
      break;
    v10 = 48 * (v9 + qword_14034F420) - 0x58000000000LL;
    v11 = MiReverseSwizzleInvalidPte(*(_QWORD *)(v10 + 16), v9 + qword_14034F420, 0xFFFFFFFFFLL, v2);
    v13 = v12 & (v11 >> 12);
    if ( v13 == v14 )
    {
      MiUnlinkPageFromList(v10);
      *(_BYTE *)(v10 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v10);
LABEL_11:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v21, retaddr);
        __writecr8(CurrentIrql);
      }
      else
      {
        v18 = v21;
        v19 = v21 == 0;
        _m_prefetchw(&v21);
        if ( v19 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v22, 0LL, (signed __int64)&v21) == &v21 )
            goto LABEL_25;
          v18 = KxWaitForLockChainValid(&v21);
        }
        v21 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
LABEL_25:
        __writecr8(CurrentIrql);
      }
    }
    else
    {
      v15 = 48 * v13 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        goto LABEL_11;
      v16 = *(_BYTE *)(v15 + 35) & 7;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v21, retaddr);
        goto LABEL_20;
      }
      _m_prefetchw(&v21);
      v17 = v21;
      if ( !v21 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v22, 0LL, (signed __int64)&v21) == &v21 )
          goto LABEL_20;
        v17 = KxWaitForLockChainValid(&v21);
      }
      v21 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v17 + 8), 1uLL);
LABEL_20:
      MiRelinkStandbyPage(v15, v16, 1022LL);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v21, retaddr);
    goto LABEL_32;
  }
  _m_prefetchw(&v21);
  v20 = v21;
  if ( v21 )
  {
LABEL_31:
    v21 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
  }
  else if ( (__int64 *)_InterlockedCompareExchange64(v22, 0LL, (signed __int64)&v21) != &v21 )
  {
    v20 = KxWaitForLockChainValid(&v21);
    goto LABEL_31;
  }
LABEL_32:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  v1 = a1;
LABEL_33:
  *(_DWORD *)(v1 + 3944) = v4;
  return result;
}
