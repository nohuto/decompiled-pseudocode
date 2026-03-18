/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14010DD44
 * Callers:
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x140526F7C (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
