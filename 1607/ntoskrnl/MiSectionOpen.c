/*
 * XREFs of MiSectionOpen @ 0x14042D27C
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 */

__int64 __fastcall MiSectionOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  v4 = MiSectionControlArea(a4);
  return MiInsertSharedCommitNode(v4, v5, 0LL);
}
