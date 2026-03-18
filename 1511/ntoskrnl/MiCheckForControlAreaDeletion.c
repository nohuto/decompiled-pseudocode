/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x1400B54F4
 * Callers:
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiClearFilePointer @ 0x1400EA004 (MiClearFilePointer.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  int v2; // r8d
  int *v3; // rax
  int v4; // r8d
  int *v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v2 = *(_DWORD *)(a1 + 56);
    if ( (v2 & 1) == 0 && (v2 & 0x100) == 0 )
    {
      v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
      *(_DWORD *)(a1 + 56) = v4 | 1;
      v5 = v3;
      MiClearFilePointer(a1, v6);
      MiRemoveUnusedSegment(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(v5 + 384);
      v7 = (__int64 *)*((_QWORD *)v5 + 164);
      v8 = a1 + 8;
      *(_QWORD *)(a1 + 8) = v5 + 326;
      *(_QWORD *)(a1 + 16) = v7;
      if ( (int *)*v7 != v5 + 326 )
        __fastfail(3u);
      *v7 = v8;
      *((_QWORD *)v5 + 164) = v8;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5 + 384);
      KeReleaseSemaphoreEx((__int64)(v5 + 318), 0, 1LL, v9, 0);
    }
  }
}
