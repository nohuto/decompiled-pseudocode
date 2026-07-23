/*
 * XREFs of CcSerializeWithLazyWriter @ 0x1401DD344
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall CcSerializeWithLazyWriter(__int64 a1)
{
  char v2; // di
  __int64 v3; // rsi
  volatile signed __int64 **v4; // rbx
  __int64 v5; // rax
  _SLIST_ENTRY *v7; // rsi
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v9; // rax
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 152) & 0x20) == 0 )
    return v2;
  KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
  v3 = *(_QWORD *)(a1 + 496);
  if ( !v3 )
  {
    v4 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      return 0;
    }
    _m_prefetchw(v4);
    v5 = (__int64)*v4;
    if ( !*v4 )
    {
      if ( v4 == (volatile signed __int64 **)_InterlockedCompareExchange64(v4[1], 0LL, (signed __int64)v4) )
        return 0;
      v5 = KxWaitForLockChainValid((__int64 *)v4);
    }
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
    return 0;
  }
  v7 = (_SLIST_ENTRY *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  Next = v7->Next;
  v9 = (_SLIST_ENTRY **)*((_QWORD *)&v7->Next + 1);
  if ( *(&v7->Next->Next + 1) != v7 || *v9 != v7 )
    __fastfail(3u);
  *v9 = Next;
  *((_QWORD *)&Next->Next + 1) = v9;
  *((_QWORD *)&v7->Next + 1) = 0LL;
  v7->Next = 0LL;
  *(_DWORD *)(a1 + 152) &= ~0x20u;
  *(_QWORD *)(a1 + 496) = 0LL;
  v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(v10);
    v11 = (__int64)*v10;
    if ( !*v10 )
    {
      if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
        goto LABEL_19;
      v11 = KxWaitForLockChainValid((__int64 *)v10);
    }
    *v10 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v11 + 8), 1uLL);
    goto LABEL_19;
  }
  KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
LABEL_19:
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, v7);
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v7);
  }
  return v2;
}
