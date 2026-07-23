/*
 * XREFs of CcSerializeWithLazyWriter @ 0x1401B1BE8
 * Callers:
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x14006E240 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall CcSerializeWithLazyWriter(__int64 a1)
{
  char v2; // di
  __int64 v3; // rbx
  _SLIST_ENTRY *v5; // rbx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8

  v2 = 1;
  if ( (*(_DWORD *)(a1 + 152) & 0x20) != 0 )
  {
    KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    v3 = *(_QWORD *)(a1 + 496);
    if ( v3 )
    {
      v5 = (_SLIST_ENTRY *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
      Next = v5->Next;
      v7 = (_SLIST_ENTRY **)*((_QWORD *)&v5->Next + 1);
      if ( *(&v5->Next->Next + 1) != v5 || *v7 != v5 )
        __fastfail(3u);
      *v7 = Next;
      *((_QWORD *)&Next->Next + 1) = v7;
      *((_QWORD *)&v5->Next + 1) = 0LL;
      v5->Next = 0LL;
      *(_QWORD *)(a1 + 496) = 0LL;
      *(_DWORD *)(a1 + 152) &= ~0x20u;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v5);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v5);
      }
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
      return 0;
    }
  }
  return v2;
}
