/*
 * XREFs of MiIncrementSubsectionViewCount @ 0x14002CAA0
 * Callers:
 *     MiReferenceSubsection @ 0x1400216EC (MiReferenceSubsection.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiReferenceActiveSubsection @ 0x14002CA00 (MiReferenceActiveSubsection.c)
 *     MmPurgeSection @ 0x140072630 (MmPurgeSection.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiPrepareSegmentForDeletion @ 0x14008F8B4 (MiPrepareSegmentForDeletion.c)
 *     MiRetainSubsection @ 0x1400A2ABC (MiRetainSubsection.c)
 *     MiSetSubsectionBase @ 0x1400B29F0 (MiSetSubsectionBase.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 */

__int64 __fastcall MiIncrementSubsectionViewCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v4; // r9
  unsigned __int16 v5; // dx
  int *v6; // r10
  unsigned __int16 v7; // ax
  int *v8; // rax
  int v9; // edx

  v2 = 2;
  if ( (a2 & 1) != 0 && !(unsigned int)MiSubsectionUsingExtents(a1, a2) )
  {
    v5 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
    v6 = v5 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v5);
    if ( (v4 & 4) != 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v7 = WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback);
      v8 = v7 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v7);
    }
    if ( v8 != v6 )
    {
      if ( v6 != MiSystemPartition )
      {
        ++dword_140327048;
        return 0LL;
      }
      v9 = *(_DWORD *)(a1 + 48);
      if ( v9 != -1 )
      {
        if ( !v9 )
        {
          if ( (v4 & 8) == 0 )
            return 1LL;
          v2 = 3;
        }
        *(_DWORD *)(a1 + 48) = v9 + 1;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 34) & 1) == 0 )
    ++*(_QWORD *)(a1 + 96);
  return v2;
}
