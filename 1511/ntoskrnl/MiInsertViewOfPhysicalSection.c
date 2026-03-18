/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x14013BD7C
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiInsertVad @ 0x14004AD80 (MiInsertVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x14013C200 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x14013F0EC (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 */

__int64 __fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  _BYTE *v15; // r15
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned int ProtectionPfnCompatible; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  KIRQL v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v28; // [rsp+30h] [rbp-78h]
  __int64 v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  KIRQL v33; // [rsp+B0h] [rbp+8h]
  unsigned int v35; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  v4 = *(_QWORD *)(a2 + 80);
  v5 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v6 = (*(_DWORD *)(a2 + 48) >> 3) & 0x1F;
  v7 = ((8 * (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v28 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v8 = MmProtectToPteMask[v6] & 0xFFFFFFFFFFFFFF7FuLL;
  v9 = 16 * (v4 & 0xFFFFFFFFFLL);
  v10 = v8 | ((v9 | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
  if ( MmProtectToPteMask[v6] & 0x800 | ((v9 | HIBYTE(word_1402FE760) & 1) << 8) & 0x800 )
    v10 = v8 | ((v9 | HIBYTE(word_1402FE760) & 1) << 8) | 0x67;
  if ( (unsigned int)v6 >> 3 == 3 && ((*(_DWORD *)(a2 + 48) >> 3) & 7) != 0 )
    v11 = 2;
  else
    v11 = (unsigned int)v6 >> 3 != 1;
  v35 = MiPlatformCacheAttributes[v11];
  v12 = **(_QWORD **)(a2 + 72);
  CurrentThread = KeGetCurrentThread();
  MiLockVad((__int64)CurrentThread, a2);
  v31 = a1 + 1280;
  v33 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  MiInsertVad(v3, a1);
  MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(v3 + 48) >> 8) & 0x3F, v33, 1);
  v29 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) - 0x58000000000LL;
  v13 = MI_GET_USED_PTES_HANDLE(v5);
  v14 = v28;
  v30 = v13;
  if ( v7 <= v28 )
  {
    v15 = (_BYTE *)(48 * v4 - 0x57FFFFFFFDELL);
    while ( 1 )
    {
      if ( (v7 & 0xFFF) == 0 )
      {
        MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v33, 1);
        v29 = MI_GET_PFN_FROM_PTE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v13 = MI_GET_USED_PTES_HANDLE((__int64)(v7 << 25) >> 16);
        v30 = v13;
      }
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v13, 1u);
      if ( !MI_IS_PFN(v4) )
        break;
      v17 = ((v4 & 0xFFFFFFFFFLL) << 12) | v10 & 0xFFFF000000000FFFuLL;
      if ( !*((_WORD *)v15 - 1) )
        MiShowBadMapper(v4);
      if ( (*v15 & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute(v15 - 34, v35, v16);
      if ( (unsigned __int8)*v15 >> 6 != v35 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v6, (__int64)(v15 - 34));
        v19 = (16 * (v4 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1;
        v6 = ProtectionPfnCompatible;
        v14 = v28;
LABEL_18:
        v17 = MmProtectToPteMask[v6] & 0xFFFFFFFFFFFFFF7FuLL | (v19 << 8) | 0x25;
        if ( (v17 & 0x800) != 0 )
          v17 |= 0x42uLL;
        goto LABEL_27;
      }
      v14 = v28;
LABEL_27:
      *(_QWORD *)v7 = v17;
      if ( (unsigned int)MiPteInShadowRange(v7) )
        MiWritePteShadow(v7, v17);
      MiLockPageAtDpcInline(v29, v22, v23);
      *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ (*(_QWORD *)(v29 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v13 = v30;
      v7 += 8LL;
      ++v4;
      v15 += 48;
      if ( v7 > v14 )
      {
        v3 = a2;
        goto LABEL_31;
      }
    }
    v20 = MiLookupIoPageNode(v4);
    if ( !v20 )
      KeBugCheckEx(0x1Au, 0x61949uLL, v4, 1uLL, 0LL);
    v6 &= 7u;
    v21 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 48) + 2 * (v4 - *(_QWORD *)(v20 + 40))) >> 14;
    if ( v21 )
    {
      if ( v21 == 2 )
        v6 = (unsigned int)v6 | 0x38;
    }
    else
    {
      v6 = (unsigned int)v6 | 0x28;
    }
    v19 = (16 * (v4 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1;
    goto LABEL_18;
  }
LABEL_31:
  v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
  ++*(_QWORD *)(v12 + 40);
  ++*(_QWORD *)(v12 + 48);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72), v24);
  LOBYTE(v25) = v33;
  ++MEMORY[0xFFFFF58010804268];
  MiUnlockWorkingSetExclusive(v31, v25, v26);
  return MiUnlockVad((__int64)CurrentThread, v3);
}
