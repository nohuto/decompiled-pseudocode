/*
 * XREFs of MiLockPageTablePage @ 0x140035180
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiLockPageTableRange @ 0x14014A398 (MiLockPageTableRange.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rcx
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi
  unsigned __int16 v11; // ax
  __int16 *v12; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v15; // zf
  unsigned __int32 v16; // eax
  unsigned int i; // ebp
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  char v22; // dl
  unsigned __int64 v23; // rax
  __int64 v24; // r10
  __int64 PteShadow; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // [rsp+50h] [rbp+8h]

  v4 = 0;
  v6 = 0LL;
  if ( a2 == 1 )
    v6 = a1;
  v27 = v6;
  v8 = 1;
  while ( 1 )
  {
LABEL_4:
    if ( a2 == 1 )
      a1 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      break;
    v9 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      v6 = v27;
    }
    if ( a2 != 1 || a1 == 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
        {
          v4 = 1;
          *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ (*(_QWORD *)(a1 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v4;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = v27;
  }
  v10 = 1LL;
  if ( !a2 )
    v10 = 3LL;
  v11 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v11 == 1023 )
  {
    v12 = &MiSystemPartition;
    goto LABEL_25;
  }
  v12 = *(__int16 **)(qword_14034F0E8 + 8LL * v11);
  if ( v12 == &MiSystemPartition )
  {
LABEL_25:
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( v10 <= CachedResidentAvailable )
    {
      do
      {
        if ( (_DWORD)CachedResidentAvailable == -1 )
          break;
        v16 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable - v10,
                CachedResidentAvailable);
        v15 = (_DWORD)CachedResidentAvailable == v16;
        LODWORD(CachedResidentAvailable) = v16;
        if ( v15 )
          goto LABEL_30;
      }
      while ( v10 <= v16 );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v12, v10, 512LL, a4) )
    return 0LL;
LABEL_30:
  if ( v12 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034F8B0, v10);
  for ( i = 0; i < v10; ++i )
  {
    v18 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v18);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
    if ( a2 == 1 && a1 != 48 * (*(_QWORD *)(v27 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v26 = v10 - i;
      if ( v12 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v26);
        _InterlockedExchangeAdd64(&qword_14034F8C0, v26);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 696, v26);
      }
      v6 = v27;
      goto LABEL_4;
    }
    v19 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( i )
    {
      if ( v19 >= 0x3FFFFFFFFFFEFDFFLL )
        goto LABEL_52;
    }
    else if ( v19 >= 0x3FFFFFFFFFFEFDFFLL )
    {
      v8 = 0;
LABEL_46:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      break;
    }
    *(_QWORD *)(a1 + 24) ^= ((v19 + 0x10000) ^ *(_QWORD *)(a1 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_52:
    if ( v19 >= 0x10000 )
      goto LABEL_46;
    v22 = *(_BYTE *)(a1 + 34);
    v23 = 0LL;
    if ( (v22 & 0x10) == 0 )
    {
      a4 = (__int64 *)(a1 + 16);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (v22 & 8) == 0 )
      {
        v24 = *a4;
        if ( (*a4 & 4) != 0 )
        {
          PteShadow = *a4;
          if ( (unsigned __int64)(a1 + 0x90482413010LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(a1 + 16, *a4);
          *a4 = v24 & 0xFFFFFFFFFFFFFFFBuLL;
          v23 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
        }
        else
        {
          v23 = 0LL;
        }
      }
      *(_BYTE *)(a1 + 34) |= 0x10u;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 )
      MiReleasePageFileInfo(v12, v23, 1LL);
    a1 = 48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  if ( i != v10 )
  {
    v20 = v10 - i;
    if ( v12 == &MiSystemPartition )
    {
      MiReturnResidentAvailable(v20);
      _InterlockedExchangeAdd64(&qword_14034F8C0, v20);
      return v8;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 696, v20);
  }
  return v8;
}
