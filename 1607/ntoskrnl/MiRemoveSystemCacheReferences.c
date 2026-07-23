/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x1401E6C20
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiRemoveSystemCacheReferences(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  KIRQL v5; // si
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v6 = MiRemoveViewsFromSection(a1, a2, 2);
  --*(_QWORD *)(v2 + 40);
  LOBYTE(v7) = v5;
  --*(_DWORD *)(v2 + 88);
  v8 = v6;
  result = MiCheckControlArea(v2, v7, v9, v10);
  if ( v8 )
    return MiReturnSubsectionCharges(v8);
  return result;
}
