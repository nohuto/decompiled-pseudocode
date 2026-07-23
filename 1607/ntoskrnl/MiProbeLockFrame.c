/*
 * XREFs of MiProbeLockFrame @ 0x14002F2B0
 * Callers:
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiLockNonPagedPoolPte @ 0x1400242D0 (MiLockNonPagedPoolPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiProbeLockFrame(__int64 a1)
{
  unsigned __int64 v1; // rax
  bool v3; // bp
  bool v4; // zf
  unsigned __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // r9
  unsigned __int16 v10; // cx
  ULONG_PTR v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 CurrentPrcb; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // dx
  int *v16; // r14
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 result; // rax
  unsigned __int64 Address; // rax
  int v32; // eax
  unsigned __int8 v33; // [rsp+80h] [rbp+8h] BYREF
  int v34; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 > qword_140326AD0
    || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v1 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
  {
    if ( !*(_QWORD *)(a1 + 72)
      || (Address = MiLocateAddress(*(_QWORD *)a1)) != 0
      && ((v32 = *(_DWORD *)(Address + 48) & 7, v32 == 6) || v32 == 1) )
    {
      result = MiReferenceIoPages(0, *(_QWORD *)(a1 + 96), 1, 0, 0LL, 0LL);
      if ( (int)result >= 0 )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 48) + 10LL) |= 0x800u;
        return 0LL;
      }
      else
      {
        ++dword_14032712C;
      }
    }
    else
    {
      ++dword_140327128;
      return 3221225477LL;
    }
    return result;
  }
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 56) == 4;
  v33 = 17;
  if ( !v4
    || (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)a1)
    || (v7 = MiLockNonPagedPoolPte(v6 + ((v5 >> 9) & 0x7FFFFFFFF8LL), &v33),
        *(_QWORD *)(a1 + 96) = (v7 + 0x58000000000LL) / 48,
        !v7) )
  {
    v7 = 48LL * *(_QWORD *)(a1 + 96) - 0x58000000000LL;
    if ( *(PVOID *)(a1 + 88) == MmBadPointer )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiLockPageAtDpcInline(v7);
      v33 = CurrentIrql;
    }
    else
    {
      v33 = 17;
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
      }
    }
  }
  v9 = *(unsigned __int8 *)(v7 + 34);
  if ( ((unsigned __int8)v9 & 7u) <= 1 || (v10 = *(_WORD *)(v7 + 32)) == 0 )
  {
    if ( v33 == 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v33);
    }
    ++dword_14032711C;
    return 3221225477LL;
  }
  v11 = *(_QWORD *)(a1 + 48);
  if ( *(char *)(v11 + 10) < 0
    && (v9 & 0x20) != 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    && *(_QWORD *)v7
    && ((*(_QWORD *)(v7 + 40) >> 54) & 7) != 1 )
  {
    KeBugCheckEx(0x1Au, 0x61946uLL, v11, *(_QWORD *)(a1 + 96), 0LL);
  }
  if ( v10 >= 0x7FFFu )
    goto LABEL_78;
  v12 = *(_QWORD *)(v7 + 24);
  CurrentPrcb = *(_QWORD *)(v7 + 40);
  if ( (CurrentPrcb & 0x10000000000000LL) == 0 )
  {
    v12 &= 0x3FFFFFFFFFFFFFFFuLL;
    if ( v10 == 1 )
    {
      if ( v12 )
        goto LABEL_27;
    }
    else if ( v10 != 2 || !v12 )
    {
      goto LABEL_47;
    }
    if ( (v9 & 8) != 0 )
    {
LABEL_27:
      if ( (CurrentPrcb & 0x200000000000000LL) != 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v3 = 1;
      }
      else
      {
        v12 = 0xFFFFF68000000000uLL;
        v14 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
        if ( v14 <= 0xFFFFF6BFFFFFFF78uLL && v14 >= 0xFFFFF68000000000uLL )
          v3 = ((*(unsigned __int8 *)(v7 + 35) >> 5) & 1) != 0;
      }
      v15 = (HIDWORD(CurrentPrcb) >> 8) & 0x3FF;
      if ( v15 == 1023 )
        v16 = MiSystemPartition;
      else
        v16 = *(int **)(qword_140327038 + 8LL * v15);
      if ( !v3 || (unsigned int)MiChargeCommit((__int64)v16, 1uLL, 8) )
      {
        if ( v16 == MiSystemPartition )
        {
          CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
          v17 = *(_DWORD *)(CurrentPrcb + 24516);
          while ( v17 )
          {
            if ( v17 == -1 )
              break;
            v18 = v17;
            v17 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24516), v17 - 1, v17);
            if ( v18 == v17 )
              goto LABEL_47;
          }
        }
        v19 = MiChargePartitionResidentAvailable(v16, 1LL, 0LL);
        if ( !v19 && v3 )
          MiReturnCommit(v16, 1LL);
        if ( v19 )
          goto LABEL_47;
      }
LABEL_78:
      if ( v33 == 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v33);
      }
      ++dword_140327120;
      return 3221225633LL;
    }
  }
LABEL_47:
  ++*(_WORD *)(v7 + 32);
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v20 = *(_QWORD *)(v7 + 16);
    if ( (v20 & 0x400) == 0 && (v20 & 4) != 0 )
    {
      v21 = *(_QWORD *)(v7 + 40) >> 40;
      LOWORD(v21) = v21 & 0x3FF;
      *(_BYTE *)(MiPartitionIdToPointer(v21, CurrentPrcb, v12, v9) + 586) = 1;
    }
  }
  if ( v33 == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v33);
  }
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    v22 = *(_QWORD *)(v7 + 40);
    if ( ((v22 >> 54) & 7) != 1 )
    {
      v23 = v22 & 0xFFFFFFFFFLL;
      if ( (v22 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
      {
        v24 = (v22 >> 57) & 1;
        if ( (_DWORD)v24
          || (v25 = 48 * v23 - 0x58000000000LL, (*(_BYTE *)(v25 + 34) & 7) == 6)
          && (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
          && (v26 = *(_QWORD *)(v25 + 8) | 0x8000000000000000uLL, v26 >= 0xFFFFF68000000000uLL)
          && v26 <= 0xFFFFF6FFFFFFFFFFuLL
          && (v27 = (__int64)(v26 << 25) >> 16, v27 >= 0xFFFFF68000000000uLL)
          && v27 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( *(_QWORD *)(a1 + 104) != v23 )
          {
            if ( (_DWORD)v24 )
            {
              v28 = 1LL;
              v29 = v7;
            }
            else
            {
              v29 = 48 * v23 - 0x58000000000LL;
              v28 = 0LL;
            }
            if ( !(unsigned int)MiLockPageTablePage(v29, v28) )
            {
              MiLockPageAtDpcInline(v7);
              MiRemoveLockedPageChargeAndDecRef(v7);
              _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              ++dword_140327124;
              return 3221225633LL;
            }
            *(_QWORD *)(a1 + 104) = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFLL;
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 10LL) |= 0x100u;
          }
        }
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 48) + 10LL) < 0
    && (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0
    && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v7 + 16)) + 112LL));
  }
  return 0LL;
}
