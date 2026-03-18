/*
 * XREFs of MiLockPageTablePage @ 0x1400A81C0
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiLockPageTableRange @ 0x140114F64 (MiLockPageTableRange.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  int *v3; // r10
  __int64 v4; // r13
  int v5; // r14d
  __int64 v6; // rbx
  unsigned int v7; // r15d
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // ax
  int *v11; // r12
  __int64 CurrentPrcb; // r8
  bool v13; // zf
  unsigned __int32 v14; // eax
  unsigned int i; // esi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v3 = MiSystemPartition;
  v4 = 0LL;
  v5 = a2;
  v6 = a1;
  if ( (_DWORD)a2 == 1 )
    v4 = a1;
  v23 = v4;
  v7 = 1;
LABEL_4:
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
LABEL_5:
    if ( v5 == 1 )
      v6 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) >= 0x10000 )
      break;
LABEL_8:
    v9 = 1LL;
    if ( !v5 )
      v9 = 3LL;
    v10 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
    if ( v10 == 1023 )
    {
      v11 = v3;
LABEL_12:
      CurrentPrcb = (__int64)KeGetCurrentPrcb();
      a2 = *(unsigned int *)(CurrentPrcb + 24516);
      if ( v9 <= a2 )
      {
        do
        {
          if ( (_DWORD)a2 == -1 )
            break;
          v14 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24516), a2 - v9, a2);
          v13 = (_DWORD)a2 == v14;
          a2 = v14;
          if ( v13 )
            goto LABEL_15;
        }
        while ( v9 <= v14 );
      }
      goto LABEL_52;
    }
    v11 = *(int **)(qword_1402FEC28 + 8LL * v10);
    if ( v11 == v3 )
      goto LABEL_12;
LABEL_52:
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v11, v9, 512LL) )
      return 0LL;
    v3 = MiSystemPartition;
LABEL_15:
    if ( v11 == v3 )
      _InterlockedExchangeAdd64(&qword_1402FF430, v9);
    for ( i = 0; ; ++i )
    {
      if ( i >= v9 )
        goto LABEL_32;
      v21 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v21, a2, CurrentPrcb);
          while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
        v4 = v23;
      }
      if ( v5 == 1 && v6 != 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        break;
      v16 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      a2 = v16 >= 0x10000;
      if ( i )
      {
        if ( v16 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_24;
      }
      else if ( v16 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v7 = 0;
LABEL_31:
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_32:
        if ( i != v9 )
        {
          v19 = v9 - i;
          if ( v11 == MiSystemPartition )
          {
            MiReturnResidentAvailable(v19);
            _InterlockedExchangeAdd64(&qword_1402FF440, v19);
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 744, v19);
          }
        }
        return v7;
      }
      *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_24:
      if ( (_DWORD)a2 == 1 )
        goto LABEL_31;
      CurrentPrcb = *(unsigned __int8 *)(v6 + 34);
      v17 = 0LL;
      if ( (CurrentPrcb & 0x10) == 0 )
      {
        LOBYTE(a2) = !_bittest64((const signed __int64 *)(v6 + 16), 0xAu);
        LOBYTE(CurrentPrcb) = a2 & ~((unsigned __int8)CurrentPrcb >> 3);
        if ( (CurrentPrcb & 1) != 0 )
          v17 = MiCapturePageFileInfoInline(v6 + 16, 1LL, 0LL);
        *(_BYTE *)(v6 + 34) |= 0x10u;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo(v11, v17, 1LL);
      v6 = 48 * (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    v8 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v3 = MiSystemPartition;
    v20 = v9 - i;
    if ( v11 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v20);
      _InterlockedExchangeAdd64(&qword_1402FF440, v20);
      goto LABEL_4;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 744, v20);
  }
  v22 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v22, a2, v8);
      while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
    v3 = MiSystemPartition;
    v8 = 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( v5 == 1 && v6 != 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_5;
  }
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_8;
  }
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (*(_QWORD *)(v6 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
