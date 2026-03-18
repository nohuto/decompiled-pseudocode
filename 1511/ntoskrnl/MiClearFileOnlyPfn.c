/*
 * XREFs of MiClearFileOnlyPfn @ 0x1401E3318
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  _OWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF

  memset(v5, 0, sizeof(v5));
  *((_QWORD *)&v5[1] + 1) |= 0x8000000000000000uLL;
  BYTE2(v5[2]) = BYTE2(v5[2]) & 0x38 | 0x45;
  v2 = *((_QWORD *)&v5[2] + 1);
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
    v2 = *((_QWORD *)&v5[2] + 1) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  v3 = v5[1];
  *(_OWORD *)a1 = v5[0];
  *((_QWORD *)&v5[2] + 1) = v2 | 0x30000000000000LL;
  v4 = v5[2];
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1402FE3B0);
  *(_QWORD *)a1 = qword_1402FE3A8;
  qword_1402FE3A8 = a1;
  if ( !byte_1402FE3D8 )
  {
    stru_1402FE3B8.List.Flink = 0LL;
    stru_1402FE3B8.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_1402FE3B8.Parameter = (void *)1;
    ExQueueWorkItem(&stru_1402FE3B8, DelayedWorkQueue);
    byte_1402FE3D8 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1402FE3B0);
}
