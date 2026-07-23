/*
 * XREFs of SepIdAssignableAsOwner @ 0x14051B014
 * Callers:
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SepValidOwnerSubjectContext @ 0x14051AF30 (SepValidOwnerSubjectContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_BYTE *)(16LL * a2 + *(_QWORD *)(a1 + 152) + 8) & 8) != 0;
}
