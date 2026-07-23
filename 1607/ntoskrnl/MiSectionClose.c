/*
 * XREFs of MiSectionClose @ 0x14042D1A8
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 */

__int64 __fastcall MiSectionClose(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  v2 = MiSectionControlArea(a2);
  return MiRemoveSharedCommitNode(v2, v3, 0LL);
}
