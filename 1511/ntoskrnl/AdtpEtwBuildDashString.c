/*
 * XREFs of AdtpEtwBuildDashString @ 0x1404C6638
 * Callers:
 *     AdtpPackageParameters @ 0x14013B28C (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x14013B7E4 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14021D6EC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

void *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = &unk_140244D08;
  *(_QWORD *)a1 = &unk_140244D08;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
