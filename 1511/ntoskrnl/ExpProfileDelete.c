/*
 * XREFs of ExpProfileDelete @ 0x140675760
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     KeStopProfile @ 0x1401C7E10 (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpProfileDelete(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 48) )
  {
    KeStopProfile(*(_QWORD *)(a1 + 40));
    MmUnmapLockedPages(*(PVOID *)(a1 + 48), *(PMDL *)(a1 + 56));
    MmUnlockPages(*(PMDL *)(a1 + 56));
    ExFreePoolWithTag(*(PVOID *)(a1 + 40), 0);
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x66507845u);
}
