/*
 * XREFs of TppWorkCallbackEpilog @ 0x18002D3C0
 * Callers:
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 * Callees:
 *     TppWorkpFree @ 0x18000CA40 (TppWorkpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

LOGICAL __fastcall TppWorkCallbackEpilog(__int64 a1)
{
  LOGICAL result; // eax
  LOGICAL (__fastcall *v2)(PVOID); // rdi

  result = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v2 = **(LOGICAL (__fastcall ***)(PVOID))(a1 + 8);
    if ( v2 == TppWorkpFree )
      return TppWorkpFree((PVOID)a1);
    else
      return v2((PVOID)a1);
  }
  return result;
}
