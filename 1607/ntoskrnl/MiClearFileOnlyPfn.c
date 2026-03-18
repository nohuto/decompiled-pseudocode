/*
 * XREFs of MiClearFileOnlyPfn @ 0x1401ED404
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void __fastcall MiClearFileOnlyPfn(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  _OWORD v5[3]; // [rsp+20h] [rbp-30h] BYREF

  memset(v5, 0, sizeof(v5));
  *((_QWORD *)&v5[1] + 1) |= 0x8000000000000000uLL;
  BYTE2(v5[2]) = BYTE2(v5[2]) & 0x3F | 0x40;
  BYTE2(v5[2]) = BYTE2(v5[2]) & 0xF8 | 5;
  v2 = *((_QWORD *)&v5[2] + 1);
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
    v2 = *((_QWORD *)&v5[2] + 1) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  v3 = v5[1];
  *(_OWORD *)a1 = v5[0];
  *((_QWORD *)&v5[2] + 1) = v2 | 0x30000000000000LL;
  v4 = v5[2];
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140326678);
  *(_QWORD *)a1 = qword_140326670;
  qword_140326670 = a1;
  if ( !byte_1403266A0 )
  {
    stru_140326680.List.Flink = 0LL;
    stru_140326680.WorkerRoutine = (void (__fastcall *)(void *))MiDeleteExtentPfns;
    stru_140326680.Parameter = (void *)1;
    ExQueueWorkItem(&stru_140326680, DelayedWorkQueue);
    byte_1403266A0 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140326678);
}
