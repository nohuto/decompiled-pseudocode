/*
 * XREFs of MiUpdateActiveSubsection @ 0x1401EAAB4
 * Callers:
 *     MmExtendSection @ 0x14050494C (MmExtendSection.c)
 * Callees:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
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
