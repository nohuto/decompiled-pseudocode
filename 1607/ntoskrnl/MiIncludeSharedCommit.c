/*
 * XREFs of MiIncludeSharedCommit @ 0x140027BB0
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140027350 (MiReleaseControlAreaCharges.c)
 *     MiInsertSharedCommitNode @ 0x14042E680 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042EA70 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1404BA66C (MiUpdateProcessSharedCommit.c)
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_1403267A0 && a1 != qword_140326790 && !*(_QWORD *)(a1 + 64);
}
