/*
 * XREFs of MiIncludeSharedCommit @ 0x14006DBC0
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1400A8680 (MiReleaseControlAreaCharges.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14041B910 (MiRemoveSharedCommitNode.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MiUpdateProcessSharedCommit @ 0x14049C8D0 (MiUpdateProcessSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_1402FE4D8 && a1 != qword_1402FE4C8 && !*(_QWORD *)(a1 + 64);
}
