/*
 * XREFs of MiSectionClose @ 0x14041BEFC
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 */

void __fastcall MiSectionClose(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r9

  v2 = MiSectionControlArea(a2);
  MiRemoveSharedCommitNode(v2, v3, 0);
}
