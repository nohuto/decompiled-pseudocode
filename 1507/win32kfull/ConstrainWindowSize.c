/*
 * XREFs of ConstrainWindowSize @ 0x1C005CC58
 * Callers:
 *     xxxAdjustSize @ 0x1C005CB5C (xxxAdjustSize.c)
 *     ConstrainWindowSIZERECT @ 0x1C005CC34 (ConstrainWindowSIZERECT.c)
 *     NtUserSetWindowPos @ 0x1C0084E30 (NtUserSetWindowPos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConstrainWindowSize(int *a1, int *a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // ecx

  v2 = *a1;
  result = 0xFFFFLL;
  if ( *a1 > 0xFFFF )
  {
    v2 = 0xFFFF;
  }
  else if ( v2 < 0 )
  {
    v2 = 0;
  }
  *a1 = v2;
  v4 = *a2;
  if ( *a2 <= 0xFFFF )
  {
    result = (unsigned int)v4;
    if ( v4 < 0 )
      result = 0LL;
  }
  *a2 = result;
  return result;
}
