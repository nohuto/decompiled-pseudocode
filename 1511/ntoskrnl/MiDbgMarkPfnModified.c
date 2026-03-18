/*
 * XREFs of MiDbgMarkPfnModified @ 0x1401DDAA0
 * Callers:
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // r9
  __int64 v5; // r9
  signed __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // rbp
  int v12; // eax
  char v13; // bp
  unsigned int i; // ebp
  signed __int64 v15; // rax
  char v16; // dl
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v3 = 0;
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL;
  if ( !MmPhysicalMemoryBlock )
    return 1LL;
  if ( !MI_IS_PFN(v4) )
    return 1LL;
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
    return 1LL;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    return 0LL;
  }
  v9 = *(_QWORD *)(v6 + 16);
  if ( (v9 & 0x400) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
    {
LABEL_36:
      v3 = 1;
      goto LABEL_37;
    }
    if ( !(unsigned int)MI_IS_PFN_FILE_ONLY(48 * v5 - 0x58000000000LL) )
    {
      v10 = v9 >> 16;
      v11 = *(_QWORD *)v10;
      v12 = *(_DWORD *)(*(_QWORD *)v10 + 56LL);
      if ( (v12 & 0x20) == 0 )
      {
LABEL_22:
        *(_BYTE *)(v6 + 34) |= 0x10u;
        goto LABEL_36;
      }
      if ( (v12 & 0x40000) != 0 || !**(_QWORD **)(v11 + 96) )
      {
LABEL_18:
        if ( (*(_BYTE *)(v10 + 32) & 0x3Eu) < 8 && (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
          byte_1402FE5E0 = 1;
        byte_1402FEE01 = 1;
        goto LABEL_22;
      }
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v11 + 72)) )
      {
        *(_DWORD *)(v11 + 56) |= 0x40000u;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
        goto LABEL_18;
      }
    }
  }
  else
  {
    v13 = *(_BYTE *)(v6 + 34);
    if ( (v13 & 8) != 0 || !(unsigned int)MI_GET_PAGING_FILE_OFFSET(v6 + 16) )
    {
      *(_BYTE *)(v6 + 34) = v13 | 0x10;
      goto LABEL_36;
    }
    for ( i = 0; i < 0x20; ++i )
    {
      v15 = _InterlockedCompareExchange64(&MiState[i + 403], v6, 0LL);
      if ( !v15 )
        break;
      if ( (v15 | 1) == (v6 | 1) )
        goto LABEL_36;
    }
    if ( i == 32 )
      goto LABEL_37;
    if ( *(unsigned __int16 *)(v6 + 32) != -1 )
    {
      v16 = 1;
      if ( CurrentIrql == 17 )
        v16 = 5;
      MiAddLockedPageCharge(v6, v16);
      _InterlockedAdd64(&MiState[i + 403], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
      goto LABEL_36;
    }
    _InterlockedAnd64(&MiState[i + 403], 0LL);
  }
LABEL_37:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  return v3;
}
