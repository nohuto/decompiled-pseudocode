/*
 * XREFs of PsIsThreadTerminating @ 0x1401231AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsThreadTerminating(PETHREAD Thread)
{
  return *((_DWORD *)&Thread[1].SwapListEntry + 3) & 1;
}
