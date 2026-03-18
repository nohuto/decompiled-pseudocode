/*
 * XREFs of SepCopyTokenIntegrity @ 0x140004E6C
 * Callers:
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     SepValidLabelSubjectContext @ 0x1403C2800 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x1403C2C94 (SepAdjustPrivileges.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140004E94 (SepLocateTokenIntegrity.c)
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
