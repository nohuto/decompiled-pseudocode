/*
 * XREFs of MiRebuildLargePage @ 0x1401FD6F8
 * Callers:
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     MiGetNodeStandbyPageCount @ 0x1401F3048 (MiGetNodeStandbyPageCount.c)
 *     MiConstructNewLargeFreePage @ 0x1401FCF1C (MiConstructNewLargeFreePage.c)
 *     MiFindRebuildCandidate @ 0x1401FD040 (MiFindRebuildCandidate.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  unsigned __int8 *v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v7; // r12
  unsigned int *v8; // rax
  __int64 v9; // r15
  unsigned int *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int8 *v13; // rsi
  unsigned __int64 RebuildCandidate; // rax
  int ContiguousPages; // eax
  unsigned __int64 v16; // r15
  unsigned int v17; // r14d
  unsigned __int64 v18; // rsi
  unsigned int v19; // r11d
  unsigned __int8 *v21; // [rsp+50h] [rbp-68h]
  ULONG_PTR v22; // [rsp+58h] [rbp-60h]
  _QWORD *v23; // [rsp+60h] [rbp-58h]
  unsigned __int64 v24; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v26; // [rsp+D0h] [rbp+18h]
  unsigned int *v27; // [rsp+D8h] [rbp+20h]

  v26 = a3;
  v25 = a2;
  v3 = (unsigned int)MmNumberOfChannels;
  v4 = 0LL;
  v5 = a2;
  v7 = 0LL;
  v8 = (unsigned int *)MiReferencePageRuns(a1, 1u);
  v9 = BugCheckParameter3;
  v10 = v8;
  v27 = v8;
  v11 = 0;
  v22 = BugCheckParameter3;
  v12 = *(_QWORD *)(a1 + 48) + 2184 * v5;
  v23 = (_QWORD *)v12;
  if ( (unsigned int)v3 > 1 )
  {
    v4 = (unsigned __int8 *)(v12 + 2161);
    v11 = *(unsigned __int8 *)(v12 + 2161);
  }
  v13 = &v4[v3];
  v21 = &v4[v3];
  if ( v4 != &v4[v3] )
  {
    while ( 1 )
    {
      RebuildCandidate = MiFindRebuildCandidate((__int16 *)a1, v5, v11, 16LL, v9, v10);
      v24 = RebuildCandidate;
      if ( RebuildCandidate != -1LL )
        break;
LABEL_22:
      ++v4;
      if ( (unsigned int)v3 > 1 )
        v11 = *v4;
      v10 = v27;
      if ( v4 == v13 )
        goto LABEL_25;
    }
    while ( 1 )
    {
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          RebuildCandidate,
                          RebuildCandidate + 15,
                          16LL,
                          16LL,
                          1u,
                          v5,
                          v11,
                          1132462080,
                          (__int64 *)&v24);
      v16 = v24;
      if ( ContiguousPages >= 0 )
      {
        MiConstructNewLargeFreePage(v24, 2u, 1u);
        MiReturnCommit(a1, 0x10uLL);
        if ( (int *)a1 == MiSystemPartition )
        {
          MiReturnResidentAvailable(0x10uLL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6528), 0x10uLL);
          v16 = v24;
        }
        v7 += 16LL;
        if ( v7 >= v26 )
          break;
      }
      v17 = MmNumberOfChannels;
      v18 = 0LL;
      v11 = 0;
      if ( !MmNumberOfChannels )
        goto LABEL_16;
      do
        v18 += MiNodeFreeZeroPages(v23, v11++, 0);
      while ( v11 < v17 );
      v16 = v24;
      if ( v18 < 0x1000 )
      {
LABEL_16:
        v11 = 0;
        LODWORD(v3) = v17;
        if ( v17 )
        {
          v19 = v25;
          do
            v18 += MiGetNodeStandbyPageCount(a1, v19, v11++);
          while ( v11 < v17 );
        }
        if ( v18 < v26 - v7 + 0x8000 )
          break;
      }
      LODWORD(v5) = v25;
      if ( !v16 )
      {
        v9 = v22;
LABEL_21:
        v13 = v21;
        goto LABEL_22;
      }
      v9 = v16 - 1;
      v22 = v9;
      RebuildCandidate = MiFindRebuildCandidate((__int16 *)a1, v25, v11, 16LL, v9, v27);
      v24 = RebuildCandidate;
      if ( RebuildCandidate == -1LL )
        goto LABEL_21;
    }
LABEL_25:
    v10 = v27;
  }
  MiDereferencePageRuns((__int64)v10);
  return v7;
}
