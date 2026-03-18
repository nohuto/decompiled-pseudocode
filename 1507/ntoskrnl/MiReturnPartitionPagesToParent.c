/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x14021D9D8
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1406A3D40 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiDrainZeroLookasides @ 0x14010D810 (MiDrainZeroLookasides.c)
 *     MiDemoteLargeFreePage @ 0x1401591E0 (MiDemoteLargeFreePage.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiUnlinkPageFromBadList @ 0x14022649C (MiUnlinkPageFromBadList.c)
 *     MiMoveLargeFreePage @ 0x14022D110 (MiMoveLargeFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiReturnPartitionPagesToParent(__int64 a1)
{
  __int16 *v1; // r15
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int32 *v3; // r12
  int v5; // r13d
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i *i; // rax
  __m128i *v10; // rsi
  unsigned __int64 v11; // rax
  __m128i *v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdi
  unsigned __int8 v15; // r13
  unsigned int v16; // ebp
  unsigned int v17; // edi
  signed __int32 v18; // eax
  unsigned __int64 v19; // rdx
  char v20; // cl
  int v21; // ebp
  unsigned int v22; // edx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned int v25; // edx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-68h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __m128i **v30; // [rsp+38h] [rbp-50h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int16 v32; // [rsp+90h] [rbp+8h]
  __int16 v33; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A0h] [rbp+18h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v1 = MiSystemPartition;
  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int32 *)(a1 + 240);
  v33 = *(_WORD *)a1;
  v29 = (__int64)CurrentThread;
  v5 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v1 = *(__int16 **)(a1 + 16);
  v32 = *v1;
LABEL_4:
  v35 = 0LL;
  v6 = 0LL;
  MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, v7, v8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3);
  }
  else
  {
    v17 = 0;
    if ( _interlockedbittestandset(v3, 0x1Fu) )
      v17 = ExpWaitForSpinLockExclusiveAndAcquire(v3);
    while ( 1 )
    {
      v18 = *v3;
      if ( (*v3 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v18 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v3, v18 | 0x40000000, v18);
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
  }
  for ( i = *(__m128i **)(a1 + 48); ; i = *v30 )
  {
    v30 = (__m128i **)i;
    if ( !i )
      break;
    v10 = i + 3;
    v11 = (unsigned __int64)i[2].m128i_u32[2] >> 12;
    v27 = (unsigned __int64)v10 + 8 * v11;
    if ( v10 != (__m128i *)v27 )
    {
      v12 = (__m128i *)((char *)v10 + 8 * v11);
      while ( 1 )
      {
        v13 = v10->m128i_i64[0];
        if ( (v10->m128i_i64[0] & 0xC000000000000000uLL) == 0 )
          break;
LABEL_99:
        v10 = (__m128i *)((char *)v10 + 8);
        if ( v10 == v12 )
          goto LABEL_100;
      }
      v34 = ++v5;
      if ( (v5 & 0xF) == 0 && (*v3 & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        ++*(_DWORD *)(a1 + 64);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
        else
          *v3 = 0;
        __writecr8(CurrentIrql);
        CurrentThread = (struct _KTHREAD *)v29;
        MiUnlockDynamicMemoryExclusive(a1, v29);
        goto LABEL_4;
      }
      v14 = 48 * v13 - 0x58000000000LL;
      v15 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v16 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
        while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
      }
      v19 = *(_QWORD *)(v14 + 40);
      if ( ((v19 >> 40) & 0x3FF) != v33 )
      {
LABEL_31:
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        goto LABEL_32;
      }
      v20 = *(_BYTE *)(v14 + 34);
      v21 = v20 & 7;
      if ( v21 == 5 )
      {
        ++*(_DWORD *)(a1 + 68);
        if ( (*(_BYTE *)(v14 + 35) & 0x40) != 0
          && (*(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) == 0xFFFFFFFFFFFFFFFCuLL )
        {
          ++*(_DWORD *)(a1 + 72);
          MiUnlinkPageFromBadList(48 * v13 - 0x58000000000LL, v19, 0LL);
          *(_QWORD *)(v14 + 40) ^= (*(_QWORD *)(v14 + 40) ^ ((unsigned __int64)v32 << 40)) & 0x3FF0000000000LL;
          if ( v1 != MiSystemPartition )
            ++*((_QWORD *)v1 + 666);
          --*(_QWORD *)(a1 + 5328);
          MiInsertPageInList(48 * v13 - 0x58000000000LL, 0x20u);
          v10->m128i_i64[0] |= 0x4000000000000000uLL;
          v6 = ++v35;
        }
        else
        {
          v6 = v35;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v15);
        goto LABEL_98;
      }
      if ( (*(_BYTE *)(v14 + 34) & 7u) > 1 )
      {
        if ( v21 == 7 )
        {
          ++*(_DWORD *)(a1 + 88);
          goto LABEL_31;
        }
        if ( v21 == 2 )
        {
          if ( *(_WORD *)(v14 + 32) )
          {
            ++*(_DWORD *)(a1 + 92);
            goto LABEL_31;
          }
          if ( v1 != MiSystemPartition )
            ++*((_QWORD *)v1 + 666);
          if ( !(unsigned int)MiRelinkStandbyPage(v14, 0xFFFFFF, v32) )
          {
            ++*(_DWORD *)(a1 + 96);
            if ( v1 != MiSystemPartition )
              --*((_QWORD *)v1 + 666);
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v15);
            goto LABEL_49;
          }
          --*(_QWORD *)(a1 + 5328);
          if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
            ++*(_DWORD *)(a1 + 104);
          else
            ++*(_DWORD *)(a1 + 100);
        }
        else if ( (*(_BYTE *)(v14 + 34) & 7u) > 4 )
        {
          if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
          {
            ++*(_DWORD *)(a1 + 136);
          }
          else
          {
            v26 = MiCaptureDirtyBitToPfn(48 * v13 - 0x58000000000LL);
            if ( v26 )
            {
              ++*(_DWORD *)(a1 + 128);
              MiReleasePageFileInfo((struct _KEVENT *)a1, v26, 1);
            }
            else
            {
              ++*(_DWORD *)(a1 + 132);
            }
          }
          *(_QWORD *)(v14 + 40) ^= (*(_QWORD *)(v14 + 40) ^ ((unsigned __int64)v32 << 40)) & 0x3FF0000000000LL;
          if ( v1 != MiSystemPartition )
            ++*((_QWORD *)v1 + 666);
          --*(_QWORD *)(a1 + 5328);
        }
        else
        {
          if ( *(_WORD *)(v14 + 32) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v15);
            if ( (v20 & 8) != 0 )
            {
              ++*(_DWORD *)(a1 + 140);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
              else
                *v3 = 0;
              __writecr8(CurrentIrql);
              CurrentThread = (struct _KTHREAD *)v29;
              MiUnlockDynamicMemoryExclusive(a1, v29);
              v5 = v34;
              goto LABEL_4;
            }
            ++*(_DWORD *)(a1 + 108);
            goto LABEL_32;
          }
          MiUnlinkPageFromList(v14, 0LL);
          *(_QWORD *)(v14 + 40) ^= (*(_QWORD *)(v14 + 40) ^ ((unsigned __int64)v32 << 40)) & 0x3FF0000000000LL;
          if ( v21 == 3 )
          {
            ++*(_DWORD *)(a1 + 112);
            v25 = 8;
          }
          else
          {
            ++*(_DWORD *)(a1 + 116);
            v25 = 16;
          }
          if ( (*(_DWORD *)(v14 + 16) & 0x400LL) != 0 )
            ++*(_DWORD *)(a1 + 124);
          else
            ++*(_DWORD *)(a1 + 120);
          if ( v1 != MiSystemPartition )
            ++*((_QWORD *)v1 + 666);
          --*(_QWORD *)(a1 + 5328);
          MiInsertPageInList(v14, v25);
        }
      }
      else
      {
        if ( (v19 & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          v22 = 0;
          if ( (v13 & 0x1FF) == 0 && (unsigned __int64)&v10[256] <= v27 )
          {
            do
            {
              if ( v10->m128i_i64[0] != v13 )
                break;
              ++v13;
              v10 = (__m128i *)((char *)v10 + 8);
              ++v22;
            }
            while ( v22 < 0x200 );
          }
          v23 = v13 - v22;
          v10 = (__m128i *)((char *)v10 - 8 * v22);
          if ( v22 == 512 )
          {
            if ( v1 != MiSystemPartition )
              *((_QWORD *)v1 + 666) += 512LL;
            if ( (unsigned int)MiMoveLargeFreePage(v23, a1, v1) == 1 )
            {
              ++*(_DWORD *)(a1 + 76);
              v24 = 256LL;
              do
              {
                *v10 = _mm_or_si128(_mm_loadu_si128(v10), (__m128i)_xmm);
                ++v10;
                --v24;
              }
              while ( v24 );
              v6 = v35 + 512;
              *(_QWORD *)(a1 + 5328) -= 512LL;
              v35 += 512LL;
            }
            else
            {
              ++*(_DWORD *)(a1 + 80);
              v6 = v35;
              if ( v1 != MiSystemPartition )
                *((_QWORD *)v1 + 666) -= 512LL;
            }
            v10 = (__m128i *)((char *)v10 - 8);
            goto LABEL_98;
          }
          MiDemoteLargeFreePage(v23);
LABEL_49:
          v10 = (__m128i *)((char *)v10 - 8);
LABEL_32:
          v6 = v35;
LABEL_98:
          v5 = v34;
          v12 = (__m128i *)v27;
          goto LABEL_99;
        }
        ++*(_DWORD *)(a1 + 84);
        MiUnlinkFreeOrZeroedPage(v13, 0LL);
        if ( v1 != MiSystemPartition )
          ++*((_QWORD *)v1 + 666);
        --*(_QWORD *)(a1 + 5328);
        *(_QWORD *)(v14 + 40) ^= (*(_QWORD *)(v14 + 40) ^ ((unsigned __int64)v32 << 40)) & 0x3FF0000000000LL;
        MiInsertPageInFreeOrZeroedList(v13, 2);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v15);
      v10->m128i_i64[0] |= 0x4000000000000000uLL;
      v6 = ++v35;
      goto LABEL_98;
    }
LABEL_100:
    ;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  __writecr8(CurrentIrql);
  MiUnlockDynamicMemoryExclusive(a1, v29);
  _InterlockedExchangeAdd64(&qword_14034F0F0, -v6);
}
