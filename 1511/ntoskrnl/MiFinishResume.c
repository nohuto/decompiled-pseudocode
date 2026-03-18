/*
 * XREFs of MiFinishResume @ 0x1401121BC
 * Callers:
 *     <none>
 * Callees:
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiPurgeZeroList @ 0x14011224C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14011236C (MiPurgePartitionStandby.c)
 *     MiGetNextPartition @ 0x14011B670 (MiGetNextPartition.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rdi
  void *i; // rcx
  __int64 NextPartition; // rax
  _DWORD *v5; // rbx

  v2 = MiReferencePageRuns((__int64)MiSystemPartition, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextPartition = MiGetNextPartition(i);
    v5 = (_DWORD *)NextPartition;
    if ( !NextPartition )
      break;
    if ( a1 )
    {
      MiPurgePartitionStandby(NextPartition, a1);
      v5[1090] = 0;
    }
    MiPurgeZeroList(v5);
  }
  if ( v2 )
    MiDereferencePageRuns(v2);
  _InterlockedDecrement(&dword_1402FF6C8);
  stru_1402FEC68.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_1402FEC50, 0, 0);
}
