/*
 * XREFs of PsRevertToSelf @ 0x14067EFCC
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

void PsRevertToSelf(void)
{
  PsRevertThreadToSelf(KeGetCurrentThread());
}
