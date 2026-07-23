/*
 * XREFs of SepCopyTokenIntegrity @ 0x14000DC90
 * Callers:
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     SepAdjustPrivileges @ 0x14045ED98 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x1404753D4 (SeIsTokenAssignableToProcess.c)
 *     SeTokenCanImpersonate @ 0x1404F28B0 (SeTokenCanImpersonate.c)
 *     SepValidLabelSubjectContext @ 0x14051B374 (SepValidLabelSubjectContext.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140012AEC (SepLocateTokenIntegrity.c)
 */

__int64 SepCopyTokenIntegrity()
{
  __int64 TokenIntegrity; // rax
  __int64 v1; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity();
  if ( TokenIntegrity )
  {
    *(_QWORD *)v1 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
    *(_DWORD *)(v1 + 8) = result;
  }
  else
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)v1 = SeUntrustedMandatorySid;
    *(_DWORD *)(v1 + 8) = 96;
  }
  return result;
}
