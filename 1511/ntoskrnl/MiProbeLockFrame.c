/*
 * XREFs of MiProbeLockFrame @ 0x1400A7C30
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1400A70B0 (MmProbeAndLockSelectedPages.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 * Callees:
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     MiLockNonPagedPoolPte @ 0x1400DCB30 (MiLockNonPagedPoolPte.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  bool v4; // zf
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned __int8 v7; // dl
  unsigned __int16 v8; // r9
  ULONG_PTR v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // bp
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // cx
  int *v16; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v19; // ett
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 result; // rax
  unsigned __int64 v29; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 Address; // rax
  int v34; // eax
  unsigned __int8 v35; // [rsp+70h] [rbp+8h] BYREF
  int v36; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 > qword_1402FE758
    || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 72)
      || (Address = MiLocateAddress(*(_QWORD *)a1)) != 0
      && ((v34 = *(_DWORD *)(Address + 48) & 7, v34 == 6) || v34 == 1) )
    {
      result = MiReferenceIoPages(0, *(_QWORD *)(a1 + 96), 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 48) + 10LL) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_1402FED1C;
      }
    }
    else
    {
      ++dword_1402FED18;
      return 3221225477LL;
    }
    return result;
  }
  v4 = *(_DWORD *)(a1 + 56) == 4;
  v5 = 0x98000000000LL;
  v35 = 17;
  if ( !v4
    || (v29 = *(_QWORD *)a1, (*(_BYTE *)(8 * ((*(_QWORD *)a1 >> 39) & 0x1FFLL) - 0x90482413000LL) & 1) != 0)
    && (*(_BYTE *)(((v29 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (a2 = 0x904C0000000LL, (*(_BYTE *)(((v29 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81)
    || (v6 = MiLockNonPagedPoolPte(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v35),
        a2 = (v6 + 0x58000000000LL) / 48,
        *(_QWORD *)(a1 + 96) = a2,
        !v6) )
  {
    v6 = 48LL * *(_QWORD *)(a1 + 96) - 0x58000000000LL;
    if ( *(PVOID *)(a1 + 88) == MmBadPointer )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v6, a2, v5);
      v35 = CurrentIrql;
    }
    else
    {
      v35 = 17;
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v36, a2, v5);
        while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
      }
    }
  }
  v7 = *(_BYTE *)(v6 + 34);
  if ( (v7 & 7u) <= 1 || (v8 = *(_WORD *)(v6 + 32)) == 0 )
  {
    if ( v35 == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v35);
    }
    ++dword_1402FED0C;
    return 3221225477LL;
  }
  v9 = *(_QWORD *)(a1 + 48);
  if ( ((v7 >> 5) & (*(char *)(v9 + 10) < 0)) != 0
    && (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && *(_QWORD *)v6
    && ((*(_QWORD *)(v6 + 40) >> 54) & 7) != 1 )
  {
    KeBugCheckEx(0x1Au, 0x61946uLL, v9, *(_QWORD *)(a1 + 96), 0LL);
  }
  if ( v8 >= 0x7FFFu )
    goto LABEL_84;
  v10 = *(_QWORD *)(v6 + 24);
  v11 = *(_QWORD *)(v6 + 40);
  if ( (v10 & 0x4000000000000000LL) != 0 )
  {
    if ( (v11 & 0x10000000000000LL) != 0 )
      goto LABEL_29;
  }
  else if ( (v11 & 0x10000000000000LL) != 0 )
  {
    goto LABEL_29;
  }
  v12 = v10 & 0x3FFFFFFFFFFFFFFFLL;
  if ( v8 == 1 )
  {
    if ( v12 || (v7 & 8) != 0 )
    {
LABEL_15:
      v13 = 0;
      if ( (v11 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
      {
        v13 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
        if ( v14 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v14 >= 0xFFFFF68000000000uLL
          && ((*(unsigned __int8 *)(v6 + 35) >> 5) & 1) != 0 )
        {
          v13 = 1;
        }
      }
      v15 = (HIDWORD(v11) >> 8) & 0x3FF;
      if ( v15 == 1023 )
        v16 = MiSystemPartition;
      else
        v16 = *(int **)(qword_1402FEC28 + 8LL * v15);
      if ( v13 && !(unsigned int)MiChargeCommit((unsigned __int64)v16, 1uLL, 8uLL) )
        goto LABEL_84;
      if ( v16 == MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        while ( CachedResidentAvailable )
        {
          if ( CachedResidentAvailable == -1 )
            break;
          v19 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v19 == CachedResidentAvailable )
            goto LABEL_27;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v16, 1LL, 0LL) )
      {
        if ( v13 )
          MiReturnCommit((__int64)v16, 1uLL);
LABEL_84:
        if ( v35 == 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v35);
        }
        ++dword_1402FED10;
        return 3221225633LL;
      }
LABEL_27:
      if ( v16 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_1402FF600, 1uLL);
    }
  }
  else if ( v8 == 2 && v12 && (v7 & 8) != 0 )
  {
    goto LABEL_15;
  }
LABEL_29:
  ++*(_WORD *)(v6 + 32);
  if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && (!_bittest64((const signed __int64 *)(v6 + 16), 0xAu) & _bittest64((const signed __int64 *)(v6 + 16), 0xDu)) != 0 )
  {
    v32 = *(_QWORD *)(v6 + 40) >> 40;
    LOWORD(v32) = v32 & 0x3FF;
    *(_BYTE *)(MiPartitionIdToPointer(v32) + 594) = 1;
  }
  if ( v35 == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v35);
  }
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    v20 = *(_QWORD *)(v6 + 40);
    if ( ((v20 >> 54) & 7) != 1 )
    {
      v21 = v20 & 0xFFFFFFFFFLL;
      if ( (v20 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v22 = (v20 >> 57) & 1;
        if ( (_DWORD)v22
          || (v23 = 48 * v21 - 0x58000000000LL, (*(_BYTE *)(v23 + 34) & 7) == 6)
          && (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
          && (v24 = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL, v24 + 0x98000000000LL <= 0x7FFFFFFFFFLL)
          && (unsigned __int64)(((__int64)(v24 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL )
        {
          if ( *(_QWORD *)(a1 + 104) != v21 )
          {
            if ( (_DWORD)v22 )
            {
              v22 = 1LL;
              v25 = v6;
            }
            else
            {
              v25 = 48 * v21 - 0x58000000000LL;
            }
            if ( !(unsigned int)MiLockPageTablePage(v25, v22) )
            {
              MiLockPageAtDpcInline(v6, v26, v27);
              MiRemoveLockedPageChargeAndDecRef(v6);
              _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_1402FED14;
              return 3221225633LL;
            }
            *(_QWORD *)(a1 + 104) = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 10LL) |= 0x100u;
          }
        }
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 48) + 10LL) < 0 && (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0 )
  {
    v31 = *(_QWORD *)(v6 + 16);
    if ( (v31 & 0x400) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v31 >> 16) + 104LL));
  }
  return 0LL;
}
