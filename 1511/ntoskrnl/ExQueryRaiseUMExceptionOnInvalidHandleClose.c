/*
 * XREFs of ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x14066C9CC
 * Callers:
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExQueryRaiseUMExceptionOnInvalidHandleClose(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 44) >> 4) & 1;
}
