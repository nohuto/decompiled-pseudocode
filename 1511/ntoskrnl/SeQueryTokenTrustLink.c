/*
 * XREFs of SeQueryTokenTrustLink @ 0x14009E1B8
 * Callers:
 *     PsRestoreImpersonation @ 0x140477920 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
