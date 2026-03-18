/*
 * XREFs of CcReferenceSharedCacheMapByVacb @ 0x1401DE2D8
 * Callers:
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

char __fastcall CcReferenceSharedCacheMapByVacb(__int64 a1)
{
  char v2; // di
  __int64 v3; // rcx
  volatile signed __int64 **v4; // rbx
  __int64 v5; // rax
  volatile signed __int64 **v6; // rbx
  __int64 v7; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v3 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) == v3 )
  {
    ++*(_DWORD *)(v3 + 4);
    v4 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      return 1;
    }
    _m_prefetchw(v4);
    v5 = (__int64)*v4;
    if ( !*v4 )
    {
      if ( v4 == (volatile signed __int64 **)_InterlockedCompareExchange64(v4[1], 0LL, (signed __int64)v4) )
        return 1;
      v5 = KxWaitForLockChainValid((__int64 *)v4);
    }
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
    return 1;
  }
  v6 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 80);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v6);
    v7 = (__int64)*v6;
    if ( !*v6 )
    {
      if ( v6 == (volatile signed __int64 **)_InterlockedCompareExchange64(v6[1], 0LL, (signed __int64)v6) )
        return v2;
      v7 = KxWaitForLockChainValid((__int64 *)v6);
    }
    *v6 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
    return v2;
  }
  KiReleaseQueuedSpinLockInstrumented(v6, retaddr);
  return v2;
}
