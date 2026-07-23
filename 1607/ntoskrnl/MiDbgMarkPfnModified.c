/*
 * XREFs of MiDbgMarkPfnModified @ 0x14014829C
 * Callers:
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiDbgMarkPfnModified(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // r9
  signed __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v9; // rdx
  _BYTE *PrototypePteDirect; // r13
  __int64 v11; // rbp
  int v12; // ecx
  char v13; // r9
  unsigned int i; // ebp
  signed __int64 v15; // rax
  char v16; // dl
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v17);
  v4 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 1LL;
  if ( !MiIsPfnInline(v3) )
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
  if ( (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 34) & 0x10) != 0 )
    {
LABEL_37:
      v4 = 1;
      goto LABEL_38;
    }
    if ( !(unsigned int)MiIsPfnFileOnly(48 * v5 - 0x58000000000LL) )
    {
      PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*v9);
      v11 = *(_QWORD *)PrototypePteDirect;
      v12 = *(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL);
      if ( (v12 & 0x20) == 0 )
      {
LABEL_23:
        *(_BYTE *)(v6 + 34) |= 0x10u;
        goto LABEL_37;
      }
      if ( (v12 & 0x40000) != 0 || !**(_QWORD **)(v11 + 96) )
      {
LABEL_18:
        if ( (PrototypePteDirect[32] & 0x3Eu) < 8 && a1 >= qword_140326950 && a1 < qword_140326950 + 0x8000000000LL )
          byte_1403268E0 = 1;
        byte_140327241 = 1;
        goto LABEL_23;
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
    if ( (v13 & 8) != 0 || !(unsigned int)MiGetPagingFileOffset(v6 + 16) )
    {
      *(_BYTE *)(v6 + 34) = v13 | 0x10;
      goto LABEL_37;
    }
    for ( i = 0; i < 0x20; ++i )
    {
      v15 = _InterlockedCompareExchange64(&MiState[i + 443], v6, 0LL);
      if ( !v15 )
        break;
      if ( (v15 | 1) == (v6 | 1) )
        goto LABEL_37;
    }
    if ( i == 32 )
      goto LABEL_38;
    if ( *(unsigned __int16 *)(v6 + 32) != -1 )
    {
      v16 = 1;
      if ( CurrentIrql == 17 )
        v16 = 5;
      MiAddLockedPageCharge(v6, v16);
      _InterlockedAdd64(&MiState[i + 443], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
      goto LABEL_37;
    }
    _InterlockedAnd64(&MiState[i + 443], 0LL);
  }
LABEL_38:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  return v4;
}
