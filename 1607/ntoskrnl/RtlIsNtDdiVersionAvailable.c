/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x14014B244
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000002;
}
