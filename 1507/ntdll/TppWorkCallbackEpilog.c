/*
 * XREFs of TppWorkCallbackEpilog @ 0x18003D750
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x18003D7D0 (TppWorkpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppWorkCallbackEpilog(__int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(PVOID); // rdi

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = **(__int64 (__fastcall ***)(PVOID))(a1 + 8);
    if ( v2 == TppWorkpFree )
      return TppWorkpFree((PVOID)a1);
    else
      return v2((PVOID)a1);
  }
  return result;
}
