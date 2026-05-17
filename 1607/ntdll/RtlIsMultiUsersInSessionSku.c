/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x180089B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0x7FFE02F0] >> 9) & 1;
}
