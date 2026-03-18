/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140096E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
