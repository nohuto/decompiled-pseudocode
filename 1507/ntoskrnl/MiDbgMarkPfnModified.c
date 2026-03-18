/*
 * XREFs of MiDbgMarkPfnModified @ 0x140222E0C
 * Callers:
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDbgMarkPfnModified(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r9
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  signed __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v14; // rcx
  _BYTE *PrototypePteDirect; // r12
  __int64 v16; // rbp
  int v17; // ecx
  char v18; // r9
  __int64 v19; // rax
  unsigned int i; // ebp
  signed __int64 v21; // rax
  __int64 v22; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v24; // [rsp+58h] [rbp+10h] BYREF

  v24 = a2;
  v2 = a2;
  if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8 )
    v2 = MiReadPteShadow(&v24, a2);
  v4 = (v2 >> 12) & 0xFFFFFFFFFLL;
  v5 = 0;
  if ( !MmPhysicalMemoryBlock )
    return 1LL;
  if ( !MI_IS_PFN(v4) )
    return 1LL;
  v11 = 48 * v8 - 0x58000000000LL;
  if ( (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
    return 1LL;
  CurrentIrql = 17;
  if ( KeGetCurrentIrql() <= 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    if ( CurrentIrql != 17 )
      __writecr8(CurrentIrql);
    return 0LL;
  }
  v14 = (_QWORD *)(v11 + 16);
  if ( (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
  {
    if ( (*(_BYTE *)(v11 + 34) & 0x10) != 0 )
    {
LABEL_41:
      v5 = 1;
      goto LABEL_42;
    }
    PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*v14, v6, v7, v8);
    v16 = *(_QWORD *)PrototypePteDirect;
    v17 = *(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL);
    if ( (v17 & 0x20) == 0 )
    {
LABEL_25:
      *(_BYTE *)(v11 + 34) |= 0x10u;
      goto LABEL_41;
    }
    if ( (v17 & 0x40000) != 0 || !**(_QWORD **)(v16 + 96) )
    {
LABEL_21:
      if ( (PrototypePteDirect[32] & 0x3Eu) < 8 && (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
        byte_14034EA90 = 1;
      byte_14034F2C1 = 1;
      goto LABEL_25;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v16 + 72)) )
    {
      *(_DWORD *)(v16 + 56) |= 0x40000u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16 + 72, retaddr);
      else
        *(_DWORD *)(v16 + 72) = 0;
      goto LABEL_21;
    }
  }
  else
  {
    v18 = *(_BYTE *)(v11 + 34);
    if ( (v18 & 8) != 0 )
      goto LABEL_40;
    v19 = *v14;
    if ( (unsigned __int64)v14 + v10 <= v9 )
      LOBYTE(v19) = MiReadPteShadow(v14, *v14);
    if ( (v19 & 4) == 0 )
    {
LABEL_40:
      *(_BYTE *)(v11 + 34) = v18 | 0x10;
      goto LABEL_41;
    }
    for ( i = 0; i < 0x20; ++i )
    {
      v21 = _InterlockedCompareExchange64(&MiState[i + 403], v11, 0LL);
      if ( !v21 )
        break;
      if ( (v21 | 1) == (v11 | 1) )
        goto LABEL_41;
    }
    if ( i == 32 )
      goto LABEL_42;
    if ( *(unsigned __int16 *)(v11 + 32) != -1 )
    {
      v22 = 1LL;
      if ( CurrentIrql == 17 )
        v22 = 5LL;
      MiAddLockedPageCharge(v11, v22, v7);
      _InterlockedAdd64(&MiState[i + 403], 1uLL);
      _InterlockedCompareExchange(&ExpDebuggerWork, 1, 0);
      goto LABEL_41;
    }
    _InterlockedAnd64(&MiState[i + 403], 0LL);
  }
LABEL_42:
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
    __writecr8(CurrentIrql);
  return v5;
}
