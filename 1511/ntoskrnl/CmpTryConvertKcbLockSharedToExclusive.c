/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x1403F4074
 * Callers:
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1403F3E7C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 * Callees:
 *     CmpLockTableConvertSharedToExclusive @ 0x1401AA088 (CmpLockTableConvertSharedToExclusive.c)
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // bl
  bool v2; // zf

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 1LL, 17LL) != 17 )
    return 0;
  v2 = (*(_DWORD *)(a1 + 4) & 0x100000) == 0;
  *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  if ( !v2 )
    CmpLockTableConvertSharedToExclusive(a1, *(_DWORD *)(a1 + 64));
  return v1;
}
