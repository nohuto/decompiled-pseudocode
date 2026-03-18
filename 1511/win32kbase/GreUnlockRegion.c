/*
 * XREFs of GreUnlockRegion @ 0x1C0077960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreUnlockRegion(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
    return 1LL;
  }
  return result;
}
