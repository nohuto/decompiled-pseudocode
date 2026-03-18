/*
 * XREFs of SeCompareSigningLevels @ 0x140448D98
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     SeQuerySigningPolicy @ 0x14044869C (SeQuerySigningPolicy.c)
 *     PsConvertToGuiThread @ 0x140448CAC (PsConvertToGuiThread.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     SeGetImageRequiredSigningLevel @ 0x1404A967C (SeGetImageRequiredSigningLevel.c)
 *     SepIsImageInMinTcbList @ 0x1404AF7AC (SepIsImageInMinTcbList.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x1404C06B8 (SeCompareSigningLevelsForAuditableProcess.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14063ED5C (PsQueryProcessSignatureMitigationPolicy.c)
 * Callees:
 *     <none>
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1402DBE00 )
    return qword_1402DBE00();
  return result;
}
