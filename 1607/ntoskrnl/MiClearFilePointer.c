/*
 * XREFs of MiClearFilePointer @ 0x14008FE24
 * Callers:
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x14008FD50 (MiCheckForControlAreaDeletion.c)
 *     MiDestroySection @ 0x140111D20 (MiDestroySection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiClearFilePointer(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  _QWORD *v4; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x80000) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 56) = v1 | 0x80000;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326540);
    v4 = *(_QWORD **)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      v4[2] = 0LL;
    else
      *v4 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326540);
  }
}
