/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1404AF4A0
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4574 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x140702E18 (VfUtilIsLocalSystem.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
