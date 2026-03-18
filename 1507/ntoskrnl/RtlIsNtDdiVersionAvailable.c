/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x1401701A8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000000;
}
