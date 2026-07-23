/*
 * XREFs of MiFreeLargePages @ 0x1401F535C
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiFreeLargePageMemory @ 0x1400900D0 (MiFreeLargePageMemory.c)
 */

void __fastcall MiFreeLargePages(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  int *v5; // rbx

  if ( a1 )
  {
    v1 = a1;
    v2 = 0LL;
    do
    {
      v3 = *(_QWORD *)v1;
      v4 = MiLockPageInline(v1);
      *(_QWORD *)(v1 + 24) = *(_QWORD *)(v1 + 24) & 0xC000000000000000uLL | 1;
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      v2 += MiFreeLargePageMemory(
              (v1 + 0x58000000000LL) / 48,
              (*(_QWORD *)(v1 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFBLL,
              0);
      v1 = v3;
    }
    while ( v3 );
    if ( v2 )
    {
      v5 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback));
      MiReturnCommit((__int64)v5, v2);
      if ( v5 == MiSystemPartition )
        MiReturnResidentAvailable(v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 816, v2);
    }
  }
}
