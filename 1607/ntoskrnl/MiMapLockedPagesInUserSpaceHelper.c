/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x14010E778
 * Callers:
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiInsertVad @ 0x1400424D0 (MiInsertVad.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x140110B24 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x1401472A8 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 */

__int64 __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        ULONG_PTR *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  ULONG_PTR *v7; // rdi
  _KPROCESS *Process; // rbx
  ULONG_PTR v9; // r14
  unsigned int v10; // r15d
  int v11; // esi
  unsigned int v12; // ebp
  __int64 v13; // r12
  KIRQL v14; // al
  __int64 UsedPtesHandle; // rax
  int ProtectionPfnCompatible; // ebx
  char v17; // al
  ULONG_PTR v18; // r8
  __int16 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rdx
  KIRQL v28; // bl
  __int64 v29; // rax
  int v30; // eax
  unsigned __int64 v32; // [rsp+80h] [rbp+8h]
  ULONG_PTR *v33; // [rsp+88h] [rbp+10h]
  KIRQL v35; // [rsp+B0h] [rbp+38h]

  v33 = a2;
  v32 = a1;
  v7 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v11 = a7 < 0 ? 1 : 4;
  v12 = MiPlatformCacheAttributes[a4];
  if ( v12 )
  {
    if ( v12 == 2 )
      v11 |= 0x18u;
  }
  else
  {
    v11 |= 8u;
  }
  v13 = (__int64)&Process[1].IdealNode[12];
  v14 = MiLockWorkingSetExclusive((__int64)&Process[1].IdealNode[12]);
  v35 = v14;
  if ( !a6 )
    goto LABEL_8;
  MiInsertVad(a6, (__int64)Process);
  v10 = (*(_DWORD *)(a6 + 48) >> 8) & 0x3F;
  do
  {
    v14 = v35;
LABEL_8:
    MiMakeSystemAddressValid(v9, 0LL, v10, v14, 1);
    UsedPtesHandle = MiGetUsedPtesHandle(v32);
    MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
    ProtectionPfnCompatible = v11;
    if ( a3 )
    {
      ProtectionPfnCompatible = (*(_DWORD *)(48LL * *a3 - 0x58000000000LL + 16) >> 5) & 0x1F;
      v17 = *(_BYTE *)(48LL * *a3 - 0x58000000000LL + 34) >> 6;
      if ( v17 == 2 )
        v12 = 2;
      else
        v12 = v17 != 0;
      ++a3;
    }
    if ( MiIsPfnInline(*v7) )
    {
      v21 = v20 + 48 * v18;
      if ( *(_WORD *)(v21 + 32) == v19 )
        MiShowBadMapper(v18);
      if ( (*(_BYTE *)(v21 + 34) & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v21, v12);
      if ( v12 != *(unsigned __int8 *)(v21 + 34) >> 6 )
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v21);
      v7 = v33;
    }
    else
    {
      ProtectionPfnCompatible &= 7u;
      v29 = MiLookupIoPageNode(v18);
      if ( !v29 )
        KeBugCheckEx(0x1Au, 0x61949uLL, *v7, 1uLL, 0LL);
      v30 = *(unsigned __int16 *)(*(_QWORD *)(v29 + 48) + 2 * ((*v7 & 0xFFFFFFFFFLL) - *(_QWORD *)(v29 + 40))) >> 14;
      if ( v30 )
      {
        if ( v30 == 2 )
          ProtectionPfnCompatible |= 0x38u;
      }
      else
      {
        ProtectionPfnCompatible |= 0x28u;
      }
    }
    v22 = MmProtectToPteMask[ProtectionPfnCompatible] & 0xFFFFFFFFFFFFFF7FuLL;
    v23 = v22 | ((HIBYTE(word_140326AE8) & 1 | (16 * (*v7 & 0xFFFFFFFFFLL))) << 8) | 0x25;
    if ( MmProtectToPteMask[ProtectionPfnCompatible] & 0x800 | ((HIBYTE(word_140326AE8) & 1 | (16 * (*v7 & 0xFFFFFFFFFLL))) << 8) & 0x800 )
      v23 = v22 | ((HIBYTE(word_140326AE8) & 1 | (16 * (*v7 & 0xFFFFFFFFFLL))) << 8) | 0x67;
    *(_QWORD *)v9 = v23;
    if ( (unsigned int)MiPteInShadowRange(v9, v23) )
      MiWritePteShadow(v25, v24);
    v26 = MI_GET_PFN_FROM_PTE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MiLockPageAtDpcInline(v26);
    v27 = *(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v26 + 24) = v27;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v7;
    v9 += 8LL;
    v33 = v7;
    if ( (v9 & 0x78) == 0 && (MiWorkingSetIsContended(v13) || KeShouldYieldProcessor()) )
    {
      v28 = v35;
      LOBYTE(v27) = v35;
      MiRelockWorkingSetExclusive(v13, v27);
    }
    else
    {
      v28 = v35;
    }
    v32 += 4096LL;
    --a5;
  }
  while ( a5 );
  if ( a6 )
    ++*(_QWORD *)(qword_140327FD0 + 276840560);
  LOBYTE(v27) = v28;
  return MiUnlockWorkingSetExclusive(v13, v27);
}
