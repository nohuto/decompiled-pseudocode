/*
 * XREFs of _SetProgmanWindow @ 0x1C0244900
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall SetProgmanWindow(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a1 && *(_QWORD *)(v2 + 192) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  else
  {
    HMAssignmentLock(v2 + 192, a1);
    return 1LL;
  }
}
