/*
 * XREFs of _SetFallbackForeground @ 0x1C01D2FBC
 * Callers:
 *     NtUserSetFallbackForeground @ 0x1C021FE20 (NtUserSetFallbackForeground.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetFallbackForeground(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a1 )
    HMAssignmentLock(*(_QWORD *)(a1 + 24) + 288LL, a1);
  else
    HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 408LL) + 288LL);
  result = 1LL;
  if ( a2 != 1 )
    gpqForegroundPrev = 0LL;
  return result;
}
