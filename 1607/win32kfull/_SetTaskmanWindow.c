/*
 * XREFs of _SetTaskmanWindow @ 0x1C0133A60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall SetTaskmanWindow(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a1 && *(_QWORD *)(v2 + 184) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  else
  {
    HMAssignmentLock(v2 + 184, a1);
    return 1LL;
  }
}
