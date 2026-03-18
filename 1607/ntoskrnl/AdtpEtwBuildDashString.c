/*
 * XREFs of AdtpEtwBuildDashString @ 0x1404F14FC
 * Callers:
 *     AdtpPackageParameters @ 0x140144450 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x1401449A8 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237DBC (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

void *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = &unk_140261FC8;
  *(_QWORD *)a1 = &unk_140261FC8;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
