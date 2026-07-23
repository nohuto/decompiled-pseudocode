/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x14010C0A4
 * Callers:
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x140518A04 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
