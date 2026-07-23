/*
 * XREFs of MiBuildForkPte @ 0x1400BAB30
 * Callers:
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 * Callees:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1400A8CE8 (MiCaptureWriteWatchDirtyBit.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400BBC00 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x1400BBC2C (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFindZeroCloneBlock @ 0x1400BBC5C (MiFindZeroCloneBlock.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiWriteSharedDemandZeroPte @ 0x1400BE180 (MiWriteSharedDemandZeroPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiLockAndInsertPageInFreeList @ 0x140145314 (MiLockAndInsertPageInFreeList.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 */

__int64 __fastcall MiBuildForkPte(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
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
  ULONG_PTR v15; // r15
  unsigned __int64 v16; // rbx
  __int64 ZeroCloneBlock; // rbx
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r10
  unsigned int v23; // r13d
  int v24; // ecx
  __int64 v25; // r9
  KIRQL v26; // al
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r15
  int v31; // r11d
  ULONG_PTR v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // r9
  unsigned __int64 v37; // r10
  int *v38; // rax
  __int16 v39; // r9
  int *v40; // rdi
  LONG *v41; // rdi
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rdi
  LONG *SharedVm; // rdi
  __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  unsigned int PageFileReservationOffset; // eax
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rdx
  struct _KEVENT *v54; // r11
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rbx
  __int64 v57; // rcx
  ULONG_PTR v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r10
  __int64 v69; // r8
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r10
  unsigned __int64 v76; // rbx
  struct _KEVENT *v77; // rax
  unsigned __int64 v78; // r9
  __int64 v79; // rbx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r10
  __int64 v90; // r8
  signed __int64 v91; // rsi
  int v92; // [rsp+48h] [rbp-81h]
  unsigned __int64 PrototypePteDirect; // [rsp+60h] [rbp-69h] BYREF
  __int64 v94; // [rsp+68h] [rbp-61h]
  __int64 v95; // [rsp+70h] [rbp-59h]
  __int64 v96; // [rsp+78h] [rbp-51h]
  __int64 Page; // [rsp+80h] [rbp-49h] BYREF
  __int64 v98; // [rsp+88h] [rbp-41h] BYREF
  ULONG_PTR v99; // [rsp+90h] [rbp-39h]
  _QWORD *v100; // [rsp+98h] [rbp-31h]
  _WORD *v101; // [rsp+A0h] [rbp-29h] BYREF
  __int16 v102; // [rsp+A8h] [rbp-21h]
  unsigned __int16 v103; // [rsp+AAh] [rbp-1Fh]
  _QWORD v104[2]; // [rsp+B0h] [rbp-19h] BYREF

  v15 = a3;
  PrototypePteDirect = MI_READ_PTE_LOCK_FREE(a3);
  v16 = PrototypePteDirect;
  if ( !PrototypePteDirect )
  {
    if ( a5 && *(int *)(a11 + 52) < 0 )
    {
      ZeroCloneBlock = MiFindZeroCloneBlock(a5, (*(_DWORD *)(a10 + 48) >> 3) & 0x1F);
      if ( ZeroCloneBlock )
      {
        MiIncreaseUsedPtesCount(a8, 1LL);
        MiWriteSharedDemandZeroPte(v18, ZeroCloneBlock, a4, a14);
      }
    }
    return 0LL;
  }
  MiIncreaseUsedPtesCount(a8, 1LL);
  v22 = a1;
  v23 = 0;
  LODWORD(v94) = 0;
  v24 = 0;
  Page = -1LL;
  v25 = a1 + 1280;
  v95 = a1 + 1280;
  while ( 2 )
  {
    v26 = a13;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v24 == 1 )
        {
          MiMakeSystemAddressValid(v15, 0LL, 0, v26, 1);
          v27 = MI_READ_PTE_LOCK_FREE(v15);
          v22 = a1;
          v16 = v27;
          v25 = v95;
          PrototypePteDirect = v27;
        }
        if ( (v16 & 1) != 0 )
          break;
        if ( (v16 & 0x400) != 0 )
        {
          MiGetPrototypePteDirect(v16);
          if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v16) )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(v88 - 48 + 32));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(((v88 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
              1u);
          }
          else
          {
            if ( !MiLocateCloneAddress(v89, v88) )
              goto LABEL_91;
            _InterlockedIncrement64((volatile signed __int64 *)(v90 + 24));
            if ( (a12 & 1) != 0 )
            {
              if ( *(_QWORD *)(v90 + 16) >> 59 != 24 )
                PrototypePteDirect |= 8uLL;
              v91 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 16), 1uLL);
              v16 = PrototypePteDirect;
              if ( ((v91 + 1) & 0x7FFFFFFFFFFFFFFLL) == 1 )
                ++a14[1];
              else
                ++*a14;
              goto LABEL_91;
            }
          }
          v16 = PrototypePteDirect;
LABEL_91:
          *a4 = v16;
          if ( !(unsigned int)MiPteInShadowRange(a4, v44) )
            goto LABEL_94;
          v71 = v16;
          goto LABEL_93;
        }
        if ( (v16 & 0x800) != 0 )
        {
          LOBYTE(v92) = a13;
          v42 = MiHandleForkTransitionPte(v22, a2, v15, a4, a6, a7, a9, &Page, a12, v92, a14);
          if ( v42 )
          {
            LOBYTE(v23) = v42 != 1;
            goto LABEL_94;
          }
          v22 = a1;
          v24 = 1;
          v26 = a13;
          v25 = v95;
        }
        else
        {
          v43 = (v16 >> 5) & 0x1F;
          if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v16, v20, v21, v25) )
          {
            if ( (v16 & 2) != 0 )
            {
              v16 &= ~2uLL;
              PrototypePteDirect = v16;
            }
            if ( a5 )
            {
              v44 = MiFindZeroCloneBlock(a5, (unsigned int)v43);
              if ( v44 )
              {
                MiWriteSharedDemandZeroPte(v87, v44, a4, a14);
                goto LABEL_94;
              }
            }
            goto LABEL_91;
          }
          if ( (_DWORD)v43 == 16 )
          {
            if ( (v16 & 2) != 0 )
            {
              v16 &= ~2uLL;
              PrototypePteDirect = v16;
            }
            goto LABEL_91;
          }
          if ( ((v16 >> 5) & 0x18) != 0x10 )
          {
            MI_MAKE_PROTECT_WRITE_COPY(&PrototypePteDirect);
            v76 = PrototypePteDirect;
            if ( (PrototypePteDirect & 2) != 0 )
            {
              v77 = (struct _KEVENT *)MiPartitionIdToPointer(*(_WORD *)(v75 + 1444));
              MiReleasePageFileInfo(v77, v78, 1);
              v76 &= ~2uLL;
            }
            v79 = v76 | 8;
            *(_QWORD *)a6 = 0LL;
            PrototypePteDirect = v79;
            *(_QWORD *)a6 = v79;
            if ( (unsigned int)MiPteInShadowRange(a6, v74) )
              MiWritePteShadow(v80, v79);
            *(_QWORD *)(a6 + 24) = 2LL;
            PrototypePteDirect = MiMakePrototypePteDirect(a6);
            *(_QWORD *)v15 = PrototypePteDirect;
            if ( (unsigned int)MiPteInShadowRange(v15, v81) )
              MiWritePteShadow(v83, v84);
            if ( (a12 & 1) != 0 )
            {
              if ( (_DWORD)v43 != 24 )
              {
                v84 |= 8uLL;
                PrototypePteDirect = v84;
              }
              *(_QWORD *)(a6 + 16) = 1LL;
              ++a14[1];
            }
            else
            {
              *(_QWORD *)(a6 + 16) = 0LL;
            }
            *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v43 << 59);
            *a4 = v84;
            if ( (unsigned int)MiPteInShadowRange(a4, v82) )
              MiWritePteShadow(v85, v86);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
            v23 = 1;
            goto LABEL_94;
          }
          MiFlushTbList(a9);
          v45 = v95;
          MiUnlockWorkingSetExclusive(v95, a13);
          v104[1] = 4096LL;
          v104[0] = (__int64)(v15 << 25) >> 16;
          MiPrefetchVirtualMemory(1LL, v104, v45, 45LL);
          SharedVm = MiGetSharedVm(v45);
          v26 = ExAcquireSpinLockExclusive(SharedVm);
          v22 = a1;
          v24 = 1;
          v25 = v95;
          a13 = v26;
          SharedVm[1] = 0;
        }
      }
      v28 = MI_GET_PFN_FROM_PTE(&PrototypePteDirect);
      v30 = v28;
      if ( v31 != 1 && (*(_WORD *)(v28 + 32) <= 1u || (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0) )
        break;
      MiInitializePageColorBase(v29, 0LL, &v101);
      ++*v101;
      v38 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1444));
      v40 = v38;
      if ( Page != -1
        || (Page = MiGetPage((__int64)v38, v103 | (unsigned int)(unsigned __int16)(v102 & v39), 0), Page != -1) )
      {
        v73 = 48 * Page - 0x58000000000LL;
        MiLockPageAtDpcInline(v73);
        MiFinalizePageAttribute(v73, *(unsigned __int8 *)(v30 + 34) >> 6, 1u);
        _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiDuplicateCloneLeaf(a3, a4, Page, a13, 0x11u);
        ++*a7;
        return 0LL;
      }
      MiFlushTbList(a9);
      MiUnlockWorkingSetExclusive(v95, a13);
      MiWaitForFreePage(v40);
      v41 = MiGetSharedVm(v95);
      v26 = ExAcquireSpinLockExclusive(v41);
      v22 = a1;
      v24 = 1;
      v25 = v95;
      v15 = a3;
      a13 = v26;
      v41[1] = 0;
    }
    v32 = *(_QWORD *)v28;
    v99 = a3 << 25 >> 16;
    v33 = (_QWORD *)(*(_QWORD *)(qword_140327FD0 + 276841312)
                   + MiLocateWsle(v99, v29, v32) * *(unsigned int *)(qword_140327FD0 + 276841264));
    v100 = v33;
    if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 )
    {
      v65 = *v33 >> 4;
      if ( (v65 & 0x1F) != 0 )
      {
        PrototypePteDirect = MiMakePrototypePteVadLookup(v65 & 0x1F);
      }
      else
      {
        PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL);
        if ( (v68 & v67) != 0 )
          goto LABEL_58;
        PrototypePteDirect |= 0x800uLL;
      }
      if ( (v68 & v67) == 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v66 - 48 + 32));
        _InterlockedExchangeAdd(
          (volatile signed __int32 *)(*(_QWORD *)(((v66 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10) + 384LL),
          1u);
        goto LABEL_63;
      }
LABEL_58:
      if ( MiLocateCloneAddress(a1, v66) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v69 + 24));
        if ( (a12 & 1) != 0 )
        {
          PrototypePteDirect |= 8uLL;
          if ( (_InterlockedIncrement64((volatile signed __int64 *)(v69 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 1 )
            ++a14[1];
          else
            ++*a14;
        }
      }
LABEL_63:
      v70 = PrototypePteDirect;
      *a4 = PrototypePteDirect;
      if ( !(unsigned int)MiPteInShadowRange(a4, v70) )
        goto LABEL_94;
LABEL_93:
      MiWritePteShadow(v72, v71);
      goto LABEL_94;
    }
    v98 = MI_READ_PTE_LOCK_FREE(((a6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v34 = MI_GET_PFN_FROM_PTE(&v98);
    v35 = 0LL;
    v94 = v34;
    if ( v37 < *(_QWORD *)(v36 + 276841240) )
    {
      if ( !(unsigned int)MiLockPageTablePage(v34, 2) )
      {
        v15 = a3;
        v22 = a1;
        v24 = 1;
        v25 = v95;
        LODWORD(v94) = 1;
        continue;
      }
      v34 = v94;
    }
    break;
  }
  MiLockPageAtDpcInline(v34);
  v47 = v94;
  *(_QWORD *)(v94 + 24) ^= (*(_QWORD *)(v94 + 24) ^ (*(_QWORD *)(v94 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v30);
  v48 = PrototypePteDirect;
  if ( (PrototypePteDirect & 0x42) != 0 )
  {
    if ( (*(_DWORD *)(a10 + 48) & 7) == 4 && (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0 )
      MiCaptureWriteWatchDirtyBit(a1, v99, a10);
    v35 = MiCaptureDirtyBitToPfn(v30);
    PrototypePteDirect = v48 & 0xFFFFFFFFFFFFFFBDuLL;
  }
  MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v30 + 40)) >> 8) & 0x3FF);
  if ( (*(_QWORD *)(v30 + 16) & 2) != 0 )
  {
    PageFileReservationOffset = MiGetPageFileReservationOffset(v30 + 16);
    v52 = MiTransferSoftwarePte(*(_QWORD *)(v30 + 16), v50, PageFileReservationOffset, v51);
    *(_QWORD *)(v30 + 16) &= ~2uLL;
    v35 = v52;
  }
  *(_QWORD *)(v30 + 8) = a6;
  *(_QWORD *)(v30 + 40) |= 0x200000000000000uLL;
  *(_QWORD *)(v30 + 40) ^= (*(_QWORD *)(v30 + 40) ^ MI_GET_PAGE_FRAME_FROM_PTE(&v98)) & 0xFFFFFFFFFLL;
  MI_MAKE_PROTECT_WRITE_COPY(v30 + 16);
  v55 = *(_QWORD *)(v30 + 16) | 8LL;
  *(_QWORD *)(v30 + 16) = v55;
  v96 = (v55 >> 5) & 0x1F;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v35 )
    MiReleasePageFileInfo(v54, v35, 1);
  v56 = PrototypePteDirect;
  if ( (PrototypePteDirect & 0x800) != 0 )
  {
    v56 = PrototypePteDirect & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    PrototypePteDirect = v56;
  }
  *(_QWORD *)a3 = v56;
  if ( (unsigned int)MiPteInShadowRange(a3, v53) )
    MiWritePteShadow(v57, v56);
  v58 = v99;
  MiInsertTbFlushEntry(a9, v99, 1LL);
  *(_QWORD *)a6 = 0LL;
  *(_QWORD *)a6 = v56;
  if ( (unsigned int)MiPteInShadowRange(a6, v59) )
    MiWritePteShadow(v60, v56);
  v61 = v100;
  *(_QWORD *)(a6 + 24) = 2LL;
  *v61 &= 0xFFFFFFFFFFFFFE0FuLL;
  v62 = MiMakePrototypePteDirect(*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL);
  PrototypePteDirect = v62;
  if ( (a12 & 1) != 0 )
  {
    v62 |= 8uLL;
    *(_QWORD *)(a6 + 16) = 1LL;
    PrototypePteDirect = v62;
    ++a14[1];
  }
  else
  {
    *(_QWORD *)(a6 + 16) = 0LL;
  }
  *(_QWORD *)(a6 + 16) = *(_QWORD *)(a6 + 16) & 0x7FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)v96 << 59);
  *a4 = v62;
  if ( (unsigned int)MiPteInShadowRange(a4, v62) )
    MiWritePteShadow(v64, v63);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 920), 0xFFFFFFFFFFFFFFFFuLL);
  MiUpdateWorkingSetPrivateSize(v95, v58, -1LL);
  v23 = 1;
LABEL_94:
  if ( Page != -1 )
    MiLockAndInsertPageInFreeList(48 * Page - 0x58000000000LL);
  return v23;
}
