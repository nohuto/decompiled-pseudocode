/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x140141F28
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000001;
}
