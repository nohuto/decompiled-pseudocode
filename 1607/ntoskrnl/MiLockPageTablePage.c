/*
 * XREFs of MiLockPageTablePage @ 0x1400300B0
 * Callers:
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiLockPageTableRange @ 0x140123A7C (MiLockPageTableRange.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  int *v3; // r10
  __int64 v4; // r13
  __int64 v6; // rbx
  unsigned int v7; // r15d
  unsigned __int64 v8; // rdi
  unsigned __int16 v9; // ax
  int *v10; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  bool v13; // zf
  unsigned __int32 v14; // eax
  unsigned int i; // esi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  char v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = MiSystemPartition;
  v4 = 0LL;
  v6 = a1;
  if ( a2 == 1 )
    v4 = a1;
  v7 = 1;
  while ( 1 )
  {
LABEL_4:
    if ( a2 == 1 )
      v6 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      break;
    v23 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v23);
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      v3 = MiSystemPartition;
    }
    if ( a2 != 1 || v6 == 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      {
        if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
        {
          v2 = 1;
          *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v2;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v8 = 1LL;
  if ( !a2 )
    v8 = 3LL;
  v9 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
  if ( v9 == 1023 )
  {
    v10 = v3;
    goto LABEL_21;
  }
  v10 = *(int **)(qword_140327038 + 8LL * v9);
  if ( v10 == v3 )
  {
LABEL_21:
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( v8 <= CachedResidentAvailable )
    {
      do
      {
        if ( (_DWORD)CachedResidentAvailable == -1 )
          break;
        v14 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                CachedResidentAvailable - v8,
                CachedResidentAvailable);
        v13 = (_DWORD)CachedResidentAvailable == v14;
        LODWORD(CachedResidentAvailable) = v14;
        if ( v13 )
          goto LABEL_26;
      }
      while ( v8 <= v14 );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v10, v8, 512LL) )
    return 0LL;
LABEL_26:
  for ( i = 0; i < v8; ++i )
  {
    v22 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v22);
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
      v7 = 1;
    }
    if ( a2 == 1 && v6 != 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 = MiSystemPartition;
      v21 = v8 - i;
      if ( v10 == MiSystemPartition )
        MiReturnResidentAvailable(v21);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 816, v21);
      goto LABEL_4;
    }
    v16 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( i )
    {
      if ( v16 >= 0x3FFFFFFFFFFEFDFFLL )
        goto LABEL_43;
    }
    else if ( v16 >= 0x3FFFFFFFFFFEFDFFLL )
    {
      v7 = 0;
LABEL_37:
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      break;
    }
    *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_43:
    if ( v16 >= 0x10000 )
      goto LABEL_37;
    v19 = *(_BYTE *)(v6 + 34);
    v20 = 0LL;
    if ( (v19 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)(v6 + 16) & 0x400LL) == 0 && (v19 & 8) == 0 )
        v20 = MiCapturePageFileInfoInline(v6 + 16, 1LL, 0LL);
      *(_BYTE *)(v6 + 34) |= 0x10u;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 )
      MiReleasePageFileInfo((struct _KEVENT *)v10, v20, 1);
    v6 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  }
  if ( i != v8 )
  {
    v17 = v8 - i;
    if ( v10 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v17);
      return v7;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 816, v17);
  }
  return v7;
}
