/*
 * XREFs of sub_18000B5B0 @ 0x18000B5B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B884 @ 0x18000B884 (sub_18000B884.c)
 */

__int64 __fastcall sub_18000B5B0(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 20) == 1 )
    {
      return sub_18000B5E4(a1, a3);
    }
    else if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      return sub_18000B884(a1, a3);
    }
  }
  return result;
}
