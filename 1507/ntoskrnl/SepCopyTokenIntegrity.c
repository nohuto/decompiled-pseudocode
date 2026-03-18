/*
 * XREFs of SepCopyTokenIntegrity @ 0x14002D93C
 * Callers:
 *     SepValidLabelSubjectContext @ 0x14046DA40 (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14046DB50 (SepAdjustPrivileges.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14004563C (SepLocateTokenIntegrity.c)
 */

PSID __fastcall SepCopyTokenIntegrity(__int64 a1)
{
  __int64 TokenIntegrity; // rax
  __int64 v2; // rdx
  PSID result; // rax

  TokenIntegrity = SepLocateTokenIntegrity(a1);
  if ( TokenIntegrity )
  {
    *(_QWORD *)v2 = *(_QWORD *)TokenIntegrity;
    result = (PSID)*(unsigned int *)(TokenIntegrity + 8);
    *(_DWORD *)(v2 + 8) = (_DWORD)result;
  }
  else
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)v2 = SeUntrustedMandatorySid;
    *(_DWORD *)(v2 + 8) = 96;
  }
  return result;
}
