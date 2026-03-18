/*
 * XREFs of SeQueryTokenTrustLink @ 0x1400151AC
 * Callers:
 *     PsRestoreImpersonation @ 0x140435590 (PsRestoreImpersonation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustLink(__int64 a1)
{
  return *(_QWORD *)(a1 + 1112);
}
