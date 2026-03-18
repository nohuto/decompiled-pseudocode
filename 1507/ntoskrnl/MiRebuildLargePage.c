/*
 * XREFs of MiRebuildLargePage @ 0x1400FFA70
 * Callers:
 *     MiRebuildLargePages @ 0x14051CFF0 (MiRebuildLargePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x14005C910 (MiFindRebuildCandidate.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiRebuildLargePage(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r13d
  int v5; // r12d
  unsigned __int16 *v6; // r15
  unsigned int *v7; // rdi
  int v8; // r9d
  unsigned __int64 RebuildCandidate; // rax
  unsigned int v10; // edi
  unsigned __int64 *v11; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v13; // ebp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // cl
  char v17; // cl
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r8
  volatile signed __int32 *v22; // r10
  int v23; // eax
  unsigned __int8 v24; // di
  unsigned int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // [rsp+50h] [rbp-68h] BYREF
  unsigned int *v30; // [rsp+58h] [rbp-60h]
  unsigned __int64 v31; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+D8h] [rbp+20h]

  v3 = BugCheckParameter3;
  v4 = a2;
  v35 = 0;
  v5 = a3;
  v6 = (unsigned __int16 *)a1;
  v7 = (unsigned int *)MiReferencePageRuns(a1, 1LL);
  v30 = v7;
  while ( 1 )
  {
    RebuildCandidate = MiFindRebuildCandidate(v6, v4, v5, v8, v3, v7);
    v29 = RebuildCandidate;
    if ( RebuildCandidate == -1LL )
      break;
    if ( (int)MiFindContiguousPages(
                (__int16 *)v6,
                RebuildCandidate,
                RebuildCandidate + 511,
                512LL,
                0x200uLL,
                1u,
                v4,
                v5,
                0x43000000u,
                &v29) < 0 )
      goto LABEL_4;
    v35 = 1;
    v31 = 48 * v29 - 0x58000000000LL;
    v10 = 0;
    v11 = (unsigned __int64 *)(v31 + 40);
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v13 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11 - 4, 0x3FuLL) )
      {
        do
        {
          if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v13);
        }
        while ( (*(v11 - 2) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)v11 - 4, 0x3FuLL) );
      }
      v14 = *v11;
      *(v11 - 2) &= 0xC000000000000000uLL;
      v15 = v14 & 0xFDFFFFFFFFFFFFFFuLL;
      v16 = *((_BYTE *)v11 - 6);
      *((_BYTE *)v11 - 5) &= 0xF8u;
      v17 = v16 & 0xEF;
      *v11 = v15;
      *((_BYTE *)v11 - 6) = v17;
      if ( v10 )
      {
        *v11 = v15 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
        *((_BYTE *)v11 - 6) = v17 & 0xF8 | 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)v11 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v10;
      v11 += 6;
    }
    while ( v10 < 0x200 );
    LOBYTE(v18) = 1;
    v19 = v31;
    v6 = (unsigned __int16 *)a1;
    v5 = a3;
    v4 = a2;
    v20 = v29 >> 9;
    v21 = (v29 >> 9) & 0x1F;
    v22 = (volatile signed __int32 *)(qword_14034FBA8[0] + 4 * (v29 >> 14));
    if ( v21 + 1 > 0x20 )
    {
      if ( v21 )
      {
        v20 = (v29 >> 9) & 0x1F;
        _InterlockedAnd(v22++, ~(((1 << (32 - v20)) - 1) << v21));
        v18 = 1LL - (unsigned int)(32 - v20);
        if ( v18 >= 0x20 )
        {
          v28 = v18 >> 5;
          v18 += -32LL * (v18 >> 5);
          do
          {
            *v22++ = 0;
            --v28;
          }
          while ( v28 );
        }
        if ( !v18 )
          goto LABEL_14;
      }
      v23 = (1 << v18) - 1;
    }
    else
    {
      v23 = 1 << v21;
    }
    _InterlockedAnd(v22, ~v23);
LABEL_14:
    v24 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v25 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v25);
      }
      while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
    }
    v26 = v29;
    *(_QWORD *)(v19 + 40) = *(_QWORD *)(v19 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
    *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 1;
    MiInsertLargePageInNodeList(v26, 512LL, 1LL, v20);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v24);
    MiReturnCommit(a1, 512LL);
    if ( (__int16 *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(0x200uLL);
      _InterlockedExchangeAdd64(&qword_14034F948, 0x200uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), 0x200uLL);
    }
    v7 = v30;
LABEL_4:
    if ( !v29 )
      break;
    v3 = v29 - 1;
  }
  MiDereferencePageRuns(v7);
  return v35;
}
