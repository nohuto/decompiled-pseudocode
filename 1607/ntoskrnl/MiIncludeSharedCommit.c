/*
 * XREFs of MiIncludeSharedCommit @ 0x140027730
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140026ED0 (MiReleaseControlAreaCharges.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1404A639C (MiUpdateProcessSharedCommit.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_1403267E0 && a1 != qword_1403267D0 && !*(_QWORD *)(a1 + 64);
}
