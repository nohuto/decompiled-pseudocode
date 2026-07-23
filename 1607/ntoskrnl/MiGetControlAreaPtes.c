/*
 * XREFs of MiGetControlAreaPtes @ 0x14002C3F0
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  volatile LONG *v4; // rdi
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  KIRQL i; // si
  unsigned __int64 v9; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
    return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  v4 = (volatile LONG *)(a1 + 72);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_QWORD *)(a1 + 240);
  v7 = 0LL;
  for ( i = v5; v6; v6 = *(_QWORD *)(v6 + 8) )
    v7 = v6;
  v9 = *(unsigned int *)(v7 - 12)
     + (*(unsigned int *)(v7 - 20) | ((unsigned __int64)(*(_WORD *)(v7 - 24) & 0xFFC0) << 26));
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  __writecr8(i);
  return v9;
}
