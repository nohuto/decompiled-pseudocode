/*
 * XREFs of MiPerformMemoryChange @ 0x1401E2170
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013C86C (MiInitializeNonPagedPoolThresholds.c)
 */

void __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, char a5)
{
  KIRQL v9; // al
  __int64 v10; // r8
  void *v11; // r9
  void *v12; // rdx
  KIRQL v13; // r14
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG_PTR v17; // rax

  v9 = ExAcquireSpinLockExclusive(&dword_140323628);
  v10 = 0LL;
  v11 = *a3;
  v12 = 0LL;
  v13 = v9;
  v14 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  v15 = qword_140323580;
  if ( v14 )
    v12 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v11;
  *a3 = v12;
  v14 = (*(_QWORD *)(v15 - 8))-- == 1LL;
  v16 = *a4;
  if ( v14 )
    v10 = qword_140323580;
  v17 = a2 + a1 - 1;
  *a4 = v10;
  qword_140323580 = v16;
  if ( (a5 & 1) != 0 )
  {
    if ( v17 > BugCheckParameter3 )
      BugCheckParameter3 = a2 + a1 - 1;
    if ( (a5 & 4) == 0 )
      qword_140324DD0 += a2;
  }
  else
  {
    if ( v17 == BugCheckParameter3 )
      BugCheckParameter3 = a1 - 1;
    qword_140324DD0 -= a2;
  }
  MiInitializeNonPagedPoolThresholds();
  ExReleaseSpinLockExclusive(&dword_140323628, v13);
}
