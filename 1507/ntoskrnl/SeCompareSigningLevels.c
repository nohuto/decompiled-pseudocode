/*
 * XREFs of SeCompareSigningLevels @ 0x140509298
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     SeGetImageRequiredSigningLevel @ 0x1405090C8 (SeGetImageRequiredSigningLevel.c)
 *     PsConvertToGuiThread @ 0x1405091AC (PsConvertToGuiThread.c)
 *     SeQuerySigningPolicy @ 0x14050B2FC (SeQuerySigningPolicy.c)
 *     SepIsImageInMinTcbList @ 0x140541C98 (SepIsImageInMinTcbList.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x140555D0C (SeCompareSigningLevelsForAuditableProcess.c)
 * Callees:
 *     <none>
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14032C160 )
    return qword_14032C160();
  return result;
}
