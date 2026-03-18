/*
 * XREFs of UpdateInputContext @ 0x1C00EED94
 * Callers:
 *     NtUserUpdateInputContext @ 0x1C00EED10 (NtUserUpdateInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall UpdateInputContext(_QWORD *a1, int a2, __int64 a3)
{
  int v4; // ecx

  if ( *(_QWORD *)(a1[2] + 384LL) != *(_QWORD *)(gptiCurrent + 384LL) )
  {
    v4 = 5;
LABEL_11:
    UserSetLastError(v4);
    return 0LL;
  }
  if ( !a2 )
  {
    if ( !a1[6] )
    {
      a1[6] = a3;
      return 1LL;
    }
    v4 = 1247;
    goto LABEL_11;
  }
  if ( a2 == 1 )
  {
    a1[7] = a3;
    return 1LL;
  }
  return 0LL;
}
