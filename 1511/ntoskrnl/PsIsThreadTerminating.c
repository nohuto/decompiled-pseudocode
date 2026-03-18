/*
 * XREFs of PsIsThreadTerminating @ 0x140091D80
 * Callers:
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *((_DWORD *)&Thread[1].SwapListEntry + 3) & 1;
}
