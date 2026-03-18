/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140113F88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
