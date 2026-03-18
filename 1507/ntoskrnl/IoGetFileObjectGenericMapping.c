/*
 * XREFs of IoGetFileObjectGenericMapping @ 0x14051F84C
 * Callers:
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DFAC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     VfUtilIsLocalSystem @ 0x1407378E4 (VfUtilIsLocalSystem.c)
 *     VerifierIoGetFileObjectGenericMapping @ 0x140741F80 (VerifierIoGetFileObjectGenericMapping.c)
 * Callees:
 *     <none>
 */

PGENERIC_MAPPING IoGetFileObjectGenericMapping(void)
{
  return (PGENERIC_MAPPING)&IopFileMapping;
}
