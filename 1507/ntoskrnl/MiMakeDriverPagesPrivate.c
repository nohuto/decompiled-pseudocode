/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1400246E4
 * Callers:
 *     MiLockCode @ 0x140010950 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiSplitDriverPage @ 0x14020E560 (MiSplitDriverPage.c)
 *     MiBackSingleImageWithPagefile @ 0x140571514 (MiBackSingleImageWithPagefile.c)
 * Callees:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiDriverPageMustStayResident @ 0x1400D418C (MiDriverPageMustStayResident.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiMakeDriverPagesPrivate(
        __int64 a1,
        ULONG_PTR *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned int v5; // r14d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v7; // rbx
  bool v8; // zf
  __int64 v9; // r9
  char v10; // r8
  char v11; // r11
  char v12; // di
  ULONG_PTR *v13; // r12
  int v14; // eax
  volatile signed __int32 *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r10d
  __int64 DriverPage; // r13
  unsigned int v20; // ebx
  ULONG_PTR v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // ebx
  ULONG_PTR v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v33; // r9
  unsigned int v34; // ebx
  unsigned int v35; // esi
  __int64 v36; // rbx
  unsigned int v37; // esi
  unsigned __int8 v38; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+80h] [rbp-80h] BYREF
  __int16 v47; // [rsp+84h] [rbp-7Ch]
  __int64 v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]

  v5 = 0;
  CurrentIrql = a4;
  v42 = 0LL;
  v7 = a3;
  v38 = a4;
  v8 = a4 == 17;
  v9 = a1;
  v10 = 1;
  v11 = 2;
  v12 = v8;
  v13 = a2;
  if ( (unsigned __int64)(((__int64)((_QWORD)a2 << 25) >> 16) + 0x70000000000LL) > 0x7FFFFFFFFFLL )
  {
    v41 = 0LL;
    v15 = &dword_14034FF40;
    v14 = 0;
  }
  else
  {
    v14 = 2;
    v41 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v15 = (volatile signed __int32 *)(v41 + 2968);
  }
  v16 = (*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL;
  v48 = 20LL;
  v17 = 0x98000000000LL;
  v46 = v14;
  v47 = 0;
  v44 = v16 - 0x98000000000LL;
  v18 = a5 & 4;
  v45 = *(_QWORD *)(v9 + 240);
  DriverPage = -1LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v38 = CurrentIrql;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15);
    }
    else
    {
      v20 = 0;
      if ( _interlockedbittestandset(v15, 0x1Fu) )
        v20 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
      while ( 1 )
      {
        v17 = *(unsigned int *)v15;
        if ( (*v15 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v17 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v15, v17 | 0x40000000, v17);
        if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
      v7 = a3;
    }
    v9 = a1;
    v10 = 1;
    v18 = a5 & 4;
    v11 = 2;
  }
  if ( (unsigned __int64)v13 <= v7 )
  {
    while ( 1 )
    {
      v21 = *v13;
      if ( (unsigned __int64)(v13 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v17)
        && ((unsigned __int8)v21 & (unsigned __int8)v10) != 0
        && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v17 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v17 )
        {
          v22 = *(_QWORD *)(v17 + 8 * (((unsigned __int64)v13 >> 3) & 0x1FF));
          if ( (v22 & 0x20) != 0 )
            v21 |= 0x20uLL;
          if ( (v22 & 0x42) != 0 )
            v21 |= 0x42uLL;
        }
      }
      v43 = v21;
      if ( !v21 )
        goto LABEL_121;
      if ( ((unsigned __int8)v21 & (unsigned __int8)v10) != 0 )
      {
        v26 = v21;
        if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(0x90482413000LL, v21) && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            v27 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v27 )
            {
              v28 = *(_QWORD *)(v27 + 8 * (((unsigned __int64)&v43 >> 3) & 0x1FF));
              if ( (v28 & 0x20) != 0 )
                v26 |= 0x20uLL;
              if ( (v28 & 0x42) != 0 )
                v26 |= 0x42uLL;
            }
          }
          v10 = 1;
        }
        v17 = (v26 >> 12) & 0xFFFFFFFFFLL;
        v29 = 48 * v17 - 0x58000000000LL;
        if ( (*(_QWORD *)(v29 + 40) & 0x200000000000000LL) == 0 || *(__int64 *)(v29 + 8) >= 0 )
          goto LABEL_120;
        if ( (MiFlags & 0x30000) != 0
          && (v41 || ((unsigned __int8)v11 & a5) != 0)
          && (((unsigned __int8)*(_DWORD *)(v29 + 16) >> 5) & (unsigned __int8)v11) != 0 )
        {
          v5 = -1073741755;
          break;
        }
        if ( v18 && (*(_DWORD *)(v9 + 196) & 3) == 0 && (*(_BYTE *)(v29 + 35) & 8) != 0
          || ((unsigned __int8)v10 & a5) != 0 && ((v21 & 0x800) != 0 || (v21 & 0x200) == 0) )
        {
          goto LABEL_120;
        }
        if ( DriverPage != -1 )
        {
          MiFlushTbList(&v46);
          MiCopyOnWriteEx((__int64)((_QWORD)v13 << 25) >> 16, (a5 & 4) != 0);
          if ( v41 )
          {
            if ( !v42 )
            {
              v42 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
              if ( *(_BYTE *)(v42 + 64) )
                v12 |= 2u;
            }
          }
          if ( (v12 & 2) != 0 && (unsigned __int8)MiDriverPageMustStayResident(a1, v13) )
          {
            v34 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v34 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v34);
              }
              while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
            }
            MiRemoveLockedPageChargeAndDecRef(v29);
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v35 = 0;
            v36 = 48 * DriverPage - 0x58000000000LL;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v35);
              }
              while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
            }
            MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          else
          {
            v36 = 48 * DriverPage - 0x58000000000LL;
          }
          DriverPage = -1LL;
          if ( (MiFlags & 0x30000) != 0 && ((*(_QWORD *)(v36 + 40) >> 54) & 7) == 3 )
          {
            _bittestandset(*(signed __int32 **)(v45 + 8), ((__int64)v13 - v44) >> 3);
            if ( *(_QWORD *)v36 )
            {
              if ( (*(_BYTE *)(v36 + 35) & 8) == 0 )
              {
                v37 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v37);
                  }
                  while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
                       || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
                }
                MiRemoveImagePageFromSystemWorkingSet(v15, v13, v36, v33);
                _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
            }
          }
LABEL_120:
          CurrentIrql = v38;
LABEL_121:
          ++v13;
          goto LABEL_122;
        }
        LOBYTE(v17) = v38;
        MiUnlockWorkingSetExclusive(v15, v17);
        DriverPage = MiAllocateDriverPage();
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15);
        }
        else
        {
          v30 = 0;
          if ( _interlockedbittestandset(v15, 0x1Fu) )
            v30 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
          while ( 1 )
          {
            v17 = *(unsigned int *)v15;
            if ( (*v15 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v17 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v15, v17 | 0x40000000, v17);
            if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v30);
          }
        }
        v38 = CurrentIrql;
        if ( DriverPage == -1 )
        {
          v5 = -1073741801;
          break;
        }
      }
      else
      {
        if ( (v21 & 0x400) == 0 )
          goto LABEL_121;
        MiFlushTbList(&v46);
        LOBYTE(v23) = CurrentIrql;
        MiUnlockWorkingSetExclusive(v15, v23);
        v24 = MmAccessFault(0LL, (__int64)((_QWORD)v13 << 25) >> 16);
        if ( v24 < 0 )
          KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)((_QWORD)v13 << 25) >> 16, v21, v24);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15);
        }
        else
        {
          v25 = 0;
          if ( _interlockedbittestandset(v15, 0x1Fu) )
            v25 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
          while ( 1 )
          {
            v17 = *(unsigned int *)v15;
            if ( (*v15 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v17 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v15, v17 | 0x40000000, v17);
            if ( (++v25 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v25);
          }
        }
        v38 = CurrentIrql;
      }
LABEL_122:
      if ( (unsigned __int64)v13 > a3 )
        break;
      v9 = a1;
      v10 = 1;
      v18 = a5 & 4;
      v11 = 2;
    }
  }
  MiFlushTbList(&v46);
  if ( (v12 & 1) != 0 )
  {
    LOBYTE(v31) = v38;
    MiUnlockWorkingSetExclusive(v15, v31);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
