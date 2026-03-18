/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x1404A6F7C
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401A9E44 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1406B75F0 (VfUtilIsLocalSystem.c)
 *     VerifierIoGetFileObjectGenericMapping @ 0x1406C078C (VerifierIoGetFileObjectGenericMapping.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
