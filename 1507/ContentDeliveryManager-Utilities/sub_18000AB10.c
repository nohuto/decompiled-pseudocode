/*
 * XREFs of sub_18000AB10 @ 0x18000AB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000AB10(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    return a1;
  return result;
}
