/*
 * XREFs of SepCopyTokenIntegrity @ 0x14000E110
 * Callers:
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     SepAdjustPrivileges @ 0x14045FEC8 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140476504 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x1404A2F74 (SepValidLabelSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140012F6C (SepLocateTokenIntegrity.c)
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
