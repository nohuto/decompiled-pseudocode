/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140683B38
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] >> 9) & 1;
}
