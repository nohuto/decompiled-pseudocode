/*
 * XREFs of AdtpEtwBuildDashString @ 0x1404D35F0
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     AdtpBuildMultiSzStringListString @ 0x140144F18 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     <none>
 */

void *__fastcall AdtpEtwBuildDashString(__int64 a1)
{
  void *result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  result = &unk_140261FE8;
  *(_QWORD *)a1 = &unk_140261FE8;
  *(_DWORD *)(a1 + 8) = 4;
  return result;
}
