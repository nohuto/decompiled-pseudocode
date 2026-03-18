/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1404C9720
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4690 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140702DE8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
