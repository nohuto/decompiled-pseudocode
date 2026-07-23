/*
 * XREFs of SeCompareSigningLevels @ 0x14045C0B0
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     SeQuerySigningPolicy @ 0x14045B8FC (SeQuerySigningPolicy.c)
 *     PsConvertToGuiThread @ 0x14045BF90 (PsConvertToGuiThread.c)
 *     SepIsImageInMinTcbList @ 0x14045CC9C (SepIsImageInMinTcbList.c)
 *     SeGetImageRequiredSigningLevel @ 0x140503AB4 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x14050491C (SeCompareSigningLevelsForAuditableProcess.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x14067D4A8 (PsQueryProcessSignatureMitigationPolicy.c)
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
