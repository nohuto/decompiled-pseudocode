/*
 * XREFs of sub_1C00A0E64 @ 0x1C00A0E64
 * Callers:
 *     sub_1C00A0D40 @ 0x1C00A0D40 (sub_1C00A0D40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00A0E64(__int64 a1)
{
  __int64 v2; // rax

  if ( !(_DWORD)a1 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v2);
    return 0xFFFFFFFFLL;
  }
  if ( (int)a1 <= 19 )
    return 0xFFFFFFFFLL;
  if ( (int)a1 <= 21 )
    return 4LL;
  if ( (_DWORD)a1 == 22 )
    return 0xFFFFFFFFLL;
  if ( (_DWORD)a1 == 32 )
    return 1LL;
  if ( (_DWORD)a1 != 23 )
  {
    if ( (_DWORD)a1 == 41 )
      return 2LL;
    return 0xFFFFFFFFLL;
  }
  return 3LL;
}
