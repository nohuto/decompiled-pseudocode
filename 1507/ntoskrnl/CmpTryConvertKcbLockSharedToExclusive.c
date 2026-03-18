/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x14042A83C
 * Callers:
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 * Callees:
 *     CmpLockTableConvertSharedToExclusive @ 0x1401DFFD4 (CmpLockTableConvertSharedToExclusive.c)
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
