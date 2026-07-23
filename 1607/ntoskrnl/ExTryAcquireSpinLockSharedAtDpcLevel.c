/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14022DB34
 * Callers:
 *     MmReadProcessPageTables @ 0x1401EED54 (MmReadProcessPageTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  signed __int32 v1; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1, a1);
  _m_prefetchw(a1);
  v1 = *a1 & 0x7FFFFFFF;
  return v1 == _InterlockedCompareExchange(a1, v1 + 1, v1);
}
