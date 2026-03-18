/*
 * XREFs of PsGetThreadHardErrorsAreDisabled @ 0x140141DA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 1724) >> 4) & 1;
}
