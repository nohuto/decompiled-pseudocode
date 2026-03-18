/*
 * XREFs of AlpcpFreeCompletionList @ 0x1404F0034
 * Callers:
 *     AlpcpDoPortCleanup @ 0x14040ABA4 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x140472CD8 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1404F0088 (AlpcpUnregisterCompletionListDatabase.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
