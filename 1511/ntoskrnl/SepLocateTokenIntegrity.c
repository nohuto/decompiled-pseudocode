/*
 * XREFs of SepLocateTokenIntegrity @ 0x140004E94
 * Callers:
 *     SepCopyTokenIntegrity @ 0x140004E6C (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x140651DB8 (SepGetDefaultsSubjectContext.c)
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
