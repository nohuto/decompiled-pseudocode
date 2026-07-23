/*
 * XREFs of PsRevertToSelf @ 0x14067F0B0
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

void PsRevertToSelf(void)
{
  PsRevertThreadToSelf(KeGetCurrentThread());
}
