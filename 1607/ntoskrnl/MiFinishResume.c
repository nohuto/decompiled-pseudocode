/*
 * XREFs of MiFinishResume @ 0x140120570
 * Callers:
 *     <none>
 * Callees:
 *     MiGetNextPartition @ 0x140001C94 (MiGetNextPartition.c)
 *     MiDereferencePageRuns @ 0x140107058 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401070F0 (MiReferencePageRuns.c)
 *     MiPurgeZeroList @ 0x140120600 (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14012093C (MiPurgePartitionStandby.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 *i; // rcx
  __int64 *NextPartition; // rax
  __int64 *v5; // rbx

  v2 = MiReferencePageRuns((__int64)MiSystemPartition, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextPartition = MiGetNextPartition(i);
    v5 = NextPartition;
    if ( !NextPartition )
      break;
    if ( a1 )
    {
      MiPurgePartitionStandby(NextPartition, a1);
      *((_DWORD *)v5 + 1122) = 0;
    }
    MiPurgeZeroList(v5);
  }
  if ( v2 )
    MiDereferencePageRuns(v2);
  _InterlockedDecrement(&dword_140327788);
  stru_140327038.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140327020, 0, 0);
}
