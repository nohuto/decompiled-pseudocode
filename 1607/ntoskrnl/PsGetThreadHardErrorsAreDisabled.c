/*
 * XREFs of PsGetThreadHardErrorsAreDisabled @ 0x14014C1A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 1728) >> 4) & 1;
}
