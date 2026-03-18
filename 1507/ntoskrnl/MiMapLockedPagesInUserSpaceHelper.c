/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiInsertVad @ 0x14008AC30 (MiInsertVad.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiLookupIoPageNode @ 0x140135BE4 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x140139738 (MiAssignInitialPageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        ULONG_PTR *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _KPROCESS *Process; // rdi
  ULONG_PTR v8; // r14
  unsigned int v9; // r15d
  int v10; // ebp
  unsigned int v11; // r12d
  volatile signed __int32 *v12; // rsi
  unsigned __int8 CurrentIrql; // bl
  unsigned int v14; // ebx
  signed __int32 i; // edx
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  int ProtectionPfnCompatible; // ebx
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // r8
  ULONG_PTR v23; // r9
  __int16 v24; // r10
  __int64 v25; // r11
  __int64 v26; // rdi
  __int64 v27; // r10
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  unsigned int v37; // edi
  __int64 v38; // rbx
  unsigned __int8 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+80h] [rbp+8h]
  unsigned __int64 v44; // [rsp+A8h] [rbp+30h]

  v41 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v10 = a7 < 0 ? 1 : 4;
  v11 = MiPlatformCacheAttributes[a4];
  if ( v11 )
  {
    if ( v11 == 2 )
      v10 |= 0x18u;
  }
  else
  {
    v10 |= 8u;
  }
  v12 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v14 = 0;
    if ( _interlockedbittestandset(v12, 0x1Fu) )
      v14 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
    for ( i = *v12; (*v12 & 0xBFFFFFFF) != 0x80000000; i = *v12 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v12, i | 0x40000000, i);
      if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v14);
    }
    CurrentIrql = v40;
  }
  if ( a6 )
  {
    MiInsertVad(a6, (__int64)Process);
    v9 = (*(_DWORD *)(a6 + 48) >> 8) & 0x3F;
  }
  v17 = v8 + 0x90482413000LL;
  v44 = v8 + 0x90482413000LL;
  do
  {
    MiMakeSystemAddressValid(v8, 0LL, v9, CurrentIrql, 1);
    v18 = MI_GET_USED_PTES_HANDLE(v41);
    MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v18, 1u);
    ProtectionPfnCompatible = v10;
    if ( a3 )
    {
      v20 = 48LL * *a3 - 0x58000000000LL;
      ProtectionPfnCompatible = (*(_DWORD *)(v20 + 16) >> 5) & 0x1F;
      v21 = *(_BYTE *)(v20 + 34) >> 6;
      if ( v21 == 2 )
        v11 = 2;
      else
        v11 = v21 != 0;
      ++a3;
    }
    if ( MI_IS_PFN(*a2) )
    {
      v26 = 48 * v23 - v25;
      if ( *(_WORD *)(v26 + 32) == v24 )
        MiShowBadMapper(v23);
      if ( (*(_BYTE *)(v26 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v26, v11, v22);
      if ( v11 != *(unsigned __int8 *)(v26 + 34) >> 6 )
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v26);
      v17 = v44;
    }
    else
    {
      ProtectionPfnCompatible &= 7u;
      v35 = MiLookupIoPageNode(v23);
      if ( !v35 )
        KeBugCheckEx(0x1Au, 0x61949uLL, *a2, 1uLL, 0LL);
      v36 = *(unsigned __int16 *)(*(_QWORD *)(v35 + 48) + 2 * (*a2 - *(_QWORD *)(v35 + 40))) >> 14;
      if ( v36 )
      {
        if ( v36 == 2 )
          ProtectionPfnCompatible |= 0x38u;
      }
      else
      {
        ProtectionPfnCompatible |= 0x28u;
      }
    }
    v27 = 0xFFFFFFFFFLL;
    v28 = MmProtectToPteMask[ProtectionPfnCompatible] & 0xFFFFFFFFFFFFFF7FuLL;
    v29 = v28 | ((HIBYTE(word_14034EC18) & 1 | (16 * (*a2 & 0xFFFFFFFFFLL))) << 8) | 0x25;
    if ( MmProtectToPteMask[ProtectionPfnCompatible] & 0x800 | ((HIBYTE(word_14034EC18) & 1 | (16 * (*a2 & 0xFFFFFFFFFLL))) << 8) & 0x800 )
      v29 = v28 | ((HIBYTE(word_14034EC18) & 1 | (16 * (*a2 & 0xFFFFFFFFFLL))) << 8) | 0x67;
    *(_QWORD *)v8 = v29;
    if ( v17 <= 0x7F8 )
    {
      MiWritePteShadow(v8, v29);
      v27 = 0xFFFFFFFFFLL;
    }
    v30 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v31 = *v30;
    if ( (unsigned __int64)(v30 + 0x12090482600LL) <= 0x7F8
      && (unsigned int)MiPteHasShadow(v28, v31)
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v33 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 8 * ((v32 >> 3) & 0x1FF));
        if ( (v34 & 0x20) != 0 )
          v31 |= 0x20uLL;
        if ( (v34 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
    }
    v37 = 0;
    v38 = 48 * (v27 & (v31 >> 12)) - 0x58000000000LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v37);
      }
      while ( *(__int64 *)(v38 + 24) < 0 );
    }
    *(_QWORD *)(v38 + 24) ^= (*(_QWORD *)(v38 + 24) ^ (*(_QWORD *)(v38 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 += 8LL;
    v17 = v44 + 8;
    ++a2;
    v41 += 4096LL;
    CurrentIrql = v40;
    v44 += 8LL;
    --a5;
  }
  while ( a5 );
  if ( a6 )
    ++MEMORY[0xFFFFF58010804220];
  return MiUnlockWorkingSetExclusive((__int64)v12, v40);
}
