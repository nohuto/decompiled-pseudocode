/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x14008F4B0
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiClearFilePointer @ 0x14008F584 (MiClearFilePointer.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  int v2; // r8d
  int *v3; // rax
  int v4; // r8d
  int *v5; // rbx
  int **v6; // rdx
  int *v7; // rax
  int v8; // r9d

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v2 = *(_DWORD *)(a1 + 56);
    if ( (v2 & 1) == 0 && (v2 & 0x100) == 0 )
    {
      v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 60) & 0x3FF);
      *(_DWORD *)(a1 + 56) = v4 | 1;
      v5 = v3;
      MiClearFilePointer(a1);
      MiRemoveUnusedSegment(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel(v5 + 416);
      v6 = (int **)*((_QWORD *)v5 + 175);
      v7 = (int *)(a1 + 8);
      if ( *v6 != v5 + 348 )
        __fastfail(3u);
      *(_QWORD *)v7 = v5 + 348;
      *(_QWORD *)(a1 + 16) = v6;
      *v6 = v7;
      *((_QWORD *)v5 + 175) = v7;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5 + 416);
      KeReleaseSemaphoreEx((_DWORD)v5 + 1360, 0, 1, v8, 0);
    }
  }
}
