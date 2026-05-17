/*
 * XREFs of TppWorkCallbackEpilog @ 0x18002D3C0
 * Callers:
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 * Callees:
 *     TppWorkpFree @ 0x18000CA40 (TppWorkpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppWorkCallbackEpilog(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(__int64); // rdi

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( v2 == TppWorkpFree )
      return TppWorkpFree(a1);
    else
      return v2(a1);
  }
  return result;
}
