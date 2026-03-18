/*
 * XREFs of AdtpEtwBuildDashString @ 0x14054FEC4
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140164B58 (AdtpBuildMultiSzStringListString.c)
 * Callees:
 *     <none>
 */

void *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = &unk_140294D18;
  *(_QWORD *)a1 = &unk_140294D18;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
