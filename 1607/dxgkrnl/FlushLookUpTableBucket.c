/*
 * XREFs of FlushLookUpTableBucket @ 0x1C00351DC
 * Callers:
 *     LookUpTableFlushComplete @ 0x1C0010914 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C0035348 (LookUpTableFlushPartial.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x1C0035100 (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x1C0035148 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbp
  const EVENT_DESCRIPTOR *v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // edi
  KIRQL v9; // r10

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = a1 + 328;
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 336));
  v6 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v7 = FlattenEventEntryTree((__int64)v6);
  *(_DWORD *)(a1 + 256) -= v7;
  v8 = v7;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 336), v9);
  ExReleasePushLockExclusiveEx(v5, 0LL);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 32LL), v6);
  return v8;
}
