/*
 * XREFs of TppIopCallbackEpilog @ 0x18003BFD0
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppIopCallbackEpilog(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  return result;
}
