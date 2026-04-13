/*
 * XREFs of sub_18001A670 @ 0x18001A670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001D5FC @ 0x18001D5FC (sub_18001D5FC.c)
 */

__int64 __fastcall sub_18001A670(__int64 a1, signed __int32 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 76), a2, 1);
  if ( (_DWORD)result == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 72), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return sub_18001D5FC(a1 - 168, *(unsigned int *)(a1 + 76));
  }
  return result;
}
