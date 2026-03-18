/*
 * XREFs of MiRemoveAnyPage @ 0x1400124B0
 * Callers:
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     MiReleaseFreshPageLocked @ 0x140007B44 (MiReleaseFreshPageLocked.c)
 *     MiReplenishPageSlist @ 0x140012870 (MiReplenishPageSlist.c)
 *     MiSlistGetFreePage @ 0x140012D54 (MiSlistGetFreePage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     KeCheckForZeroPage @ 0x1401573D0 (KeCheckForZeroPage.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1401C4A18 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 */

__int64 __fastcall MiRemoveAnyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // r10d
  int v6; // edx
  __int64 v7; // r9
  int v8; // r11d
  int v9; // ebp
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 CurrentIrql; // rdx
  ULONG_PTR v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r12
  _DWORD *v18; // rcx
  _QWORD *v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned int v24; // esi
  unsigned int v25; // eax
  __int64 v26; // rdx
  __int64 result; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  ULONG_PTR v31; // r15
  int v32; // [rsp+20h] [rbp-78h]
  unsigned __int8 v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+30h] [rbp-68h]
  _QWORD v35[4]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v36; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v37; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v38; // [rsp+B0h] [rbp+18h]
  int v39; // [rsp+B8h] [rbp+20h]

  v38 = a3;
  v3 = a2;
  v4 = a3;
  v6 = a3 & 2;
  v32 = v6;
  if ( (a3 & 2) != 0 )
  {
    v7 = 0LL;
    v8 = 1;
  }
  else
  {
    v7 = 1LL;
    v8 = 0;
  }
  v9 = dword_1402FE708;
  v10 = v3;
  v11 = *(_QWORD *)(a1 + 40) + 1336 * (v3 >> byte_1402FE6D9);
  v12 = v8;
  v39 = v8;
  v36 = v7;
  v34 = v8;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v30 = 2LL * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v3 >> byte_1402FE6E8))
        + 154;
    if ( !*(_QWORD *)(v11 + 8 * (v30 + (int)v7)) )
    {
      do
      {
        if ( (_DWORD)v7 == v8 )
          goto LABEL_48;
        v36 = v8;
        v7 = (unsigned int)v8;
      }
      while ( !*(_QWORD *)(v11 + 8 * (v30 + v8)) );
    }
  }
  else if ( !*(_QWORD *)(v11 + 8LL * (int)v7 + 1168) )
  {
    do
    {
      if ( (_DWORD)v7 == v8 )
        goto LABEL_43;
      v7 = (unsigned int)v8;
      v36 = v8;
    }
    while ( !*(_QWORD *)(v11 + 8LL * v8 + 1168) );
  }
  v13 = (int)v7;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        CurrentIrql = *(_QWORD *)(a1 + 8 * v13 + 1600);
        v15 = *(_QWORD *)(CurrentIrql + 40 * v3 + 16);
        v16 = CurrentIrql + 40 * v3;
        if ( v15 != 0xFFFFFFFFFLL )
          break;
LABEL_7:
        v3 = (unsigned int)v3 & ~v9 | v9 & ((_DWORD)v3 + 1);
        if ( (_DWORD)v3 == v10 )
        {
          if ( v13 == v12 )
          {
            do
            {
LABEL_48:
              v6 = v32;
LABEL_43:
              if ( v6 )
              {
                result = MiSlistGetFreePage(a1, 0LL, (unsigned int)v3);
                if ( result != -1 )
                  return result;
                v28 = 1LL;
              }
              else
              {
                result = MiSlistGetFreePage(a1, 1LL, (unsigned int)v3);
                if ( result != -1 )
                  return result;
                v28 = 0LL;
              }
              result = MiSlistGetFreePage(a1, v28, (unsigned int)v3);
              if ( result != -1 )
                return result;
              LODWORD(v3) = v3 & ~v9 | v9 & (v3 + 1);
            }
            while ( (_DWORD)v3 != v10 );
            return -1LL;
          }
          v7 = (unsigned int)v8;
          v36 = v8;
          v13 = v12;
        }
      }
      v17 = 48 * v15 - 0x58000000000LL;
      if ( (v4 & 1) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
          goto LABEL_39;
        LOBYTE(CurrentIrql) = 17;
        v33 = 17;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        v33 = CurrentIrql;
        __writecr8(2uLL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          __writecr8((unsigned __int8)CurrentIrql);
LABEL_39:
          v12 = v8;
          goto LABEL_7;
        }
      }
      if ( (*(_BYTE *)(v17 + 34) & 7) == (_DWORD)v7 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = v8;
      if ( (_BYTE)CurrentIrql != 17 )
        __writecr8((unsigned __int8)CurrentIrql);
    }
    v18 = (_DWORD *)(v16 + 32);
    v35[1] = v16 + 32;
    v35[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v29 = KiTryToAcquireQueuedSpinLockInstrumented(v35, v16 + 32, 0xFFFFFFFFFLL);
      v4 = v38;
      if ( !v29 )
      {
        LOBYTE(CurrentIrql) = v33;
        v7 = v36;
        v8 = v39;
LABEL_41:
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v8;
        if ( (_BYTE)CurrentIrql != 17 )
          __writecr8((unsigned __int8)CurrentIrql);
        goto LABEL_7;
      }
    }
    else
    {
      _m_prefetchw(v18);
      if ( *v18 || (v19 = v35, _InterlockedCompareExchange64((volatile signed __int64 *)v18, (signed __int64)v35, 0LL)) )
      {
        _mm_pause();
        goto LABEL_41;
      }
    }
    if ( v15 == *(_QWORD *)(v16 + 16) )
      break;
    KxReleaseQueuedSpinLock(v35, CurrentIrql, v19, v7);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 != 17 )
      __writecr8(v33);
    v7 = v36;
    v4 = v38;
    v8 = v39;
    v12 = v34;
  }
  if ( !(unsigned int)MiUnlinkFreeOrZeroedPage(v15, v16, v4) )
  {
    KxReleaseQueuedSpinLock(v35, v20, v21, v22);
    MiReleaseFreshPageLocked(48 * v15 - 0x58000000000LL);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v33 != 17 )
      __writecr8(v33);
    return -1LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v38 & 1) == 0 )
  {
    v23 = (int)v36;
    v24 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * (int)v36 + 1616) + 16LL * (unsigned int)v3);
    if ( v36 == 1 )
    {
      v25 = *(_DWORD *)(a1 + 5148);
      if ( v24 < v25 )
      {
        v26 = 1LL;
LABEL_24:
        MiReplenishPageSlist(a1, v26, (unsigned int)v3, v25 - v24);
      }
    }
    else
    {
      if ( !*(_QWORD *)(v17 + 16)
        && (MiFlags & 0x80u) != 0
        && v15 < 0x200000
        && (*(_BYTE *)(48 * v15 - 0x57FFFFFFFDDLL) & 0x40) == 0
        && (++dword_1402FED50 & MmPageValidationFrequency) == 0 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v31 = MiMapPageInHyperSpaceWorker(v15, &v37, 0x80000000LL);
          if ( KeCheckForZeroPage(v31) )
            MiPageNotZero(v31, v15);
          MiUnmapPageInHyperSpaceWorker(v31, v37, 0x80000000LL);
        }
      }
      v25 = *(_DWORD *)(a1 + 5148);
      if ( v24 < v25 )
      {
        v26 = 0LL;
        goto LABEL_24;
      }
    }
    KxReleaseQueuedSpinLock(v35, v20, v23, v22);
    __writecr8(v33);
    return v15;
  }
  KxReleaseQueuedSpinLock(v35, v20, v21, v22);
  return v15;
}
