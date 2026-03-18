/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x1401D98E4
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1406244E4 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiDemoteLargeFreePage @ 0x140019D40 (MiDemoteLargeFreePage.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiDrainZeroLookasides @ 0x1400C05E0 (MiDrainZeroLookasides.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiUnlinkPageFromBadList @ 0x1401E0238 (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x1401E1834 (MiMoveLargeFreePage.c)
 */

void __fastcall MiReturnPartitionPagesToParent(__int64 a1)
{
  int *v1; // rsi
  int v3; // r13d
  __int64 v4; // r12
  volatile LONG *v5; // rbx
  KIRQL v6; // bp
  __m128i *v7; // rax
  __m128i *v8; // rdi
  unsigned __int64 v9; // rax
  __m128i *v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int8 v15; // r13
  char v16; // cl
  int v17; // ebp
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // [rsp+20h] [rbp-58h]
  __m128i **v23; // [rsp+28h] [rbp-50h]
  KIRQL OldIrql; // [rsp+80h] [rbp+8h]
  unsigned __int16 v25; // [rsp+88h] [rbp+10h]
  __int16 v26; // [rsp+90h] [rbp+18h]
  int v27; // [rsp+98h] [rbp+20h]

  v1 = MiSystemPartition;
  v26 = *(_WORD *)a1;
  v3 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
    v1 = *(int **)(a1 + 16);
  v25 = *(_WORD *)v1;
  MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
  v5 = (volatile LONG *)(a1 + 224);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  OldIrql = v6;
  v7 = *(__m128i **)(a1 + 48);
  v23 = (__m128i **)v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = v7 + 3;
      v9 = (unsigned __int64)v7[2].m128i_u32[2] >> 12;
      v22 = (unsigned __int64)v8 + 8 * v9;
      if ( v8 != (__m128i *)v22 )
        break;
LABEL_67:
      v7 = *v23;
      v23 = (__m128i **)v7;
      if ( !v7 )
        goto LABEL_68;
    }
    v10 = (__m128i *)((char *)v8 + 8 * v9);
    while ( 1 )
    {
      v11 = v8->m128i_i64[0];
      if ( (v8->m128i_i64[0] & 0xC000000000000000uLL) == 0 )
        break;
LABEL_66:
      v8 = (__m128i *)((char *)v8 + 8);
      if ( v8 == v10 )
        goto LABEL_67;
    }
    v27 = ++v3;
    if ( (v3 & 0xF) == 0 && (*v5 & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      ExReleaseSpinLockExclusive(v5, v6);
      v8 = (__m128i *)((char *)v8 - 8);
      v6 = ExAcquireSpinLockExclusive(v5);
      OldIrql = v6;
LABEL_65:
      v10 = (__m128i *)v22;
      goto LABEL_66;
    }
    v12 = 48 * v11 - 0x58000000000LL;
    v13 = MiLockPageInline(v12);
    v14 = *(_QWORD *)(v12 + 40);
    v15 = v13;
    if ( ((HIDWORD(v14) >> 8) & 0x3FF) != v26 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
LABEL_63:
      v5 = (volatile LONG *)(a1 + 224);
      goto LABEL_64;
    }
    v16 = *(_BYTE *)(v12 + 34);
    v17 = v16 & 7;
    if ( v17 == 5 )
    {
      if ( (*(_BYTE *)(v12 + 35) & 0x40) != 0 && (*(_QWORD *)(v12 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
      {
        MiUnlinkPageFromBadList(48 * v11 - 0x58000000000LL, v14);
        *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v25 << 40)) & 0x3FF0000000000LL;
        if ( v1 != MiSystemPartition )
          ++*((_QWORD *)v1 + 714);
        --*(_QWORD *)(a1 + 5712);
        MiInsertPageInList(48 * v11 - 0x58000000000LL, 0x20u);
        v8->m128i_i64[0] |= 0x4000000000000000uLL;
        ++v4;
      }
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(v12 + 34) & 7u) <= 1 )
    {
      if ( (v14 & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v13);
        v18 = 0;
        if ( (v11 & 0x1FF) == 0 && (unsigned __int64)&v8[256] <= v22 )
        {
          do
          {
            if ( v8->m128i_i64[0] != v11 )
              break;
            ++v11;
            v8 = (__m128i *)((char *)v8 + 8);
            ++v18;
          }
          while ( v18 < 0x200 );
        }
        v19 = v11 - v18;
        v8 = (__m128i *)((char *)v8 - 8 * v18);
        if ( v18 == 512 )
        {
          if ( v1 != MiSystemPartition )
            *((_QWORD *)v1 + 714) += 512LL;
          if ( (unsigned int)MiMoveLargeFreePage(v19, a1, v1) == 1 )
          {
            v20 = 256LL;
            do
            {
              *v8 = _mm_or_si128(_mm_loadu_si128(v8), (__m128i)_xmm);
              ++v8;
              --v20;
            }
            while ( v20 );
            v4 += 512LL;
            *(_QWORD *)(a1 + 5712) -= 512LL;
          }
          else if ( v1 != MiSystemPartition )
          {
            *((_QWORD *)v1 + 714) -= 512LL;
          }
        }
        else
        {
          MiDemoteLargeFreePage(v19);
        }
LABEL_28:
        v8 = (__m128i *)((char *)v8 - 8);
        goto LABEL_62;
      }
      MiUnlinkFreeOrZeroedPage(v11, 0LL, 0);
      if ( v1 != MiSystemPartition )
        ++*((_QWORD *)v1 + 714);
      --*(_QWORD *)(a1 + 5712);
      *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v25 << 40)) & 0x3FF0000000000LL;
      MiInsertPageInFreeOrZeroedList(v11, 2uLL);
LABEL_61:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      v8->m128i_i64[0] |= 0x4000000000000000uLL;
      ++v4;
      goto LABEL_62;
    }
    if ( v17 != 7 )
    {
      if ( v17 != 2 )
      {
        if ( (*(_BYTE *)(v12 + 34) & 7u) <= 4 )
        {
          if ( *(_WORD *)(v12 + 32) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v13);
            if ( (v16 & 8) != 0 )
            {
              v5 = (volatile LONG *)(a1 + 224);
              ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224), OldIrql);
              v8 = (__m128i *)((char *)v8 - 8);
              v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
              OldIrql = v6;
LABEL_64:
              v3 = v27;
              goto LABEL_65;
            }
            goto LABEL_62;
          }
          MiUnlinkPageFromList(v12, 0);
          v21 = 16;
          *(_QWORD *)(v12 + 40) ^= (*(_QWORD *)(v12 + 40) ^ ((unsigned __int64)v25 << 40)) & 0x3FF0000000000LL;
          if ( v17 == 3 )
            v21 = 8;
          if ( v1 != MiSystemPartition )
            ++*((_QWORD *)v1 + 714);
          --*(_QWORD *)(a1 + 5712);
          MiInsertPageInList(v12, v21);
          goto LABEL_61;
        }
        *(_QWORD *)(v12 + 40) = v14 ^ (v14 ^ ((unsigned __int64)v25 << 40)) & 0x3FF0000000000LL;
        if ( v1 != MiSystemPartition )
          ++*((_QWORD *)v1 + 714);
        goto LABEL_60;
      }
      if ( !*(_WORD *)(v12 + 32) )
      {
        if ( v1 != MiSystemPartition )
          ++*((_QWORD *)v1 + 714);
        if ( !(unsigned int)MiRelinkStandbyPage(v12, 0xFFFFFF, v25) )
        {
          if ( v1 != MiSystemPartition )
            --*((_QWORD *)v1 + 714);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          goto LABEL_28;
        }
LABEL_60:
        --*(_QWORD *)(a1 + 5712);
        goto LABEL_61;
      }
    }
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v15);
LABEL_62:
    v6 = OldIrql;
    goto LABEL_63;
  }
LABEL_68:
  ExReleaseSpinLockExclusive(v5, v6);
  _InterlockedExchangeAdd64(&qword_1402FEC30, -v4);
}
