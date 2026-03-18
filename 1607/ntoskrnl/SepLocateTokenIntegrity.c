/*
 * XREFs of SepLocateTokenIntegrity @ 0x140012F6C
 * Callers:
 *     SepCopyTokenIntegrity @ 0x14000E110 (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x140691098 (SepGetDefaultsSubjectContext.c)
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
