/*
 * XREFs of SepLocateTokenIntegrity @ 0x14004563C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x14002D93C (SepCopyTokenIntegrity.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x1406D44D4 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepLocateTokenIntegrity(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
