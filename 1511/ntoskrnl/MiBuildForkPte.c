/*
 * XREFs of MiBuildForkPte @ 0x14001DDD8
 * Callers:
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_UPDATE_WORKING_SET_PRIVATE_SIZE @ 0x14001EDF8 (MI_UPDATE_WORKING_SET_PRIVATE_SIZE.c)
 *     MiFindZeroCloneBlock @ 0x14001FA64 (MiFindZeroCloneBlock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400EF48C (MiCaptureWriteWatchDirtyBit.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400EFE38 (MiWriteSharedDemandZeroPte.c)
 *     MiDuplicateCloneLeaf @ 0x1400F3798 (MiDuplicateCloneLeaf.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        KIRQL a13,
        _QWORD *a14)
{
  __int64 v14; // rdi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rbx
  __int64 ZeroCloneBlock; // rbx
  __int64 v19; // rcx
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int16 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  volatile LONG *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  char v41; // al
  _QWORD *v42; // r10
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rbx
  int v55; // r9d
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rbx
  unsigned int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r8
  signed __int64 v66; // rax
  int v67; // [rsp+50h] [rbp-81h]
  unsigned __int64 v68; // [rsp+68h] [rbp-69h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp-59h]
  __int64 Page; // [rsp+80h] [rbp-51h] BYREF
  ULONG_PTR v71; // [rsp+88h] [rbp-49h]
  unsigned __int64 v72; // [rsp+90h] [rbp-41h] BYREF
  __int64 v73; // [rsp+98h] [rbp-39h]
  __int64 v74; // [rsp+A0h] [rbp-31h] BYREF
  _WORD *v75; // [rsp+A8h] [rbp-29h] BYREF
  __int16 v76; // [rsp+B0h] [rbp-21h]
  unsigned __int16 v77; // [rsp+B2h] [rbp-1Fh]
  __int64 v78; // [rsp+B8h] [rbp-19h]
  _QWORD v79[9]; // [rsp+C0h] [rbp-11h] BYREF

  v14 = a1;
  v16 = 0;
  v68 = MI_READ_PTE_LOCK_FREE(a3);
  v17 = v68;
  if ( !v68 )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
      if ( ZeroCloneBlock )
      {
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(a8, 1LL);
        MiWriteSharedDemandZeroPte(v19, ZeroCloneBlock, a4, a14);
      }
    }
    return 0LL;
  }
  MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(a8, 1LL);
  Page = -1LL;
  v21 = 0;
  LODWORD(v71) = 0;
  while ( 1 )
  {
    if ( v21 == 1 )
    {
      MiMakeSystemAddressValid(a3, 1);
      v17 = MI_READ_PTE_LOCK_FREE(a3);
      v68 = v17;
    }
    if ( (v17 & 1) != 0 )
    {
      v22 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v68) - 0x58000000000LL;
      if ( (_DWORD)v71 == 1 || *(_WORD *)(v22 + 32) > 1u && (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) == 0 )
      {
        SpinLock = (PEX_SPIN_LOCK)(a1 + 1280);
        MI_INITIALIZE_COLOR_BASE(a1 + 1280, 0LL, &v75);
        ++*v75;
        v24 = MiPartitionIdToPointer(*(unsigned __int16 *)(a2 + 1460));
        v73 = v24;
        if ( Page != -1 || (Page = MiGetPage(v24, v77 | (unsigned int)(unsigned __int16)(v76 & v25), 0LL), Page != -1) )
        {
          v54 = 48 * Page - 0x58000000000LL;
          MiLockPageAtDpcInline(v54);
          MiFinalizePageAttribute(v54, *(unsigned __int8 *)(v22 + 34) >> 6, 1LL);
          _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v55) = a13;
          MiDuplicateCloneLeaf(a3, (_DWORD)a4, Page, v55, 17);
          ++*a7;
          return 0LL;
        }
        MiFlushTbList(a9, v26, v27);
        LOBYTE(v28) = a13;
        MiUnlockWorkingSetExclusive(SpinLock, v28);
        MiWaitForFreePage(v73);
        v29 = SpinLock;
        goto LABEL_21;
      }
      v71 = (__int64)(a3 << 25) >> 16;
      SpinLock = (PEX_SPIN_LOCK)MiLocateWsle(v71);
      v78 = (_QWORD)SpinLock * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL;
      if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) == 0 )
      {
        v74 = MI_READ_PTE_LOCK_FREE(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v23 = MI_GET_PFN_FROM_PTE(&v74);
        v73 = v23;
        v72 = 0LL;
        if ( (unsigned __int64)SpinLock >= MEMORY[0xFFFFF58010804008] || (unsigned int)MiLockPageTablePage(v23, 2LL) )
        {
          v35 = v73;
          MiLockPageAtDpcInline(v73);
          *(_QWORD *)(v35 + 24) ^= (*(_QWORD *)(v35 + 24) ^ (*(_QWORD *)(v35 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiLockPageAtDpcInline(v22);
          v36 = v68;
          if ( (v68 & 0x42) != 0 )
          {
            if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) == 0 )
              MiCaptureWriteWatchDirtyBit(a1, v71);
            v72 = MiCaptureDirtyBitToPfn(v22);
            v68 = v36 & 0xFFFFFFFFFFFFFFBDuLL;
          }
          v37 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF);
          v73 = v37;
          v39 = *(_QWORD *)(v22 + 16);
          if ( (v39 & 0x1000) != 0 )
          {
            v40 = *(_QWORD *)(v37 + 8 * ((v39 >> 1) & 0xF) + 5728);
            v41 = 2;
            if ( v38 )
              v41 = 3;
            MI_SET_PAGING_FILE_INFO((unsigned int)&v72, v22 + 16, v40, HIDWORD(v39), v41);
            *v42 &= ~0x1000uLL;
          }
          *(_QWORD *)(v22 + 8) = a6;
          *(_QWORD *)(v22 + 40) |= 0x200000000000000uLL;
          v43 = MI_GET_PAGE_FRAME_FROM_PTE(&v74);
          v44 = (_QWORD *)(v22 + 16);
          *(_QWORD *)(v22 + 40) ^= (*(_QWORD *)(v22 + 40) ^ v43) & 0xFFFFFFFFFLL;
          v45 = *(_QWORD *)(v22 + 16);
          if ( (v45 & 0x80u) != 0LL )
            *v44 = v45 | 0x20;
          v46 = *v44 | 0x1000000LL;
          *v44 = v46;
          SpinLock = (PEX_SPIN_LOCK)((v46 >> 5) & 0x1F);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v72 )
            MiReleasePageFileInfo(v73, v72, 1LL);
          v47 = v68;
          if ( (v68 & 0x800) != 0 )
          {
            v47 = v68 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
            v68 = v47;
          }
          *(_QWORD *)a3 = v47;
          if ( (unsigned int)MiPteInShadowRange(a3) )
            MiWritePteShadow(a3, v47);
          MiInsertTbFlushEntry(a9, v71, 1LL, 0LL);
          *(_QWORD *)a6 = 0LL;
          *(_QWORD *)a6 = v47;
          if ( (unsigned int)MiPteInShadowRange(a6) )
            MiWritePteShadow(a6, v47);
          v48 = (_QWORD *)v78;
          *(_QWORD *)(a6 + 24) = 2LL;
          *v48 &= 0xFFFFFFFFFFFFFE0FuLL;
          v49 = (*(_QWORD *)(v22 + 8) << 16) | 0x400LL;
          v68 = v49;
          if ( (a12 & 1) != 0 )
          {
            v49 |= 0x100uLL;
            *(_QWORD *)(a6 + 16) = 1LL;
            ++a14[1];
            v68 = v49;
          }
          else
          {
            *(_QWORD *)(a6 + 16) = 0LL;
          }
          *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)SpinLock << 59);
          *a4 = v49;
          if ( (unsigned int)MiPteInShadowRange(a4) )
            MiWritePteShadow(a4, v49);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          MI_UPDATE_WORKING_SET_PRIVATE_SIZE(a1 + 1280, v71, -1LL);
LABEL_57:
          v16 = 1;
          goto LABEL_68;
        }
        LODWORD(v71) = 1;
        goto LABEL_22;
      }
      v50 = *(_QWORD *)(v22 + 8);
      v51 = v50 | 0x8000000000000000uLL;
      if ( ((*(_QWORD *)((_QWORD)SpinLock * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL) >> 4) & 0x1F) != 0 )
      {
        v68 = 32
            * ((*(_QWORD *)((_QWORD)SpinLock * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL) >> 4) & 0x1FLL | 0xFFFFFFFFF8000020uLL);
      }
      else
      {
        v68 = (v51 << 16) | 0x400;
        if ( v50 < 0 )
          goto LABEL_71;
        v68 |= 0x200uLL;
      }
      if ( (v50 & 0x8000000000000000uLL) == 0 )
      {
        v52 = v51 - 48;
        goto LABEL_64;
      }
LABEL_71:
      if ( MiLocateCloneAddress(a1, v51) )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v53 + 24), 1uLL);
        if ( (a12 & 1) != 0 )
        {
          v68 |= 0x100uLL;
          if ( (_InterlockedIncrement64((volatile signed __int64 *)(v53 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 1 )
            ++a14[1];
          else
            ++*a14;
        }
      }
      goto LABEL_65;
    }
    if ( (v17 & 0x400) != 0 )
    {
      if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v17) )
      {
        if ( !MiLocateCloneAddress(v14, v64) )
          goto LABEL_66;
        _InterlockedAdd64((volatile signed __int64 *)(v65 + 24), 1uLL);
        if ( (a12 & 1) != 0 )
        {
          if ( *(_QWORD *)(v65 + 16) >> 59 != 24 )
            v68 |= 0x100uLL;
          v66 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v65 + 16), 1uLL);
          v17 = v68;
          if ( ((v66 + 1) & 0x7FFFFFFFFFFFFFFLL) == 1 )
            ++a14[1];
          else
            ++*a14;
          goto LABEL_66;
        }
LABEL_65:
        v17 = v68;
        goto LABEL_66;
      }
      v52 = v64 - 48;
LABEL_64:
      _InterlockedAdd64((volatile signed __int64 *)(v52 + 32), 1uLL);
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)((v52 & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
        1u);
      goto LABEL_65;
    }
    if ( (v17 & 0x800) == 0 )
      break;
    LOBYTE(v67) = a13;
    v30 = MiHandleForkTransitionPte(v14, a2, a3, a4, a6, a7, a9, &Page, a12, v67, a14);
    if ( v30 )
    {
      LOBYTE(v16) = v30 != 1;
      goto LABEL_68;
    }
LABEL_23:
    v21 = 1;
  }
  SpinLock = (PEX_SPIN_LOCK)((v17 >> 5) & 0x1F);
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v17) )
  {
    if ( (_DWORD)v31 == 16 )
    {
      if ( (v17 & 0x1000) != 0 )
      {
        v17 &= ~0x1000uLL;
        v68 = v17;
      }
      goto LABEL_66;
    }
    if ( (v31 & 0xFFFFFFF8) != 0x10 )
    {
      if ( (v17 & 0x80u) != 0LL )
        v17 |= 0x20uLL;
      if ( (v17 & 0x1000) != 0 )
      {
        v56 = *(unsigned __int16 *)(v14 + 1460);
        v72 = v17 & 0xFFFFFFFFFFFFDFFFuLL;
        v57 = MiPartitionIdToPointer(v56);
        MiReleasePageFileInfo(v57, v58, 1LL);
        v17 &= ~0x1000uLL;
      }
      v59 = v17 | 0x1000000;
      *(_QWORD *)a6 = 0LL;
      v68 = v59;
      *(_QWORD *)a6 = v59;
      if ( (unsigned int)MiPteInShadowRange(a6) )
        MiWritePteShadow(a6, v59);
      v60 = (a6 << 16) | 0x400;
      *(_QWORD *)(a6 + 24) = 2LL;
      v68 = v60;
      *(_QWORD *)a3 = v60;
      if ( (unsigned int)MiPteInShadowRange(a3) )
        MiWritePteShadow(a3, (a6 << 16) | 0x400);
      v61 = (unsigned int)SpinLock;
      if ( (a12 & 1) != 0 )
      {
        if ( (_DWORD)SpinLock != 24 )
        {
          v60 = (a6 << 16) | 0x500;
          v68 = v60;
        }
        ++a14[1];
        *(_QWORD *)(a6 + 16) = 1LL;
      }
      else
      {
        *(_QWORD *)(a6 + 16) = 0LL;
      }
      *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)v61 << 59);
      *a4 = v60;
      if ( (unsigned int)MiPteInShadowRange(a4) )
        MiWritePteShadow(a4, v60);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_57;
    }
    MiFlushTbList(a9, v31, v32);
    LOBYTE(v33) = a13;
    v34 = v14 + 1280;
    MiUnlockWorkingSetExclusive(v34, v33);
    v79[0] = (__int64)(a3 << 25) >> 16;
    v79[1] = 4096LL;
    MiPrefetchVirtualMemory(1uLL, (__int64)v79, v34, 45);
    v29 = (volatile LONG *)v34;
LABEL_21:
    a13 = ExAcquireSpinLockExclusive(v29);
LABEL_22:
    v14 = a1;
    goto LABEL_23;
  }
  if ( (v17 & 0x1000) != 0 )
  {
    v17 &= ~0x1000uLL;
    v68 = v17;
  }
  v62 = a5;
  if ( a5 )
    v63 = MiFindZeroCloneBlock(a5, v31);
  else
    v63 = 0LL;
  if ( v63 )
  {
    MiWriteSharedDemandZeroPte(v62, v63, a4, a14);
    goto LABEL_68;
  }
LABEL_66:
  *a4 = v17;
  if ( (unsigned int)MiPteInShadowRange(a4) )
    MiWritePteShadow(a4, v17);
LABEL_68:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL);
  return v16;
}
