/*
 * XREFs of SepIdAssignableAsOwner @ 0x1404AC960
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SepValidOwnerSubjectContext @ 0x1404AC868 (SepValidOwnerSubjectContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_BYTE *)(16LL * a2 + *(_QWORD *)(a1 + 152) + 8) & 8) != 0;
}
