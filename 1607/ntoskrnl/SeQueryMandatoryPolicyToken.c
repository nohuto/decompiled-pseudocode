/*
 * XREFs of SeQueryMandatoryPolicyToken @ 0x140087EB4
 * Callers:
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     SepCopyTokenAccessInformation @ 0x1404A05F8 (SepCopyTokenAccessInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 212);
  return 0LL;
}
