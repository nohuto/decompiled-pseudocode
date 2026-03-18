/*
 * XREFs of MiProbeLockFrame @ 0x140034AC0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140033EA4 (MmProbeAndLockSelectedPages.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 * Callees:
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiLockNonPagedPoolPte @ 0x140116F58 (MiLockNonPagedPoolPte.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned int v3; // edi
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned __int8 CurrentIrql; // bp
  __int64 CurrentPrcb; // rdx
  unsigned __int16 v10; // cx
  ULONG_PTR v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  bool v16; // r14
  unsigned __int64 v17; // rdx
  unsigned __int16 v18; // cx
  __int16 *v19; // rsi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // eax
  unsigned __int64 v23; // rcx
  BOOL v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 Address; // rax
  int v29; // eax
  unsigned __int8 v30; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1[12];
  if ( v1 > qword_14034EC10
    || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !a1[9]
      || (Address = MiLocateAddress(*a1)) != 0 && ((v29 = *(_DWORD *)(Address + 48) & 7, v29 == 6) || v29 == 1) )
    {
      result = MiReferenceIoPages(0, a1[12], 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(a1[6] + 10) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_14034F1D4;
      }
    }
    else
    {
      ++dword_14034F1D0;
      return 3221225477LL;
    }
    return result;
  }
  v3 = 0;
  v4 = *((_DWORD *)a1 + 14) == 4;
  v30 = 17;
  if ( !v4
    || (v5 = *a1, (*(_BYTE *)(8 * (((unsigned __int64)*a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0)
    && (*(_BYTE *)(((v5 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81
    || (v6 = MiLockNonPagedPoolPte(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v30),
        a1[12] = (v6 + 0x58000000000LL) / 48,
        !v6) )
  {
    v7 = 0;
    v6 = 48 * a1[12] - 0x58000000000LL;
    if ( (PVOID)a1[11] == MmBadPointer )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      }
      v30 = CurrentIrql;
    }
    else
    {
      v30 = 17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      }
    }
  }
  CurrentPrcb = *(unsigned __int8 *)(v6 + 34);
  if ( ((unsigned __int8)CurrentPrcb & 7u) <= 1 || (v10 = *(_WORD *)(v6 + 32)) == 0 )
  {
    if ( v30 == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v30);
    }
    ++dword_14034F1C4;
    return 3221225477LL;
  }
  v11 = a1[6];
  v12 = 0x3FFFFFFFFFFFFFFFLL;
  if ( *(char *)(v11 + 10) < 0
    && (CurrentPrcb & 0x20) != 0
    && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && *(_QWORD *)v6
    && ((*(_QWORD *)(v6 + 40) >> 54) & 7) != 1 )
  {
    KeBugCheckEx(0x1Au, 0x61946uLL, v11, a1[12], 0LL);
  }
  if ( v10 >= 0x7FFFu )
    goto LABEL_58;
  v13 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v14 = 1LL;
  if ( v10 == 1 )
  {
    if ( v13 )
      goto LABEL_39;
  }
  else if ( v10 != 2 || !v13 )
  {
    goto LABEL_66;
  }
  if ( (CurrentPrcb & 8) != 0 )
  {
LABEL_39:
    v15 = *(_QWORD *)(v6 + 40);
    v16 = 0;
    if ( (v15 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
    {
      v16 = 1;
    }
    else
    {
      v17 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
      if ( v17 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v17 >= 0xFFFFF68000000000uLL )
      {
        v16 = ((*(unsigned __int8 *)(v6 + 35) >> 5) & 1) != 0;
      }
    }
    v18 = (HIDWORD(v15) >> 8) & 0x3FF;
    if ( v18 == 1023 )
      v19 = &MiSystemPartition;
    else
      v19 = *(__int16 **)(qword_14034F0E8 + 8LL * v18);
    if ( v16 && !(unsigned int)MiChargeCommit(v19, 1LL, 8LL) )
      goto LABEL_58;
    if ( v19 == &MiSystemPartition )
    {
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v20 = *(_DWORD *)(CurrentPrcb + 24516);
      if ( v20 )
      {
        while ( v20 != -1 )
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24516), v20 - 1, v20);
          if ( v21 == v20 )
          {
            v14 = 1LL;
            goto LABEL_62;
          }
          if ( !v20 )
            break;
        }
      }
    }
    v22 = MiChargePartitionResidentAvailable(v19, 1LL, 0LL, v12);
    v14 = v22;
    if ( !v22 )
    {
      if ( v16 )
        MiReturnCommit(v19, 1LL);
LABEL_58:
      if ( v30 == 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v30);
      }
      ++dword_14034F1C8;
      return 3221225633LL;
    }
LABEL_62:
    if ( v19 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034FAC0, 1uLL);
    if ( !(_DWORD)v14 )
      goto LABEL_58;
    v12 = 0x3FFFFFFFFFFFFFFFLL;
  }
LABEL_66:
  ++*(_WORD *)(v6 + 32);
  if ( v30 == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v30);
  }
  if ( *((_DWORD *)a1 + 14) == 1 )
  {
    v23 = *(_QWORD *)(v6 + 40);
    if ( ((v23 >> 54) & 7) != 1 )
    {
      CurrentPrcb = v23 & 0xFFFFFFFFFLL;
      if ( (v23 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v24 = (v23 & 0x200000000000000LL) != 0;
        if ( v24
          || (v14 = 48 * CurrentPrcb - 0x58000000000LL, (*(_BYTE *)(v14 + 34) & 7) == 6)
          && (*(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
          && (v12 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL,
              v14 = 0x7FFFFFFFFFLL,
              v12 + 0x98000000000LL <= 0x7FFFFFFFFFLL)
          && (v12 = (__int64)(v12 << 25) >> 16, v12 + 0x98000000000LL <= 0x7FFFFFFFFFLL) )
        {
          if ( a1[13] != CurrentPrcb )
          {
            if ( v24 )
            {
              v25 = 1LL;
              v26 = v6;
            }
            else
            {
              v26 = 48 * CurrentPrcb - 0x58000000000LL;
              v25 = 0LL;
            }
            if ( !(unsigned int)MiLockPageTablePage(v26, v25) )
            {
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v3);
                }
                while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0
                     || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
              }
              MiRemoveLockedPageChargeAndDecRef(v6);
              _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_14034F1CC;
              return 3221225633LL;
            }
            a1[13] = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
            *(_WORD *)(a1[6] + 10) |= 0x100u;
          }
        }
      }
    }
  }
  if ( *(char *)(a1[6] + 10) < 0
    && (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetPrototypePteDirect(
                                                                     *(_QWORD *)(v6 + 16),
                                                                     CurrentPrcb,
                                                                     v14,
                                                                     v12)
                                                      + 104LL));
  }
  return 0LL;
}
