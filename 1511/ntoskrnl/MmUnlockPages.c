/*
 * XREFs of MmUnlockPages @ 0x140067610
 * Callers:
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x1400E86AC (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400F23A4 (CcMdlWriteComplete2.c)
 *     CcMdlWriteAbort @ 0x1401A97BC (CcMdlWriteAbort.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401B3C8C (HvlpUnlockPagesForTransfer.c)
 *     KiOpPatchCode @ 0x1401CB744 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x1401DF478 (MiGetWorkingSetInfo.c)
 *     HvlFinalizeSecureImageHash @ 0x140220C9C (HvlFinalizeSecureImageHash.c)
 *     HvlFinishSecureImageValidation @ 0x140220D78 (HvlFinishSecureImageValidation.c)
 *     HvlValidateDynamicCodePages @ 0x140221138 (HvlValidateDynamicCodePages.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     CcMdlReadComplete2 @ 0x1404B0788 (CcMdlReadComplete2.c)
 *     AlpcpFreeCompletionList @ 0x1404C584C (AlpcpFreeCompletionList.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     FsRtlpFreeMdlChain @ 0x1405F4894 (FsRtlpFreeMdlChain.c)
 *     IopCleanupFileObjectIosbRange @ 0x1405F7484 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x140675760 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     NtStopProfile @ 0x140675B3C (NtStopProfile.c)
 *     VerifierMmUnlockPages @ 0x1406D030C (VerifierMmUnlockPages.c)
 * Callees:
 *     MiDereferenceControlAreaProbe @ 0x14000BADC (MiDereferenceControlAreaProbe.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiZeroAndFlushPtes @ 0x1400C097C (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1401072A0 (MiUnmapLockedPagesInUserSpace.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFreeMdlTracker @ 0x1401D2CB0 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x1401D2DEC (MiRetardMdl.c)
 *     MiRemovePteTracker @ 0x1401E0BF8 (MiRemovePteTracker.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // si
  PMDL v2; // rdi
  PMDL v3; // rbp
  int v4; // r11d
  unsigned __int64 v5; // r13
  unsigned int v6; // ecx
  unsigned __int64 MappedSystemVa; // rbx
  __int64 ByteCount; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  __int16 v12; // ax
  struct _MDL *v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rbx
  int v16; // r8d
  int v17; // r12d
  unsigned __int64 Next; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // r15
  BOOL v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rsi
  __int16 v28; // r8
  bool v29; // zf
  __int16 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // r14d
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  int v36; // r8d
  unsigned __int16 v37; // dx
  int *v38; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v40; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v42; // eax
  int *v43; // r14
  ULONG_PTR v44; // rbx
  unsigned __int64 v45; // rcx
  int v46; // r15d
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r12
  __int64 v49; // rdi
  unsigned __int64 v50; // rdx
  struct _KPRCB *v51; // r8
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  signed __int32 v54; // eax
  unsigned __int16 v55; // ax
  unsigned __int8 v56; // al
  __int64 v57; // rax
  __int64 v58; // [rsp+30h] [rbp-98h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-88h]
  PMDL v60; // [rsp+48h] [rbp-80h]
  int v61; // [rsp+50h] [rbp-78h] BYREF
  struct _MDL *v62; // [rsp+58h] [rbp-70h]
  __int64 v63; // [rsp+60h] [rbp-68h]
  __int64 v64; // [rsp+68h] [rbp-60h]
  struct _EPROCESS *Process; // [rsp+70h] [rbp-58h]
  CSHORT v67; // [rsp+D8h] [rbp+10h]
  BOOL v68; // [rsp+E0h] [rbp+18h]
  int v69; // [rsp+E8h] [rbp+20h] BYREF

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  v3 = MemoryDescriptorList;
  v67 = MdlFlags;
  v60 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v4 = 0;
  v5 = (((LODWORD(v3->StartVa) + v3->ByteOffset) & 0xFFF) + (unsigned __int64)v3->ByteCount + 4095) >> 12;
  if ( (MdlFlags & 1) != 0 )
  {
    v6 = 0;
    MappedSystemVa = (unsigned __int64)v3->MappedSystemVa;
    if ( (v3->MdlFlags & 0x200) != 0 )
      v6 = MiRetardMdl(v3);
    if ( MappedSystemVa <= (unsigned __int64)MmHighestUserAddress )
    {
      MiUnmapLockedPagesInUserSpace(MappedSystemVa, v3);
    }
    else
    {
      ByteCount = v3->ByteCount;
      v3->MdlFlags &= 0xFFDEu;
      v9 = MappedSystemVa - v6;
      v10 = ((unsigned __int64)((LODWORD(v3->StartVa) + v3->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
      v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v12 = MI_READ_PTE_LOCK_FREE(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      if ( (v12 & 0x80u) == 0 )
        v12 = MI_READ_PTE_LOCK_FREE(v11);
      if ( (v12 & 0x200) != 0 )
        MiZeroAndFlushPtes(v9, v10);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v10) = v10 + 1;
      if ( (dword_1403810F0 & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)v3);
      MiReleasePtes(&qword_1402FF7B0, v11, (unsigned int)v10);
      MdlFlags = v67;
      v2 = v3 + 1;
    }
    v4 = 0;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
  {
    MiFreeMdlTracker((ULONG_PTR)v3);
    v4 = 0;
  }
  v13 = (PMDL)((char *)v2 + 8 * v5);
  v63 = 0LL;
  v62 = v13;
  v14 = 0xFFFFFFFFFLL;
  v68 = 0;
  v15 = 0LL;
  v16 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v17 = 1;
  while ( 1 )
  {
    Next = (unsigned __int64)v2->Next;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > qword_1402FE758
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next);
      goto LABEL_75;
    }
    v19 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v20 = *(_QWORD *)(v19 + 40);
      if ( ((v20 >> 54) & 7) != 1 )
      {
        v21 = v20 & 0xFFFFFFFFFLL;
        if ( (v20 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        {
          if ( (v20 & 0x200000000000000LL) != 0
            || (v22 = 48 * v21 - 0x58000000000LL, (*(_BYTE *)(v22 + 34) & 7) == 6)
            && (*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
            && (v23 = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL, v23 + 0x98000000000LL <= 0x7FFFFFFFFFLL)
            && (unsigned __int64)(((__int64)(v23 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL )
          {
            if ( v14 != v21 )
            {
              if ( v14 != 0xFFFFFFFFFLL )
              {
                MiUnlockPageTableCharges(48 * v14 - 0x58000000000LL, 0x11u, v16);
                v4 = 0;
              }
              v24 = *(_QWORD *)(v19 + 40);
              v25 = (v24 & 0x200000000000000LL) == 0;
              v14 = v24 & 0xFFFFFFFFFLL;
              v68 = v25;
            }
          }
        }
      }
    }
    v69 = 0;
    v26 = 0LL;
    v64 = 0LL;
    v58 = 0LL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v69);
        while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
      v3 = MemoryDescriptorList;
      v4 = 0;
      v26 = 0LL;
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( (!_bittest64((const signed __int64 *)(v19 + 16), 0xAu) & (unsigned __int8)~(*(_BYTE *)(v19 + 34) >> 3)) != 0 )
      {
        v27 = *(_QWORD *)(v19 + 16);
        if ( (v27 & 0x2000) != 0 )
        {
          v57 = MI_READ_PTE_LOCK_FREE(v19 + 16);
          v26 = 0LL;
          *(_QWORD *)(v19 + 16) = v27 & 0xFFFFFFFFFFFFDFFFuLL;
          v15 = v57 & 0xFFFFFFFFFFFFEFFFuLL;
          v4 = 0;
        }
        else
        {
          v15 = 0LL;
        }
        if ( v15 )
          v64 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v19 + 40)) >> 8) & 0x3FF);
      }
      *(_BYTE *)(v19 + 34) |= 0x10u;
      if ( (_bittest64((const signed __int64 *)(v19 + 40), 0x39u) & ((*(_QWORD *)(v19 + 16) & 0x400LL) != 0)) != 0 )
      {
        v26 = *(_QWORD *)(*(__int64 *)(v19 + 16) >> 16);
        v58 = v26;
      }
    }
    v28 = *(_WORD *)(v19 + 32);
    if ( !v28 )
      KeBugCheckEx(
        0x4Eu,
        0x9AuLL,
        (v19 + 0x58000000000LL) / 48,
        *(_BYTE *)(v19 + 34) & 7,
        *(unsigned __int16 *)(v19 + 32));
    v29 = v28 == 1;
    v30 = v28 - 1;
    *(_WORD *)(v19 + 32) = v30;
    if ( v29 && (unsigned int)MI_IS_PFN_FILE_ONLY(v19) )
      goto LABEL_116;
    v31 = *(_QWORD *)(v19 + 40);
    if ( (v31 & 0x10000000000000LL) == 0 )
    {
      v32 = *(_QWORD *)(v19 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v30 )
      {
        if ( v30 == 1 )
        {
          if ( !v32 && (*(_BYTE *)(v19 + 34) & 8) == 0 )
            goto LABEL_70;
        }
        else if ( v30 != 2 || !v32 || (*(_BYTE *)(v19 + 34) & 8) == 0 )
        {
          goto LABEL_70;
        }
        v33 = v4;
      }
      else
      {
        v33 = 1;
      }
      v34 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v35 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
      if ( (v35 < 0xFFFFF68000000000uLL || v35 > v34) && ((*(unsigned __int8 *)(v19 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v19 + 35) &= ~0x20u;
        goto LABEL_68;
      }
      v36 = v4;
      if ( (v31 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v19 + 16) & 0x400LL) != 0
        || v35 <= v34 && v35 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v19 + 35) >> 5) & 1) != 0
        || v33 == 1 && (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) != 0 )
      {
        v36 = 1;
      }
      v37 = (HIDWORD(v31) >> 8) & 0x3FF;
      if ( v37 == 1023 )
        v38 = &MiSystemPartition;
      else
        v38 = *(int **)(qword_1402FEC28 + 8LL * v37);
      if ( v36 == 1 )
        MiReturnCommit((__int64)v38, 1uLL);
      if ( v38 != &MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 744, 1uLL);
LABEL_68:
        if ( v33 )
LABEL_116:
          MiPfnReferenceCountIsZero(v19, (v19 + 0x58000000000LL) / 48);
        v26 = v58;
        goto LABEL_70;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v40 = 1LL;
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v42 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v29 = (_DWORD)CachedResidentAvailable == v42;
            LODWORD(CachedResidentAvailable) = v42;
            if ( v29 )
              goto LABEL_67;
          }
          while ( v42 != -1 && (unsigned __int64)(v42 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v40 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_140301480, v40);
LABEL_67:
      _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
      goto LABEL_68;
    }
LABEL_70:
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 )
    {
      MiReleasePageFileInfo(v64, v15, 1LL);
      v26 = v58;
      v15 = 0LL;
    }
    if ( v26 )
      MiDereferenceControlAreaProbe(v26, 1);
    v13 = v62;
    v2 = v60;
LABEL_75:
    v2 = (PMDL)((char *)v2 + 8);
    v60 = v2;
    if ( (++v63 & 0x3F) == 0 && CurrentIrql < 2u )
    {
      if ( v2 >= v13 )
      {
        v16 = v68;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        __writecr8(CurrentIrql);
        v56 = KeGetCurrentIrql();
        __writecr8(2uLL);
        CurrentIrql = v56;
      }
    }
    v16 = v68;
    v4 = 0;
    if ( v2 >= v13 )
      break;
    MdlFlags = v67;
  }
  if ( v14 == 0xFFFFFFFFFLL )
    goto LABEL_103;
  v43 = 0LL;
  v44 = 48 * v14 - 0x58000000000LL;
  if ( v16 != 1 )
  {
    v46 = 1;
    goto LABEL_85;
  }
  if ( (*(_BYTE *)(v44 + 34) & 7) == 6 )
  {
    if ( (*(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    {
      v45 = *(_QWORD *)(v44 + 8) | 0x8000000000000000uLL;
      if ( v45 + 0x98000000000LL > 0x7FFFFFFFFFLL )
      {
        v17 = 0;
      }
      else if ( (unsigned __int64)(((__int64)(v45 << 25) >> 16) + 0x98000000000LL) > 0x7FFFFFFFFFLL )
      {
        v17 = 0;
      }
    }
    else
    {
      v17 = 0;
    }
  }
  else
  {
    v17 = 0;
  }
  v46 = 3;
  if ( !v17 )
LABEL_144:
    KeBugCheckEx(
      0x1Au,
      0x41791uLL,
      v44,
      *(_QWORD *)(v44 + 8) | 0x8000000000000000uLL,
      *(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFLL);
LABEL_85:
  if ( (*(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
    goto LABEL_144;
  v47 = 0LL;
  v48 = 0LL;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v44 + 40) & 0xFFFFFFFFFLL;
    v61 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v61);
        while ( (*(_QWORD *)(v44 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) );
      v3 = MemoryDescriptorList;
    }
    *(_QWORD *)(v44 + 24) ^= (*(_QWORD *)(v44 + 24) ^ ((*(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000)) & 0x3FFFFFFFFFFFFFFFLL;
    v50 = *(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v50 >= 0x10000 )
      break;
    if ( !v43 )
    {
      v55 = ((unsigned int)HIDWORD(*(_QWORD *)(v44 + 40)) >> 8) & 0x3FF;
      if ( v55 == 1023 )
        v43 = &MiSystemPartition;
      else
        v43 = *(int **)(qword_1402FEC28 + 8LL * v55);
    }
    ++v47;
    if ( !v50 && (unsigned int)MiPfnShareCountIsZero(v44) != 3 )
      ++v48;
    _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !--v46 )
      goto LABEL_94;
    v44 = 48 * v49 - 0x58000000000LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_94:
  if ( v47 )
  {
    if ( v43 == &MiSystemPartition )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v47;
      v53 = (int)v51->CachedResidentAvailable;
      if ( (_DWORD)v53 != -1 )
      {
        if ( v47 + v53 <= 0x100 )
        {
          do
          {
            if ( v47 >= 0x80000 )
              break;
            v54 = _InterlockedCompareExchange((volatile signed __int32 *)&v51->CachedResidentAvailable, v47 + v53, v53);
            v29 = (_DWORD)v53 == v54;
            LODWORD(v53) = v54;
            if ( v29 )
              goto LABEL_100;
          }
          while ( v54 != -1 && v47 + v54 <= 0x100 );
        }
        if ( (int)v53 > 192
          && (_DWORD)v53 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v51->CachedResidentAvailable,
                              192,
                              v53) )
        {
          v52 = v47 + (int)v53 - 192;
        }
      }
      _InterlockedExchangeAdd64(&qword_140301480, v52);
LABEL_100:
      _InterlockedExchangeAdd64(&qword_1402FF438, v47);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 744, v47);
    }
  }
  if ( v48 )
    MiReturnCommit((__int64)v43, v48);
LABEL_103:
  __writecr8(CurrentIrql);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, -(__int64)v5);
  v3->MdlFlags &= 0xF6FDu;
}
