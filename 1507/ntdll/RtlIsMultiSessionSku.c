/*
 * XREFs of RtlIsMultiSessionSku @ 0x18004A400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlIsMultiSessionSku()
{
  return (MEMORY[0x7FFE02F0] >> 8) & 1;
}
