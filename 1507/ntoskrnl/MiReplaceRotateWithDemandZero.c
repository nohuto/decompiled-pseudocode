/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140134D50
 * Callers:
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiUnmapFrameBuffer @ 0x1401351C4 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140135338 (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

_BOOL8 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rdi
  volatile signed __int32 *v9; // rbx
  signed __int32 i; // edx
  BOOL v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  ULONG_PTR *v16; // r14
  int v17; // r8d
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // r13
  signed __int32 v24; // edx
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h]
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+54h] [rbp-ACh]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  _QWORD v37[44]; // [rsp+110h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = 0;
  v5 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v34 = 20LL;
  v33 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v35 = 0LL;
  v30 = v7;
  v32 = 1;
  v36 = 0LL;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
  }
  else
  {
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    for ( i = *v9; (*v9 & 0xBFFFFFFF) != 0x80000000; i = *v9 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, i | 0x40000000, i);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    v4 = 0;
  }
  v11 = MiIsProbeActive(v6, ((__int64)(v7 - v6) >> 3) + 1, 3LL) != 0;
  if ( v6 <= v7 )
  {
    while ( 1 )
    {
      do
      {
        if ( (unsigned int)MiUnmapFrameBuffer(v6, a3, v11, &v29) )
          v11 = 1;
        if ( v29 != -1 )
        {
          if ( (_DWORD)v5 && (v12 = 2LL * (unsigned int)(v5 - 1), v13 = v37[2 * (unsigned int)(v5 - 1) + 1], v13 == v29) )
          {
            v14 = v13 + 1;
          }
          else
          {
            v14 = v29 + 1;
            v12 = 2LL * (unsigned int)v5;
            v5 = (unsigned int)(v5 + 1);
            v37[v12] = v29;
          }
          v37[v12 + 1] = v14;
        }
        MiInsertTbFlushEntry((__int64)&v32, (__int64)(v6 << 25) >> 16, 1LL, 0);
        ++v4;
        v6 += 8LL;
        v26 = v4;
      }
      while ( (v6 & 0xFFF) != 0 && v6 <= v7 && (_DWORD)v5 != 22 );
      MiFlushTbList((__int64)&v32);
      if ( (_DWORD)v5 )
      {
        v16 = v37;
        do
        {
          MiDereferenceIoPages(1, *v16, v16[1] - *v16);
          v17 = 1;
          v16 += 2;
          --v5;
        }
        while ( v5 );
        v4 = v26;
      }
      else
      {
        v17 = 1;
      }
      v18 = *(_QWORD *)v8;
      if ( v8 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v15, v18)
        && ((unsigned __int8)v18 & (unsigned __int8)v17) != 0
        && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
      {
        v19 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v19 )
        {
          v20 = *(_QWORD *)(v19 + 8 * ((v8 >> 3) & 0x1FF));
          if ( (v20 & 0x20) != 0 )
            v18 |= 0x20uLL;
          if ( (v20 & 0x42) != 0 )
            v18 |= 0x42uLL;
        }
      }
      v21 = 48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
      {
        do
        {
          v22 += v17;
          if ( (v22 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v22);
            v17 = 1;
          }
        }
        while ( *(__int64 *)(v21 + 24) < 0 );
      }
      *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - v4)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v9, CurrentIrql);
      if ( v6 > v7 )
        break;
      v5 = 0LL;
      v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 = 0;
      v23 = KeGetCurrentIrql();
      v31 = v23;
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
      }
      else
      {
        if ( _interlockedbittestandset(v9, 0x1Fu) )
          v4 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
        v24 = *v9;
        if ( (*v9 & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v24 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v9, v24 | 0x40000000, v24);
            if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v4);
            v24 = *v9;
          }
          while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
          LOBYTE(v23) = v31;
        }
        v4 = 0;
      }
      CurrentIrql = v23;
      v7 = v30;
    }
  }
  return v11;
}
