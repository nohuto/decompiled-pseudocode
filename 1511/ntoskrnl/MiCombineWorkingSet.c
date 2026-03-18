/*
 * XREFs of MiCombineWorkingSet @ 0x1401E0DFC
 * Callers:
 *     MiCombineIdenticalPages @ 0x14050E19C (MiCombineIdenticalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiMapArbitraryPage @ 0x140129AC0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x14012A464 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x14012B824 (MiReleaseArbitraryPage.c)
 *     MiComputeHash64 @ 0x1401321E0 (MiComputeHash64.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineWorkingSet(int **a1, __int64 a2, _QWORD *a3, __int64 a4, PEX_SPIN_LOCK SpinLock)
{
  int *v6; // rdi
  PEX_SPIN_LOCK v7; // r15
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  KIRQL v10; // bl
  __int64 v11; // rsi
  SIZE_T v12; // rsi
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v14; // rbp
  __int64 v15; // r13
  unsigned __int64 *v16; // rsi
  unsigned __int64 *v17; // rdi
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  ULONG_PTR v22; // rax
  _QWORD *v23; // r13
  __int64 v24; // rcx
  int v25; // ebx
  unsigned int v27; // [rsp+40h] [rbp-88h]
  unsigned __int64 v28; // [rsp+48h] [rbp-80h]
  __int64 v29; // [rsp+50h] [rbp-78h] BYREF
  int *v30; // [rsp+58h] [rbp-70h]
  __int64 v31; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  unsigned __int64 v34; // [rsp+78h] [rbp-50h]
  KIRQL SpinLocka; // [rsp+F0h] [rbp+28h]

  v6 = *a1;
  v30 = *a1;
  if ( (SpinLock[54] & 7) != 0 )
    v7 = 0LL;
  else
    v7 = SpinLock - 320;
  CurrentThread = KeGetCurrentThread();
  v27 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 1600) + 146LL);
  SpinLocka = ExAcquireSpinLockExclusive(SpinLock);
  v10 = SpinLocka;
  if ( v7
    && ((v7[193] & 0xC00u) < 0xC00 || *((_QWORD *)SpinLock + 1)
                                   || v7 == (PEX_SPIN_LOCK)PsInitialSystemProcess && v6[270]) )
  {
    goto LABEL_52;
  }
  v11 = *((_QWORD *)SpinLock + 16);
  if ( !v11 )
    goto LABEL_52;
  v12 = (32 * v11 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  while ( 1 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x6D75534Du);
    v14 = PoolWithTag;
    if ( PoolWithTag )
      break;
    v12 >>= 1;
    if ( v12 < 0x10000 )
      goto LABEL_52;
  }
  v15 = *((_QWORD *)SpinLock + 23);
  v16 = (unsigned __int64 *)((char *)PoolWithTag + (v12 & 0xFFFFFFFFFFFFFFE0uLL));
  v31 = v15;
  v17 = PoolWithTag;
  v18 = *(_QWORD *)(v15 + 8);
  v28 = *(_QWORD *)(v15 + 16);
  if ( v18 > v28 )
    goto LABEL_51;
  do
  {
    if ( (v18 & 0x1F) == 0 && (*SpinLock & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      LOBYTE(v8) = v10;
      MiUnlockWorkingSetExclusive((__int64)SpinLock, v8, v9);
      MiProcessCrcList(a1, v14, ((char *)v17 - (char *)v14) >> 5, v27, a3, a2, a4);
      v17 = v14;
      v10 = ExAcquireSpinLockExclusive(SpinLock);
      SpinLocka = v10;
      v19 = *(_QWORD *)(v15 + 8);
      v28 = *(_QWORD *)(v15 + 16);
      if ( v18 >= v19 )
      {
        --v18;
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    v20 = *(_QWORD *)(v18 * *(unsigned int *)(v15 + 64) + *(_QWORD *)(v15 + 496));
    if ( (v20 & 1) == 0 )
      goto LABEL_41;
    v21 = (v20 & 0x800000000000LL) != 0 ? v20 | 0xFFFF000000000000uLL : v20 & 0xFFFFFFFFFFFFLL;
    v8 = 0x98000000000LL;
    if ( v21 + 0x98000000000LL <= 0x7FFFFFFFFFLL )
      goto LABEL_41;
    v29 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
    v34 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v29) >> 12) & 0xFFFFFFFFFLL;
    v8 = 48 * v34 - 0x58000000000LL;
    v33 = v8;
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
      goto LABEL_41;
    if ( a2 && *(_DWORD *)(a2 + 4) || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
      break;
    if ( (unsigned int)MiCombineCandidate(a1, v8) )
    {
      ++*(_QWORD *)(a4 + 16);
      if ( (v29 & 0x20) != 0 )
      {
        *v17 = MiComputeHash64(v21 & 0xFFFFFFFFFFFFF000uLL);
      }
      else
      {
        v22 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v9);
        v23 = (_QWORD *)v22;
        if ( !v22 )
          break;
        a3[9] = v22;
        a3[8] = v33;
        if ( !(unsigned int)MiMapArbitraryPage((__int64)a1, a3, 0LL, 0) )
        {
          MiReleasePtes((__int64)&qword_1402FF7B0, v23, 1u);
          goto LABEL_41;
        }
        v25 = MiPerformCombineScan(v24, (__int64)a3);
        MiReleaseArbitraryPage((__int64)a3);
        MiReleasePtes((__int64)&qword_1402FF7B0, v23, 1u);
        if ( v25 != 1 )
          goto LABEL_41;
        v15 = v31;
      }
      v17[2] = 0LL;
      v17[3] = 0LL;
      v17[1] = v34;
      v17 += 4;
      if ( v17 == v16 )
      {
        LOBYTE(v8) = SpinLocka;
        MiUnlockWorkingSetExclusive((__int64)SpinLock, v8, v9);
        MiProcessCrcList(a1, v14, ((char *)v17 - (char *)v14) >> 5, v27, a3, a2, a4);
        v17 = v14;
        v10 = ExAcquireSpinLockExclusive(SpinLock);
        SpinLocka = v10;
        v19 = *(_QWORD *)(v15 + 8);
        v28 = *(_QWORD *)(v15 + 16);
        if ( v18 >= v19 )
        {
LABEL_20:
          if ( v7 && (v7[193] & 0xC00u) < 0xC00
            || *((_QWORD *)SpinLock + 1)
            || v7 == (PEX_SPIN_LOCK)PsInitialSystemProcess && v30[270] )
          {
            goto LABEL_52;
          }
          goto LABEL_42;
        }
LABEL_19:
        v18 = v19 - 1;
        goto LABEL_20;
      }
    }
LABEL_41:
    v10 = SpinLocka;
LABEL_42:
    v15 = v31;
    ++v18;
  }
  while ( v18 <= v28 );
  if ( v17 == v14 )
  {
    v10 = SpinLocka;
  }
  else
  {
    LOBYTE(v8) = SpinLocka;
    MiUnlockWorkingSetExclusive((__int64)SpinLock, v8, v9);
    v10 = 17;
    MiProcessCrcList(a1, v14, ((char *)v17 - (char *)v14) >> 5, v27, a3, a2, a4);
  }
LABEL_51:
  ExFreePoolWithTag(v14, 0);
LABEL_52:
  if ( v10 != 17 )
  {
    LOBYTE(v8) = v10;
    MiUnlockWorkingSetExclusive((__int64)SpinLock, v8, v9);
  }
  return 0LL;
}
