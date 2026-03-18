/*
 * XREFs of CmpTryConvertKcbLockSharedToExclusive @ 0x140402A94
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 * Callees:
 *     CmpLockTableConvertSharedToExclusive @ 0x1401B529C (CmpLockTableConvertSharedToExclusive.c)
 */

char __fastcall CmpTryConvertKcbLockSharedToExclusive(__int64 a1)
{
  char v1; // bl
  bool v2; // zf

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), 1LL, 17LL) != 17 )
    return 0;
  v2 = (*(_DWORD *)(a1 + 4) & 0x100000) == 0;
  *(_QWORD *)(a1 + 48) = KeGetCurrentThread();
  if ( !v2 )
    CmpLockTableConvertSharedToExclusive(a1, *(_DWORD *)(a1 + 60));
  return v1;
}
