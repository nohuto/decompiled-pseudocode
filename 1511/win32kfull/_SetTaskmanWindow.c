/*
 * XREFs of _SetTaskmanWindow @ 0x1C0113A80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

__int64 __fastcall SetTaskmanWindow(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a1 && *(_QWORD *)(v2 + 184) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  else
  {
    HMAssignmentLock(v2 + 184, a1);
    return 1LL;
  }
}
