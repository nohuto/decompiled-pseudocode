/*
 * XREFs of MiPerformMemoryChange @ 0x1401D1E3C
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1401331EC (MiInitializeNonPagedPoolThresholds.c)
 */

void __fastcall MiPerformMemoryChange(__int64 a1, __int64 a2, void **a3, __int64 *a4, char a5)
{
  unsigned __int64 v6; // rsi
  KIRQL v10; // al
  _QWORD *v11; // r10
  KIRQL v12; // r15
  void *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  void *v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR v19; // rax
  __int64 v20; // rdx
  __int64 i; // rdx

  v6 = a1 + a2;
  v10 = ExAcquireSpinLockExclusive(&dword_1402FFE20);
  v11 = MmPhysicalMemoryBlock;
  v12 = v10;
  v13 = *a3;
  --*((_QWORD *)MmPhysicalMemoryBlock - 1);
  v14 = *(v11 - 1);
  v15 = 0LL;
  v16 = qword_1402FFD78;
  v17 = 0LL;
  if ( !v14 )
    v17 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = v13;
  --*(_QWORD *)(qword_1402FFD78 - 8);
  v18 = *(_QWORD *)(v16 - 8);
  v19 = v6 - 1;
  *a3 = v17;
  v20 = *a4;
  if ( !v18 )
    v15 = qword_1402FFD78;
  *a4 = v15;
  qword_1402FFD78 = v20;
  if ( (a5 & 1) != 0 )
  {
    if ( v19 > BugCheckParameter3 )
      BugCheckParameter3 = v6 - 1;
    if ( (a5 & 4) == 0 )
      qword_140301390 += a2;
  }
  else
  {
    if ( v19 == BugCheckParameter3 )
      BugCheckParameter3 = a1 - 1;
    qword_140301390 -= a2;
  }
  MiInitializeNonPagedPoolThresholds();
  for ( i = qword_140301078; (__int64 *)i != &qword_140301078; i = *(_QWORD *)i )
  {
    if ( v6 > *(_QWORD *)(i + 16) + 1LL )
      *(_DWORD *)(i + 24) = 1;
  }
  ExReleaseSpinLockExclusive(&dword_1402FFE20, v12);
}
