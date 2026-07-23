/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x180089B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0x7FFE02F0] >> 9) & 1;
}
