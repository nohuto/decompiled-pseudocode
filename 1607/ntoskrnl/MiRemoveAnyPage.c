/*
 * XREFs of MiRemoveAnyPage @ 0x1400642C0
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiReleaseFreshPageLocked @ 0x140021D24 (MiReleaseFreshPageLocked.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiSlistGetFreePage @ 0x140060FF8 (MiSlistGetFreePage.c)
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1401D39FC (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 */

__int64 __fastcall MiRemoveAnyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _KLOCK_QUEUE_HANDLE *v3; // rbp
  unsigned __int64 v4; // rbx
  int v7; // edx
  int v8; // r9d
  int v9; // r10d
  int v10; // r14d
  int v11; // r12d
  __int64 v12; // r11
  __int64 v13; // r8
  bool v14; // cc
  __int64 v15; // r8
  __int64 CurrentIrql; // r9
  __int64 v17; // rdx
  ULONG_PTR v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  bool v21; // zf
  _DWORD *v22; // rdx
  signed __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned int v27; // r14d
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 result; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  _BYTE v38[4]; // [rsp+40h] [rbp+0h] BYREF

  v3 = (struct _KLOCK_QUEUE_HANDLE *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL);
  v4 = a2;
  v7 = a3 & 2;
  *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v7;
  if ( (a3 & 2) != 0 )
  {
    v8 = 0;
    v9 = 1;
  }
  else
  {
    v8 = 1;
    v9 = 0;
  }
  v10 = dword_140326A38;
  v11 = v4;
  v12 = v9;
  v13 = *(_QWORD *)(a1 + 48) + 2184 * (v4 >> byte_140326A09);
  v14 = (unsigned int)MmNumberOfChannels <= 1;
  *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v9;
  *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v8;
  *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v9;
  if ( v14 )
  {
    if ( !*(_QWORD *)(v13 + 8LL * v8 + 2008) )
    {
      do
      {
        if ( v8 == v9 )
          goto LABEL_41;
        v31 = *(_QWORD *)(v13 + 8LL * v9 + 2008);
        v8 = v9;
        *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
      }
      while ( !v31 );
    }
  }
  else
  {
    v33 = 2LL * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v4 >> byte_140326A18));
    if ( !*(_QWORD *)(v13 + 8 * (v33 + v8) + 2072) )
    {
      do
      {
        if ( v8 == v9 )
          goto LABEL_46;
        *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
        v8 = v9;
      }
      while ( !*(_QWORD *)(v13 + 8 * (v33 + v9) + 2072) );
    }
  }
  v15 = v8;
  *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v8;
  while ( 2 )
  {
    while ( 2 )
    {
      CurrentIrql = 0xFFFFFFFFFLL;
      while ( 1 )
      {
        v17 = *(_QWORD *)(a1 + 8 * v15 + 1728);
        v18 = *(_QWORD *)(v17 + 40LL * (unsigned int)v4 + 16);
        v19 = v17 + 40LL * (unsigned int)v4;
        if ( v18 != 0xFFFFFFFFFLL )
          break;
LABEL_8:
        if ( (a3 & 0x1000) != 0 )
        {
          LODWORD(v4) = v11;
LABEL_10:
          if ( v15 == v12 )
          {
            do
            {
LABEL_46:
              v7 = *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
LABEL_41:
              if ( v7 )
              {
                result = MiSlistGetFreePage(a1, 0, v4);
                if ( result != -1 )
                  return result;
                v32 = 1;
              }
              else
              {
                result = MiSlistGetFreePage(a1, 1, v4);
                if ( result != -1 )
                  return result;
                v32 = 0;
              }
              result = MiSlistGetFreePage(a1, v32, v4);
              if ( result != -1 )
                return result;
              LODWORD(v4) = v4 & ~v10 | v10 & (v4 + 1);
            }
            while ( (_DWORD)v4 != v11 );
            return -1LL;
          }
          *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v9;
          v15 = v12;
          *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v12;
        }
        else
        {
          LODWORD(v4) = v4 & ~v10 | v10 & (v4 + 1);
          if ( (_DWORD)v4 == v11 )
            goto LABEL_10;
        }
      }
      v20 = 48 * v18 - 0x58000000000LL;
      *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v20;
      if ( (a3 & 1) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          goto LABEL_8;
        LOBYTE(CurrentIrql) = 17;
        *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = CurrentIrql;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = CurrentIrql;
        __writecr8(2uLL);
        if ( (a3 & 0x1000) != 0 )
        {
          MiLockPageAtDpcInline(v20);
          v15 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          v20 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          CurrentIrql = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          v9 = *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
          v12 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
LABEL_37:
          __writecr8((unsigned __int8)CurrentIrql);
LABEL_38:
          CurrentIrql = 0xFFFFFFFFFLL;
          goto LABEL_8;
        }
      }
      if ( (*(_BYTE *)(v20 + 34) & 7) != *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)CurrentIrql != 17 )
          __writecr8((unsigned __int8)CurrentIrql);
        continue;
      }
      break;
    }
    if ( (a3 & 0x1000) == 0 )
    {
      v21 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
      v22 = (_DWORD *)(v19 + 32);
      *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v19 + 32;
      *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
      if ( v21 )
      {
        _m_prefetchw(v22);
        if ( !*v22 )
        {
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, (signed __int64)&v3[2], 0LL);
          v9 = *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
          if ( !v23 )
            goto LABEL_20;
        }
        _mm_pause();
      }
      else
      {
        if ( (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(&v3[2]) )
          goto LABEL_20;
        v15 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        v20 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        CurrentIrql = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        v9 = *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v12 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)CurrentIrql == 17 )
        goto LABEL_38;
      goto LABEL_37;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 32), v3 + 2);
LABEL_20:
    if ( v18 != *(_QWORD *)(v19 + 16) )
    {
      KxReleaseQueuedSpinLock(&v3[2]);
      v34 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      _InterlockedAnd64(
        (volatile signed __int64 *)(*(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 24LL),
        0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)v34 != 17 )
        __writecr8((unsigned __int8)v34);
      v15 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      v9 = *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      v12 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      continue;
    }
    break;
  }
  if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v18, v19, a3) )
  {
    KxReleaseQueuedSpinLock(&v3[2]);
    v35 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    MiReleaseFreshPageLocked(v35);
    v36 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)v36 != 17 )
      __writecr8((unsigned __int8)v36);
    return -1LL;
  }
  v24 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  v25 = *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (a3 & 1) == 0 )
  {
    v26 = *(int *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v27 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v26 + 1744) + 16LL * (unsigned int)v4);
    if ( (_DWORD)v26 == 1 )
    {
      v28 = *(_DWORD *)(a1 + 5788);
      if ( v27 < v28 )
      {
        v29 = 1;
LABEL_28:
        MiReplenishPageSlist(a1, v29, v4, v28 - v27);
      }
    }
    else
    {
      if ( !*(_QWORD *)(v25 + 16)
        && (MiFlags & 0x80u) != 0
        && v18 < 0x200000
        && (*(_BYTE *)(48 * v18 - 0x57FFFFFFFDDLL) & 0x40) == 0
        && (++dword_140327160 & MmPageValidationFrequency) == 0 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v37 = MiMapPageInHyperSpaceWorker(
                  v18,
                  (unsigned __int8 *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL),
                  0x80000000);
          if ( KeCheckForZeroPage(v37) )
            MiPageNotZero(v37, v18);
          MiUnmapPageInHyperSpaceWorker(v37, LOBYTE(v3->LockQueue.Next));
        }
      }
      v28 = *(_DWORD *)(a1 + 5788);
      if ( v27 < v28 )
      {
        v29 = 0;
        goto LABEL_28;
      }
    }
    KxReleaseQueuedSpinLock(&v3[2]);
    __writecr8((unsigned __int8)v24);
    return v18;
  }
  KxReleaseQueuedSpinLock(&v3[2]);
  return v18;
}
