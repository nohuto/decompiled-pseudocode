/*
 * XREFs of SepIdAssignableAsOwner @ 0x1404A2C14
 * Callers:
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     SepValidOwnerSubjectContext @ 0x1404A2B30 (SepValidOwnerSubjectContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepIdAssignableAsOwner(__int64 a1, unsigned int a2)
{
  return !a2 || (*(_BYTE *)(16LL * a2 + *(_QWORD *)(a1 + 152) + 8) & 8) != 0;
}
