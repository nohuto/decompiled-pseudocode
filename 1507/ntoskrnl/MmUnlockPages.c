/*
 * XREFs of MmUnlockPages @ 0x1400B0D00
 * Callers:
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x140120768 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     CcMdlWriteAbort @ 0x1401DDCB4 (CcMdlWriteAbort.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 *     KiOpPatchCode @ 0x14020A738 (KiOpPatchCode.c)
 *     HvlFinalizeSecureImageHash @ 0x1402700F0 (HvlFinalizeSecureImageHash.c)
 *     HvlFinishSecureImageValidation @ 0x1402701CC (HvlFinishSecureImageValidation.c)
 *     HvlValidateDynamicCodePages @ 0x14027058C (HvlValidateDynamicCodePages.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     CcMdlReadComplete2 @ 0x140474C68 (CcMdlReadComplete2.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14052D2E8 (AlpcpFreeCompletionList.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     FsRtlpFreeMdlChain @ 0x14066D930 (FsRtlpFreeMdlChain.c)
 *     IopCleanupFileObjectIosbRange @ 0x14067127C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1406F9F24 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406FA30C (NtStopProfile.c)
 *     VerifierMmUnlockPages @ 0x140753DD8 (VerifierMmUnlockPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiZeroAndFlushPtes @ 0x140115540 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140133700 (MiUnmapLockedPagesInUserSpace.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiQueueControlAreaDelete @ 0x140212170 (MiQueueControlAreaDelete.c)
 *     MiFreeMdlTracker @ 0x140213FEC (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x14021414C (MiRetardMdl.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiRemovePteTracker @ 0x140226DF4 (MiRemovePteTracker.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // di
  PMDL v2; // r12
  unsigned __int64 v4; // r14
  char *MappedSystemVa; // rbx
  int v6; // ecx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  struct _MDL *v13; // rbp
  unsigned __int64 v14; // rbx
  BOOL v15; // r13d
  __int64 v16; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v18; // r8
  unsigned __int64 Next; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int16 *v25; // rbp
  unsigned int v26; // edi
  __int64 *v27; // r9
  __int64 v28; // r10
  __int64 PteShadow; // rbx
  __int64 v30; // rdx
  __int16 v31; // ax
  __int64 v32; // r10
  __int16 v33; // ax
  __int64 v34; // rcx
  int v35; // esi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r9
  __int64 v38; // rcx
  int v39; // r8d
  unsigned __int16 v40; // cx
  __int16 *v41; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v43; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v45; // zf
  signed __int32 v46; // eax
  __int16 *v47; // rbp
  __int64 v48; // rdi
  _BOOL8 v49; // rcx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rsi
  __int64 v52; // r15
  unsigned int v53; // ebx
  __int64 v54; // r14
  unsigned __int64 v55; // rdx
  unsigned __int16 v56; // ax
  int IsZero; // eax
  struct _KPRCB *v58; // r8
  unsigned __int64 v59; // r9
  __int64 v60; // rdx
  signed __int32 v61; // eax
  unsigned __int8 v62; // [rsp+30h] [rbp-78h]
  __int64 v63; // [rsp+38h] [rbp-70h]
  struct _MDL *v64; // [rsp+40h] [rbp-68h]
  struct _EPROCESS *Process; // [rsp+48h] [rbp-60h]
  unsigned __int64 v66; // [rsp+50h] [rbp-58h]
  CSHORT v68; // [rsp+B8h] [rbp+10h]
  int v69; // [rsp+C8h] [rbp+20h]

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  v68 = MdlFlags;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v66 = v4;
  if ( (MdlFlags & 1) != 0 )
  {
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
    v6 = 0;
    if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
      v6 = MiRetardMdl(MemoryDescriptorList);
    if ( MappedSystemVa > MmHighestUserAddress )
    {
      MemoryDescriptorList->MdlFlags &= 0xFFDEu;
      v7 = (unsigned __int64)&MappedSystemVa[-v6];
      v8 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
          + (unsigned __int64)MemoryDescriptorList->ByteCount
          + 4095) >> 12;
      v9 = (_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v10 = (_QWORD *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v11 = *v10;
      if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
        LOWORD(v11) = MiReadPteShadow(v10, *v10);
      if ( (v11 & 0x80u) == 0LL )
      {
        v11 = *v9;
        if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
          LOWORD(v11) = MiReadPteShadow(v9, *v9);
      }
      if ( (v11 & 0x200) != 0 )
        MiZeroAndFlushPtes(v7, v8);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v8) = v8 + 1;
      if ( (dword_1403D00E0 & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
      MiReleasePtes(&qword_14034FC70, v9, (unsigned int)v8);
      MdlFlags = v68;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace(MappedSystemVa, MemoryDescriptorList);
    }
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v12 = 0LL;
  v13 = (PMDL)((char *)v2 + 8 * v4);
  v14 = 0LL;
  v63 = 0LL;
  v64 = v13;
  v15 = 0;
  v16 = 0xFFFFFFFFFLL;
  CurrentIrql = KeGetCurrentIrql();
  v62 = CurrentIrql;
  __writecr8(2uLL);
  v18 = 1LL;
  v69 = 1;
  while ( 1 )
  {
    Next = (unsigned __int64)v2->Next;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > qword_14034EC10
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next, 1LL, 0x20000000000000LL);
      goto LABEL_107;
    }
    v20 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v21 = *(_QWORD *)(v20 + 40);
      if ( ((v21 >> 54) & 7) != 1 )
      {
        v22 = v21 & 0xFFFFFFFFFLL;
        if ( (v21 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        {
          if ( (v21 & 0x200000000000000LL) != 0
            || (v23 = 48 * v22 - 0x58000000000LL, (*(_BYTE *)(v23 + 34) & 7) == 6)
            && (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
            && (v18 = 0x7FFFFFFFFFLL,
                v24 = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL,
                v24 + 0x98000000000LL <= 0x7FFFFFFFFFLL)
            && (unsigned __int64)(((__int64)(v24 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL )
          {
            if ( v16 != v22 )
            {
              if ( v16 != 0xFFFFFFFFFLL )
                MiUnlockPageTableCharges(48 * v16 - 0x58000000000LL, 0x11u, v15);
              v15 = (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) == 0;
              v16 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL;
            }
          }
        }
      }
    }
    v25 = 0LL;
    v26 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v26);
      }
      while ( (*(_QWORD *)(v20 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
    }
    if ( (v68 & 0x80u) != 0 )
    {
      v27 = (__int64 *)(v20 + 16);
      if ( (*(_DWORD *)(v20 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v20 + 34) & 8) == 0 )
      {
        v28 = *v27;
        if ( (*v27 & 4) != 0 )
        {
          PteShadow = *v27;
          if ( (unsigned __int64)(v20 + 0x90482413010LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(v20 + 16, v28);
          *v27 = v28 & 0xFFFFFFFFFFFFFFFBuLL;
          v14 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
        }
        else
        {
          v14 = 0LL;
        }
        if ( v14 )
          v25 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v20 + 40)) >> 8) & 0x3FF);
      }
      *(_BYTE *)(v20 + 34) |= 0x10u;
      if ( (*(_QWORD *)(v20 + 40) & 0x200000000000000LL) != 0 )
      {
        v30 = *(unsigned int *)v27;
        if ( (v30 & 0x400) != 0
          && !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)MiGetPrototypePteDirect(
                                                                               *v27,
                                                                               v30,
                                                                               v18,
                                                                               v27)
                                                                + 104LL)) )
        {
          MiQueueControlAreaDelete();
        }
      }
    }
    v31 = *(_WORD *)(v20 + 32);
    if ( !v31 )
      KeBugCheckEx(
        0x4Eu,
        0x9AuLL,
        (v20 + 0x58000000000LL) / 48,
        *(_BYTE *)(v20 + 34) & 7,
        *(unsigned __int16 *)(v20 + 32));
    v32 = *(_QWORD *)(v20 + 24);
    v33 = v31 - 1;
    *(_WORD *)(v20 + 32) = v33;
    v34 = v32 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v33 )
    {
      v35 = 1;
LABEL_70:
      v36 = *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL;
      v37 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v36 > v37 || v36 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v20 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v20 + 35) &= ~0x20u;
LABEL_101:
        if ( v35 )
          MiPfnReferenceCountIsZero(v20, (v20 + 0x58000000000LL) / 48);
        v12 = v63;
        goto LABEL_104;
      }
      v38 = *(_QWORD *)(v20 + 40);
      v39 = 0;
      if ( (v38 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
      {
        v39 = 1;
      }
      else if ( v36 <= v37 && v36 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v20 + 35) >> 5) & 1) != 0 )
      {
        v39 = 1;
      }
      else if ( v35 == 1 && (v32 & 0x4000000000000000LL) != 0 )
      {
        v39 = 1;
      }
      v40 = (HIDWORD(v38) >> 8) & 0x3FF;
      if ( v40 == 1023 )
        v41 = MiSystemPartition;
      else
        v41 = *(__int16 **)(qword_14034F0E8 + 8LL * v40);
      if ( v39 == 1 )
        MiReturnCommit(v41, 1LL);
      if ( v41 != MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 696, 1uLL);
        goto LABEL_101;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v43 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v46 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v45 = (_DWORD)CachedResidentAvailable == v46;
            LODWORD(CachedResidentAvailable) = v46;
            if ( v45 )
              goto LABEL_99;
          }
          while ( v46 != -1 && (unsigned __int64)(v46 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v43 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_1403552C0, v43);
LABEL_99:
      _InterlockedExchangeAdd64(&qword_14034FB00, 1uLL);
      goto LABEL_101;
    }
    if ( v33 == 1 )
    {
      if ( v34 )
        goto LABEL_68;
    }
    else if ( v33 != 2 || !v34 )
    {
      goto LABEL_104;
    }
    if ( (*(_BYTE *)(v20 + 34) & 8) != 0 )
    {
LABEL_68:
      v35 = 0;
      goto LABEL_70;
    }
LABEL_104:
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v14 )
    {
      MiReleasePageFileInfo(v25, v14, 1LL);
      v14 = 0LL;
    }
    CurrentIrql = v62;
    v13 = v64;
LABEL_107:
    ++v12;
    v2 = (PMDL)((char *)v2 + 8);
    v63 = v12;
    if ( (v12 & 0x3F) == 0 && CurrentIrql < 2u )
    {
      if ( v2 >= v13 )
      {
        LODWORD(v18) = 1;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v62 = CurrentIrql;
      }
    }
    v18 = 1LL;
    if ( v2 >= v13 )
      break;
    MdlFlags = v68;
  }
  if ( v16 != 0xFFFFFFFFFLL )
  {
    v47 = 0LL;
    v48 = 48 * v16 - 0x58000000000LL;
    if ( v15
      && ((*(_BYTE *)(v48 + 34) & 7) == 6
        ? ((*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
         ? ((v50 = *(_QWORD *)(v48 + 8) | 0x8000000000000000uLL, v50 + 0x98000000000LL <= 0x7FFFFFFFFFLL)
          ? (v49 = (unsigned __int64)(((__int64)(v50 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL)
          : (LODWORD(v49) = 0))
         : (LODWORD(v49) = 0))
        : (LODWORD(v49) = 0),
          LODWORD(v18) = 3,
          v69 = 3,
          !v49)
      || (*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
    {
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        48 * v16 - 0x58000000000LL,
        *(_QWORD *)(v48 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    }
    v51 = 0LL;
    v52 = 0LL;
    while ( 1 )
    {
      v53 = 0;
      v54 = *(_QWORD *)(v48 + 40) & 0xFFFFFFFFFLL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v53);
        }
        while ( (*(_QWORD *)(v48 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) );
        LODWORD(v18) = v69;
      }
      *(_QWORD *)(v48 + 24) ^= (*(_QWORD *)(v48 + 24) ^ ((*(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000)) & 0x3FFFFFFFFFFFFFFFLL;
      v55 = *(_QWORD *)(v48 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v55 >= 0x10000 )
        break;
      if ( !v47 )
      {
        v56 = ((unsigned int)HIDWORD(*(_QWORD *)(v48 + 40)) >> 8) & 0x3FF;
        if ( v56 == 1023 )
          v47 = MiSystemPartition;
        else
          v47 = *(__int16 **)(qword_14034F0E8 + 8LL * v56);
      }
      ++v51;
      if ( !v55 )
      {
        IsZero = MiPfnShareCountIsZero(v48, 0LL);
        LODWORD(v18) = v69;
        if ( IsZero != 3 )
          ++v52;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v45 = (_DWORD)v18 == 1;
      LODWORD(v18) = v18 - 1;
      v69 = v18;
      if ( v45 )
        goto LABEL_147;
      v48 = 48 * v54 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_147:
    if ( v51 )
    {
      if ( v47 == MiSystemPartition )
      {
        v58 = KeGetCurrentPrcb();
        v59 = v51;
        v60 = (int)v58->CachedResidentAvailable;
        if ( (_DWORD)v60 != -1 )
        {
          if ( v51 + v60 <= 0x100 )
          {
            do
            {
              if ( v51 >= 0x80000 )
                break;
              v61 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v58->CachedResidentAvailable,
                      v51 + v60,
                      v60);
              v45 = (_DWORD)v60 == v61;
              LODWORD(v60) = v61;
              if ( v45 )
                goto LABEL_159;
            }
            while ( v61 != -1 && v51 + v61 <= 0x100 );
          }
          if ( (int)v60 > 192
            && (_DWORD)v60 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v58->CachedResidentAvailable,
                                192,
                                v60) )
          {
            v59 = v51 + (int)v60 - 192;
          }
        }
        _InterlockedExchangeAdd64(&qword_1403552C0, v59);
LABEL_159:
        _InterlockedExchangeAdd64(&qword_14034F8B8, v51);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 696, v51);
      }
    }
    if ( v52 )
      MiReturnCommit(v47, v52);
  }
  __writecr8(v62);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v66);
  MemoryDescriptorList->MdlFlags &= 0xF6FDu;
}
