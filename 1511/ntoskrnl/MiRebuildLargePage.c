/*
 * XREFs of MiRebuildLargePage @ 0x1400BE1B0
 * Callers:
 *     MiRebuildLargePages @ 0x140484180 (MiRebuildLargePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiFindRebuildCandidate @ 0x1400BEA60 (MiFindRebuildCandidate.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiRebuildLargePage(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // r12d
  int v5; // r15d
  int v6; // ebp
  int v7; // r9d
  __int64 v8; // r13
  __int64 RebuildCandidate; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // edi
  unsigned __int64 *v13; // rbx
  unsigned __int8 CurrentIrql; // si
  char v15; // cl
  unsigned __int64 v16; // rax
  char v17; // cl
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r8
  volatile signed __int32 *v21; // r10
  int v22; // eax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 v25; // r9
  int v27; // r9d
  unsigned __int64 v28; // rcx
  int v29; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-60h] BYREF
  __int64 v31; // [rsp+60h] [rbp-58h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  unsigned int v36; // [rsp+D8h] [rbp+20h]

  v3 = BugCheckParameter3;
  v4 = a2;
  v36 = 0;
  v5 = a3;
  v6 = a1;
  v8 = MiReferencePageRuns(a1, 1LL);
  v32 = v8;
  while ( 1 )
  {
    RebuildCandidate = MiFindRebuildCandidate(v6, v4, v5, v7, v3, v8);
    v30 = RebuildCandidate;
    if ( RebuildCandidate == -1 )
      break;
    if ( (int)MiFindContiguousPages(
                v6,
                RebuildCandidate,
                (int)RebuildCandidate + 511,
                512,
                512LL,
                1,
                v4,
                v5,
                1124073472,
                (__int64)&v30) < 0 )
      goto LABEL_4;
    v36 = 1;
    v31 = 48 * v30 - 0x58000000000LL;
    v12 = 0;
    v13 = (unsigned __int64 *)(v31 + 40);
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13 - 4, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29, v10, v11);
        while ( (*(v13 - 2) & 0x8000000000000000uLL) != 0 );
      }
      v15 = *((_BYTE *)v13 - 6);
      v16 = *v13 & 0xFDFFFFFFFFFFFFFFuLL;
      *(v13 - 2) &= 0xC000000000000000uLL;
      v17 = v15 & 0xEF;
      *((_BYTE *)v13 - 5) &= 0xF8u;
      *v13 = v16;
      *((_BYTE *)v13 - 6) = v17;
      if ( v12 )
      {
        *v13 = v16 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
        *((_BYTE *)v13 - 6) = v17 & 0xF8 | 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)v13 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      ++v12;
      v13 += 6;
    }
    while ( v12 < 0x200 );
    LOBYTE(v18) = 1;
    v6 = a1;
    v19 = v31;
    v5 = a3;
    v4 = a2;
    v8 = v32;
    v20 = (v30 >> 9) & 0x1F;
    v21 = (volatile signed __int32 *)(qword_1402FF6E8[0] + 4 * (v30 >> 14));
    if ( (unsigned __int64)(v20 + 1) > 0x20 )
    {
      if ( v20 )
      {
        v27 = (v30 >> 9) & 0x1F;
        _InterlockedAnd(v21++, ~(((1 << (32 - v27)) - 1) << v20));
        v18 = 1LL - (unsigned int)(32 - v27);
        if ( v18 >= 0x20 )
        {
          v28 = v18 >> 5;
          v18 += -32LL * (v18 >> 5);
          do
          {
            *v21++ = 0;
            --v28;
          }
          while ( v28 );
        }
        if ( !v18 )
          goto LABEL_14;
      }
      v22 = (1 << v18) - 1;
    }
    else
    {
      v22 = 1 << v20;
    }
    _InterlockedAnd(v21, ~v22);
LABEL_14:
    v23 = (unsigned __int8)MiLockPageInline(v19);
    v24 = v30;
    *(_QWORD *)(v19 + 40) = *(_QWORD *)(v19 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFELL;
    *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 1;
    MiInsertLargePageInNodeList(v24, 512LL, 1LL, v25);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v23);
    MiReturnCommit(a1, 0x200uLL);
    if ( (int *)a1 == MiSystemPartition )
    {
      MiReturnResidentAvailable(0x200uLL);
      _InterlockedExchangeAdd64(&qword_1402FF4C8, 0x200uLL);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), 0x200uLL);
    }
LABEL_4:
    if ( !v30 )
      break;
    v3 = v30 - 1;
  }
  MiDereferencePageRuns(v8);
  return v36;
}
