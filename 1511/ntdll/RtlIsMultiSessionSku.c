/*
 * XREFs of RtlIsMultiSessionSku @ 0x18005DB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  return (MEMORY[0x7FFE02F0] >> 8) & 1;
}
