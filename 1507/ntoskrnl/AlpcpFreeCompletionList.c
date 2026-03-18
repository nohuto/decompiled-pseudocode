/*
 * XREFs of AlpcpFreeCompletionList @ 0x14052D2E8
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1404A34DC (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x14052C6F0 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x14052D33C (AlpcpUnregisterCompletionListDatabase.c)
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
