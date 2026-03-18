/*
 * XREFs of SeQueryTokenTrustLink @ 0x14000F2C0
 * Callers:
 *     PsRestoreImpersonation @ 0x140413BB0 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
