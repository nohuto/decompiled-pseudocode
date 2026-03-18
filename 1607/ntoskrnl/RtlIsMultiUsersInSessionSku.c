/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140683A54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlIsMultiUsersInSessionSku()
{
  return (MEMORY[0xFFFFF780000002F0] >> 9) & 1;
}
