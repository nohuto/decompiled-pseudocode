/*
 * XREFs of MiUpdateActiveSubsection @ 0x1401EAC88
 * Callers:
 *     MmExtendSection @ 0x1405218EC (MmExtendSection.c)
 * Callees:
 *     MiReferenceSubsection @ 0x140021B6C (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x140022774 (MiDecrementSubsections.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiUpdateActiveSubsection(_QWORD *BugCheckParameter2)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // bp
  unsigned int FileExtents; // esi

  v2 = (volatile LONG *)(*BugCheckParameter2 + 72LL);
  v3 = ExAcquireSpinLockExclusive(v2);
  if ( (int)MiReferenceSubsection((__int64)BugCheckParameter2) >= 2 )
  {
    ExReleaseSpinLockExclusive(v2, v3);
    FileExtents = MiAllocateFileExtents((ULONG_PTR)BugCheckParameter2, 0);
    v3 = ExAcquireSpinLockExclusive(v2);
    MiDecrementSubsections((__int64)BugCheckParameter2, (__int64)BugCheckParameter2, 1u);
  }
  else
  {
    FileExtents = 0;
  }
  ExReleaseSpinLockExclusive(v2, v3);
  return FileExtents;
}
