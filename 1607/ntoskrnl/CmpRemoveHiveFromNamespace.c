/*
 * XREFs of CmpRemoveHiveFromNamespace @ 0x1400878C4
 * Callers:
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140087D10 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHiveFlusherShared @ 0x1403FD564 (CmpLockHiveFlusherShared.c)
 *     CmpUnlockHiveFlusher @ 0x1403FD608 (CmpUnlockHiveFlusher.c)
 *     CmpFreeKeyByCell @ 0x1404005C8 (CmpFreeKeyByCell.c)
 *     CmpLockKcbExclusive @ 0x140422050 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140438610 (CmpUnlockKcb.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14049FEF8 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLogHiveDestroyEvent @ 0x1405FB9B0 (CmpLogHiveDestroyEvent.c)
 */

__int64 __fastcall CmpRemoveHiveFromNamespace(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v5; // rsi
  int v6; // edi

  v2 = *(_QWORD *)(a2 + 64);
  v5 = *(void **)(v2 + 64);
  CmpLockKcbExclusive(v5);
  CmpLockKcbExclusive(v2);
  CmpLockHiveFlusherShared(*(_QWORD *)(v2 + 24));
  v6 = CmpFreeKeyByCell(*(_QWORD *)(v2 + 24), *(unsigned int *)(v2 + 32));
  if ( v6 >= 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(v2, 1LL);
    *(_DWORD *)(v2 + 32) = -1;
    *(_WORD *)(v2 + 178) &= ~2u;
    *(_WORD *)(v2 + 4) &= ~8u;
    CmpDereferenceKeyControlBlockUnsafe(a2);
    *(_QWORD *)(v2 + 96) = 0LL;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
      CmpLogHiveDestroyEvent(a1);
    v6 = 0;
  }
  CmpUnlockHiveFlusher(*(_QWORD *)(v2 + 24));
  CmpUnlockKcb((PVOID)v2);
  CmpUnlockKcb(v5);
  return (unsigned int)v6;
}
