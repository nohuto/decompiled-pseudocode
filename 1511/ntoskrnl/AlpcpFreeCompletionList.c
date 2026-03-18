/*
 * XREFs of AlpcpFreeCompletionList @ 0x1404C584C
 * Callers:
 *     NtAlpcSetInformation @ 0x14044FF74 (NtAlpcSetInformation.c)
 *     AlpcpDoPortCleanup @ 0x14047EB1C (AlpcpDoPortCleanup.c)
 * Callees:
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1404C58A0 (AlpcpUnregisterCompletionListDatabase.c)
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
