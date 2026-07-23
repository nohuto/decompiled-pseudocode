/*
 * XREFs of MiReplaceTransitionPage @ 0x140105244
 * Callers:
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiIsDecayPfn @ 0x1400A2720 (MiIsDecayPfn.c)
 *     MiDetermineModifiedPageListHead @ 0x1400B2494 (MiDetermineModifiedPageListHead.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiSetPfnBlink @ 0x14010584C (MiSetPfnBlink.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     MiReplaceNumaStandbyPage @ 0x1401059EC (MiReplaceNumaStandbyPage.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401DB9B4 (KeMakeKernelDirectoryTableBase.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateTransitionPteFrame @ 0x1401F2864 (MiUpdateTransitionPteFrame.c)
 */

unsigned __int64 __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v3; // rbp
  int v4; // r15d
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  ULONG_PTR v10; // rsi
  int *v11; // rax
  unsigned __int8 v12; // cl
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  BOOL v15; // r12d
  int v16; // eax
  unsigned int PfnPriority; // eax
  __int64 v18; // rcx
  bool v19; // zf
  __int64 v20; // r8
  struct _KLOCK_QUEUE_HANDLE *v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // r11
  __int64 v25; // r9
  int IsDecayPfn; // eax
  int v27; // r10d
  int v28; // edx
  _QWORD *v29; // r8
  __int64 updated; // rax
  __int64 v31; // r8
  unsigned __int64 v32; // r14
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  volatile signed __int32 *v35; // r8
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // r14d
  unsigned __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // r9
  __int64 KernelDirectoryTableBase; // rax
  __int64 v48; // r9
  unsigned __int64 result; // rax
  signed __int32 v50[16]; // [rsp+30h] [rbp+30h] BYREF
  _BYTE v51[48]; // [rsp+70h] [rbp+70h] BYREF

  v3 = (unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0uLL;
  v4 = 0xFFFFFF;
  *(_DWORD *)v3 = 0xFFFFFF;
  v7 = (a1 + 0x58000000000LL) / 48;
  *(_QWORD *)(v3 + 16) = v7;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v10 = ((unsigned __int64)v9 >> 63) + (v9 >> 3);
  v11 = MiPartitionIdToPointer((HIDWORD(v8) >> 8) & 0x3FF);
  v12 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v11;
  v12 &= 7u;
  v13 = *(_QWORD *)&v11[2 * v12 + 938];
  if ( v12 == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v14 = v8 >> 58;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v7, 1) << 58);
  }
  else
  {
    v14 = (unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 40)) >> 2;
  }
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, *(unsigned __int8 *)(a1 + 34) >> 6, 1u);
  MiCopyPfnEntry(a2, a1);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL | (v14 << 58);
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v7 )
    *(_QWORD *)(a2 + 40) ^= (v10 ^ *(_QWORD *)(a2 + 40)) & 0xFFFFFFFFFLL;
  MiCopyPage(v10, v7, a3, 6);
  _InterlockedOr(v50, 0);
  v15 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v16 = *(_DWORD *)(v13 + 8);
  if ( v16 == 2 )
  {
    PfnPriority = MiGetPfnPriority(a1);
    v18 = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    v19 = (*(_BYTE *)(a1 + 35) & 8) == 0;
    v4 = PfnPriority;
    *(_DWORD *)v3 = PfnPriority;
    v15 = !v19;
    v13 = v18 + 8 * (PfnPriority + 4 * (PfnPriority + 62LL));
  }
  else if ( v16 == 3 )
  {
    v21 = (struct _KLOCK_QUEUE_HANDLE *)(v3 + 24);
    if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
    {
      v13 = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0uLL) + 8) + 8 * (v14 + 4 * (v14 + 94));
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 32), v21);
    }
    else
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 32), v21);
      v13 = MiDetermineModifiedPageListHead(a2, *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
    }
    goto LABEL_14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 32), (PKLOCK_QUEUE_HANDLE)(v3 + 24));
  if ( v4 != 0xFFFFFF )
  {
    v20 = 1LL;
    goto LABEL_15;
  }
LABEL_14:
  v20 = 0LL;
LABEL_15:
  v22 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v23 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v22 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  MiSetPfnBlink(a2, v23, v20);
  v24 = 0xFFFFFFFFFLL;
  if ( v22 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v13 + 24) = v10;
  }
  else
  {
    v25 = 48 * v22 - 0x58000000000LL;
    if ( *(_DWORD *)v3 != 0xFFFFFF && v15 )
    {
      IsDecayPfn = MiIsDecayPfn(v22);
      if ( IsDecayPfn == v28 )
      {
        *(_QWORD *)(v25 + 40) ^= v24 & (v10 ^ *(_QWORD *)(v25 + 40));
        goto LABEL_24;
      }
    }
    MiSetPfnBlink(v25, v10, 0LL);
    v24 = 0xFFFFFFFFFLL;
  }
  v27 = *(_DWORD *)v3;
LABEL_24:
  if ( v23 == v24 )
  {
    *(_QWORD *)(v13 + 16) = v10;
  }
  else
  {
    v29 = (_QWORD *)(48 * v23 - 0x58000000000LL);
    if ( v27 != 0xFFFFFF && v15 && MiIsDecayPfn(v23) )
    {
      updated = MiUpdateTransitionPteFrame(v29[2], v10);
      *(_QWORD *)(v31 + 16) = updated;
    }
    else
    {
      *v29 ^= v24 & (v10 ^ *v29);
    }
  }
  if ( v27 != 0xFFFFFF )
    MiReplaceNumaStandbyPage(a1, a2);
  v32 = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_1403270A0 == 1 )
  {
    v33 = v32 & 0x1F;
    LOBYTE(v34) = 1;
    v35 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v32 >> 5);
    if ( (unsigned __int64)(v33 + 1) <= 0x20 )
    {
      v36 = 1 << v33;
LABEL_42:
      _InterlockedOr(v35, v36);
      goto LABEL_43;
    }
    if ( (v32 & 0x1F) == 0 )
      goto LABEL_41;
    _InterlockedOr(v35++, ((1 << (32 - (v32 & 0x1F))) - 1) << v33);
    v34 = 1LL - (32 - (unsigned int)(v32 & 0x1F));
    if ( v34 >= 0x20 )
    {
      v37 = v34 >> 5;
      v34 += -32LL * (v34 >> 5);
      do
      {
        *v35++ = -1;
        --v37;
      }
      while ( v37 );
    }
    if ( v34 )
    {
LABEL_41:
      v36 = (1 << v34) - 1;
      goto LABEL_42;
    }
  }
LABEL_43:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)(v3 + 24));
  _InterlockedOr(v50, 0);
  *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  MiSetPfnBlink(a1, 0LL, 1LL);
  v38 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  if ( v38 == v32 )
  {
    v39 = 0;
    v40 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v39 = 1;
    v40 = MiMapPageInHyperSpaceWorker(v38, 0LL, 0x80000000) + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  }
  v41 = MI_READ_PTE_LOCK_FREE(v40);
  v42 = MiUpdateTransitionPteFrame(v41, v10);
  *v43 = v42;
  if ( (unsigned int)MiPteInShadowRange(v43, v42) )
    MiWritePteShadow(v45, v44);
  if ( v39 == 1 )
  {
    LOBYTE(v44) = 17;
    MiUnmapPageInHyperSpaceWorker(v46, v44);
    v46 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (v46 >= qword_140327F60[0] && v46 < qword_140327F60[0] + 0x100000000000LL
     || qword_140326C70
     && v46 >= qword_140326C70
     && v46 < qword_140326C70 + (qword_140326C50 << 21)
     && (*(_BYTE *)(48 * ((*(_QWORD *)(((v46 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                  - 0x57FFFFFFFDALL) & 0xF0) == 0xD0) )
  {
    KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(v10 << 12);
    *(_QWORD *)(v48 - 1048) = KernelDirectoryTableBase;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v15 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  result = 0xFC3FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return result;
}
