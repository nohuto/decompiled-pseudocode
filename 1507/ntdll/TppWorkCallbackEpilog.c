/*
 * XREFs of TppWorkCallbackEpilog @ 0x18003D750
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkpFree @ 0x18003D7D0 (TppWorkpFree.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppWorkCallbackEpilog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 (__fastcall *v5)(__int64); // rdi

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v5 = **(__int64 (__fastcall ***)(__int64))(a1 + 8);
    if ( (char *)v5 == (char *)TppWorkpFree )
      return TppWorkpFree(a1, a2, a3, a4);
    else
      return v5(a1);
  }
  return result;
}
