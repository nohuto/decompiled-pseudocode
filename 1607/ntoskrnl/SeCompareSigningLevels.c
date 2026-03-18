/*
 * XREFs of SeCompareSigningLevels @ 0x14045D1E0
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     SeQuerySigningPolicy @ 0x14045CA2C (SeQuerySigningPolicy.c)
 *     PsConvertToGuiThread @ 0x14045D0C0 (PsConvertToGuiThread.c)
 *     SepIsImageInMinTcbList @ 0x14045DDCC (SepIsImageInMinTcbList.c)
 *     SeGetImageRequiredSigningLevel @ 0x140520A4C (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x1405218BC (SeCompareSigningLevelsForAuditableProcess.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14067D3C4 (PsQueryProcessSignatureMitigationPolicy.c)
 * Callees:
 *     <none>
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140301160 )
    return qword_140301160();
  return result;
}
