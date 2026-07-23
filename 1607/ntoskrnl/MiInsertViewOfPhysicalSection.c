/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x140146DB8
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiInsertVad @ 0x1400424D0 (MiInsertVad.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x140110B24 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x1401472A8 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiInsertViewOfPhysicalSection(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r14
  __int64 v4; // rbp
  unsigned __int64 BugCheckParameter4; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r13
  LONG *SharedVm; // rbx
  __int64 UsedPtesHandle; // rax
  _BYTE *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rdx
  ULONG_PTR v20; // rbx
  int v21; // eax
  ULONG_PTR v22; // r12
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned int ProtectionPfnCompatible; // eax
  __int64 v27; // rbx
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  KIRQL v31; // al
  __int64 v32; // rdx
  __int64 v34; // [rsp+30h] [rbp-78h]
  unsigned __int64 v35; // [rsp+38h] [rbp-70h]
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-68h]
  _KPROCESS *BugCheckParameter3a; // [rsp+40h] [rbp-68h]
  __int64 v38; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  KIRQL v42; // [rsp+C0h] [rbp+18h]
  unsigned int v43; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  v3 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v4 = (*(_DWORD *)(a2 + 48) >> 3) & 0x1F;
  BugCheckParameter4 = ((8 * (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32))) & 0x7FFFFFFFF8LL)
                     - 0x98000000000LL;
  v6 = *(_QWORD *)(a2 + 80);
  v35 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v7 = MmProtectToPteMask[v4] & 0xFFFFFFFFFFFFFF7FuLL;
  v8 = 16 * (v6 & 0xFFFFFFFFFLL);
  v9 = v7 | ((v8 | HIBYTE(word_140326AE8) & 1) << 8) | 0x25;
  if ( MmProtectToPteMask[v4] & 0x800 | ((v8 | HIBYTE(word_140326AE8) & 1) << 8) & 0x800 )
    v9 = v7 | ((v8 | HIBYTE(word_140326AE8) & 1) << 8) | 0x67;
  v10 = MiProtectionToCacheAttribute(v4);
  v12 = v11 + 1280;
  v43 = v10;
  CurrentThread = KeGetCurrentThread();
  v13 = **(_QWORD **)(v2 + 72);
  v38 = v11 + 1280;
  MiLockVad((__int64)CurrentThread, v2);
  SharedVm = MiGetSharedVm(v12);
  v42 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  MiInsertVad(v2, a1);
  MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(v2 + 48) >> 8) & 0x3F, v42, 1);
  v34 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) - 0x58000000000LL;
  UsedPtesHandle = MiGetUsedPtesHandle(v3);
  BugCheckParameter3 = UsedPtesHandle;
  if ( BugCheckParameter4 <= v35 )
  {
    v16 = (_BYTE *)(48 * v6 - 0x57FFFFFFFDELL);
    while ( 1 )
    {
      if ( (BugCheckParameter4 & 0xFFF) == 0 )
      {
        v17 = (*(_DWORD *)(v2 + 48) >> 8) & 0x3F;
        BugCheckParameter3a = KeGetCurrentThread()->ApcState.Process;
        v18 = (__int64)&BugCheckParameter3a[1].IdealNode[12];
        if ( !MiIsAddressValid(BugCheckParameter4) )
        {
          v20 = (v17 << 57) | 0x100000000000002LL;
          do
          {
            LOBYTE(v19) = v42;
            MiUnlockWorkingSetExclusive(v18, v19);
            v21 = MmAccessFault(v20, BugCheckParameter4, 0, 0LL);
            v22 = v21;
            if ( v21 < 0 )
            {
              MmFlushAllFilesystemPages(1LL);
              KeBugCheckEx(0x7Au, 1uLL, v22, (ULONG_PTR)BugCheckParameter3a, BugCheckParameter4);
            }
            v18 = (__int64)&BugCheckParameter3a[1].IdealNode[12];
            MiLockWorkingSetExclusive((__int64)&BugCheckParameter3a[1].IdealNode[12]);
          }
          while ( !MiIsAddressValid(BugCheckParameter4) );
        }
        v34 = MI_GET_PFN_FROM_PTE(((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((BugCheckParameter4 << 25) - (v23 << 25)) >> 16);
        BugCheckParameter3 = UsedPtesHandle;
      }
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      if ( !MiIsPfnInline(v6) )
        break;
      v25 = ((v6 & 0xFFFFFFFFFLL) << 12) | v9 & 0xFFFF000000000FFFuLL;
      if ( !*((_WORD *)v16 - 1) )
        MiShowBadMapper(v6);
      if ( (*v16 & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v16 - 34, v43);
      if ( (unsigned __int8)*v16 >> 6 != v43 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v4, (__int64)(v16 - 34));
        v27 = (16 * (v6 & 0xFFFFFFFFFLL)) | HIBYTE(word_140326AE8) & 1;
        v4 = ProtectionPfnCompatible;
LABEL_24:
        v25 = MmProtectToPteMask[v4] & 0xFFFFFFFFFFFFFF7FuLL | (v27 << 8) | 0x25;
        if ( (v25 & 0x800) != 0 )
          v25 |= 0x42uLL;
      }
      *(_QWORD *)BugCheckParameter4 = v25;
      if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v24) )
        MiWritePteShadow(v30, v25);
      MiLockPageAtDpcInline(v34);
      *(_QWORD *)(v34 + 24) ^= (*(_QWORD *)(v34 + 24) ^ (*(_QWORD *)(v34 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v2 = a2;
      BugCheckParameter4 += 8LL;
      ++v6;
      v16 += 48;
      if ( BugCheckParameter4 > v35 )
        goto LABEL_30;
      UsedPtesHandle = BugCheckParameter3;
    }
    v28 = MiLookupIoPageNode(v6);
    if ( !v28 )
      KeBugCheckEx(0x1Au, 0x61949uLL, v6, 1uLL, 0LL);
    v4 &= 7u;
    v29 = *(unsigned __int16 *)(v28[6] + 2 * ((v6 & 0xFFFFFFFFFLL) - v28[5])) >> 14;
    if ( v29 )
    {
      if ( v29 == 2 )
        v4 = (unsigned int)v4 | 0x38;
    }
    else
    {
      v4 = (unsigned int)v4 | 0x28;
    }
    v24 = 16 * (v6 & 0xFFFFFFFFFLL);
    v27 = v24 | HIBYTE(word_140326AE8) & 1;
    goto LABEL_24;
  }
LABEL_30:
  v31 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v13 + 72));
  ++*(_QWORD *)(v13 + 40);
  ++*(_QWORD *)(v13 + 48);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v13 + 72), v31);
  LOBYTE(v32) = v42;
  ++*(_QWORD *)(qword_140327FD0 + 276840560);
  MiUnlockWorkingSetExclusive(v38, v32);
  return MiUnlockVad((__int64)CurrentThread, v2);
}
