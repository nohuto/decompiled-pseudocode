/*
 * XREFs of _SetFallbackForeground @ 0x1C01D1344
 * Callers:
 *     NtUserSetFallbackForeground @ 0x1C0220000 (NtUserSetFallbackForeground.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetFallbackForeground(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a1 )
    HMAssignmentLock(*(_QWORD *)(a1 + 24) + 240LL, a1);
  else
    HMAssignmentUnlock(*(_QWORD *)(gptiCurrent + 416LL) + 240LL);
  result = 1LL;
  if ( a2 != 1 )
    gpqForegroundPrev = 0LL;
  return result;
}
