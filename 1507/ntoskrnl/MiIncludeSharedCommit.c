/*
 * XREFs of MiIncludeSharedCommit @ 0x14008AF50
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140089C74 (MiReleaseControlAreaCharges.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x14051B06C (MiUpdateProcessSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_14034E9A0 && a1 != qword_14034E990 && !*(_QWORD *)(a1 + 64);
}
