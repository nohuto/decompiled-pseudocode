/*
 * XREFs of MmUnlockPages @ 0x140051600
 * Callers:
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     MiProbeAndLockComplete @ 0x140099F54 (MiProbeAndLockComplete.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiGetWorkingSetInfo @ 0x14010F8A4 (MiGetWorkingSetInfo.c)
 *     CcMdlWriteAbort @ 0x1401B23E4 (CcMdlWriteAbort.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 *     KiOpPatchCode @ 0x1401DB18C (KiOpPatchCode.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     VslFinalizeSecureImageHash @ 0x14023D228 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x14023D620 (VslValidateDynamicCodePages.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x1404577F0 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404D2128 (AlpcpFreeCompletionList.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140575240 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     FsRtlpFreeMdlChain @ 0x14061ECAC (FsRtlpFreeMdlChain.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FF4C (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140696D50 (SmProcessStatsRequest.c)
 *     ExpProfileDelete @ 0x1406B81F0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B85CC (NtStopProfile.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiDereferenceControlAreaProbe @ 0x140026304 (MiDereferenceControlAreaProbe.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiZeroAndFlushPtes @ 0x14009AE08 (MiZeroAndFlushPtes.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14010EE28 (MiUnmapLockedPagesInUserSpace.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiFreeMdlTracker @ 0x1401E2BA0 (MiFreeMdlTracker.c)
 *     MiRetardMdl @ 0x1401E2CDC (MiRetardMdl.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiRemovePteTracker @ 0x1401FC81C (MiRemovePteTracker.c)
 */

void __stdcall MmUnlockPages(PMDL MemoryDescriptorList)
{
  CSHORT MdlFlags; // bp
  PMDL v2; // rsi
  struct _EPROCESS *Process; // rax
  unsigned __int64 v5; // rdi
  char *MappedSystemVa; // rdi
  int v7; // ecx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // r10d
  char v11; // al
  unsigned __int64 v12; // r9
  __int64 v13; // r11
  int i; // r10d
  unsigned __int64 v15; // rbx
  _BOOL8 v16; // r8
  struct _MDL *v17; // rdi
  __int64 v18; // r13
  unsigned __int8 CurrentIrql; // r15
  int v20; // r14d
  unsigned __int64 Next; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  struct _KEVENT *v28; // r12
  __int64 v29; // r15
  __int64 v30; // r10
  __int16 v31; // dx
  bool v32; // zf
  __int16 v33; // dx
  __int64 v34; // r10
  __int64 v35; // rax
  int v36; // ebp
  unsigned __int64 v37; // r8
  int v38; // edx
  unsigned __int16 v39; // r10
  int *v40; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v42; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v44; // eax
  ULONG_PTR v45; // rbx
  int *v46; // rbp
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  int v49; // r12d
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r14
  __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  unsigned __int16 v54; // ax
  struct _KPRCB *v55; // r8
  __int64 v56; // rdx
  signed __int32 v57; // eax
  CSHORT v58; // [rsp+30h] [rbp-98h]
  PMDL v59; // [rsp+38h] [rbp-90h]
  _BOOL8 v60; // [rsp+40h] [rbp-88h]
  unsigned __int8 v61; // [rsp+48h] [rbp-80h]
  int v62; // [rsp+50h] [rbp-78h] BYREF
  int v63; // [rsp+54h] [rbp-74h] BYREF
  unsigned __int64 v64; // [rsp+58h] [rbp-70h]
  struct _MDL *v65; // [rsp+60h] [rbp-68h]
  __int64 v66; // [rsp+68h] [rbp-60h]
  struct _EPROCESS *v67; // [rsp+70h] [rbp-58h]
  PMDL v68; // [rsp+78h] [rbp-50h]
  unsigned __int64 v69; // [rsp+80h] [rbp-48h]
  unsigned __int64 v70; // [rsp+88h] [rbp-40h]
  __int64 v71; // [rsp+90h] [rbp-38h]

  MdlFlags = MemoryDescriptorList->MdlFlags;
  v2 = MemoryDescriptorList + 1;
  Process = MemoryDescriptorList->Process;
  v68 = MemoryDescriptorList;
  v67 = Process;
  v58 = MdlFlags;
  v59 = MemoryDescriptorList + 1;
  if ( (MdlFlags & 0x200) != 0 )
    MiRetardMdl(MemoryDescriptorList);
  v5 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v64 = v5;
  if ( (MdlFlags & 1) != 0 )
  {
    MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
    v7 = 0;
    if ( (MemoryDescriptorList->MdlFlags & 0x200) != 0 )
      v7 = MiRetardMdl(MemoryDescriptorList);
    if ( (unsigned __int64)MappedSystemVa > 0x7FFFFFFEFFFFLL )
    {
      v8 = (unsigned __int64)&MappedSystemVa[-v7];
      v9 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
          + (unsigned __int64)MemoryDescriptorList->ByteCount
          + 4095) >> 12;
      MemoryDescriptorList->MdlFlags &= 0xFFDEu;
      v69 = ((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v70 = ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = 3;
      v71 = ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v11 = MI_READ_PTE_LOCK_FREE(*(&v69 + (unsigned int)(v10 - 1)));
        if ( (v11 & 1) == 0 )
          break;
        if ( v11 < 0 )
        {
          for ( i = v10 + 1; i; --i )
            v12 = (v13 & (v12 >> 9)) - 0x98000000000LL;
          break;
        }
      }
      while ( v10 );
      if ( (MI_READ_PTE_LOCK_FREE(v12) & 0x200) != 0 )
        MiZeroAndFlushPtes(v8, v9);
      if ( MmProtectFreedNonPagedPool == 1 )
        LODWORD(v9) = v9 + 1;
      if ( (dword_1403A913C & 1) != 0 )
        MiRemovePteTracker((ULONG_PTR)MemoryDescriptorList);
      MiReleasePtes((__int64)&qword_1403278B0, ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v9);
      v2 = v59;
    }
    else
    {
      MiUnmapLockedPagesInUserSpace(MappedSystemVa, MemoryDescriptorList);
    }
    v5 = v64;
  }
  if ( (MmTrackLockedPages & 1) != 0 )
    MiFreeMdlTracker((ULONG_PTR)MemoryDescriptorList);
  v15 = 0LL;
  v66 = 0LL;
  v16 = 0LL;
  v17 = (PMDL)((char *)v2 + 8 * v5);
  v60 = 0LL;
  v18 = 0xFFFFFFFFFLL;
  v65 = v17;
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  v20 = 1;
  do
  {
    Next = (unsigned __int64)v2->Next;
    v22 = 0x200000000000000LL;
    if ( v2->Next == (struct _MDL *)-1LL )
      break;
    if ( Next > qword_140326AD0
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * Next - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 )
    {
      MiDereferenceIoPages(0LL, Next, 1LL, 0x200000000000000LL);
      goto LABEL_110;
    }
    v23 = 48 * Next - 0x58000000000LL;
    if ( (MdlFlags & 0x100) != 0 )
    {
      v24 = *(_QWORD *)(v23 + 40);
      if ( ((v24 >> 54) & 7) != 1 )
      {
        Next = v24 & 0xFFFFFFFFFLL;
        if ( (v24 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL )
        {
          if ( (v24 & 0x200000000000000LL) != 0
            || (v25 = 48 * Next - 0x58000000000LL, (*(_BYTE *)(v25 + 34) & 7) == 6)
            && (v22 = 0x3FFFFFFFFFFFFFFFLL, (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0)
            && (v26 = *(_QWORD *)(v25 + 8) | 0x8000000000000000uLL,
                v22 = 0xFFFFF68000000000uLL,
                v26 >= 0xFFFFF68000000000uLL)
            && v26 <= 0xFFFFF6FFFFFFFFFFuLL
            && (v27 = (__int64)(v26 << 25) >> 16, v27 >= 0xFFFFF68000000000uLL)
            && v27 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            if ( v18 != Next )
            {
              if ( v18 != 0xFFFFFFFFFLL )
                MiUnlockPageTableCharges(48 * v18 - 0x58000000000LL);
              v16 = (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) == 0;
              v60 = v16;
              v18 = *(_QWORD *)(v23 + 40) & 0xFFFFFFFFFLL;
            }
          }
        }
      }
    }
    v28 = 0LL;
    v29 = 0LL;
    v62 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v62);
        while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
      v2 = v59;
    }
    if ( (MdlFlags & 0x80u) != 0 )
    {
      if ( (*(_DWORD *)(v23 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v23 + 34) & 8) == 0 )
      {
        if ( (*(_QWORD *)(v23 + 16) & 4) != 0 )
        {
          v15 = MI_READ_PTE_LOCK_FREE(v23 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
          *(_QWORD *)(v23 + 16) = v30 & 0xFFFFFFFFFFFFFFFBuLL;
        }
        else
        {
          v15 = 0LL;
        }
        if ( v15 )
          v28 = (struct _KEVENT *)MiPartitionIdToPointer(
                                    ((unsigned int)HIDWORD(*(_QWORD *)(v23 + 40)) >> 8) & 0x3FF,
                                    Next,
                                    v16,
                                    v22);
      }
      *(_BYTE *)(v23 + 34) |= 0x10u;
      if ( (*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
        v29 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v23 + 16));
    }
    v31 = *(_WORD *)(v23 + 32);
    if ( !v31 )
      KeBugCheckEx(
        0x4Eu,
        0x9AuLL,
        (v23 + 0x58000000000LL) / 48,
        *(_BYTE *)(v23 + 34) & 7,
        *(unsigned __int16 *)(v23 + 32));
    v32 = v31 == 1;
    v33 = v31 - 1;
    *(_WORD *)(v23 + 32) = v33;
    if ( v32 && (unsigned int)MiIsPfnFileOnly(v23) )
    {
LABEL_104:
      MiPfnReferenceCountIsZero(v23, (v23 + 0x58000000000LL) / 48);
      goto LABEL_105;
    }
    v34 = *(_QWORD *)(v23 + 40);
    if ( (v34 & 0x10000000000000LL) == 0 )
    {
      v35 = *(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v33 )
      {
        if ( v33 != 1 )
        {
          if ( v33 != 2 || !v35 )
            goto LABEL_105;
          goto LABEL_69;
        }
        if ( !v35 )
        {
LABEL_69:
          if ( (*(_BYTE *)(v23 + 34) & 8) == 0 )
            goto LABEL_105;
        }
        v36 = 0;
      }
      else
      {
        v36 = 1;
      }
      v37 = *(_QWORD *)(v23 + 8) | 0x8000000000000000uLL;
      if ( (v37 > 0xFFFFF6BFFFFFFF78uLL || v37 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(v23 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v23 + 35) &= ~0x20u;
        goto LABEL_103;
      }
      v38 = 0;
      if ( (v34 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v23 + 16) & 0x400LL) != 0 )
      {
        v38 = 1;
      }
      else if ( v37 <= 0xFFFFF6BFFFFFFF78uLL
             && v37 >= 0xFFFFF68000000000uLL
             && ((*(unsigned __int8 *)(v23 + 35) >> 5) & 1) != 0 )
      {
        v38 = 1;
      }
      else if ( v36 == 1 && (*(_QWORD *)(v23 + 24) & 0x4000000000000000LL) != 0 )
      {
        v38 = 1;
      }
      v39 = (HIDWORD(v34) >> 8) & 0x3FF;
      if ( v39 == 1023 )
        v40 = MiSystemPartition;
      else
        v40 = *(int **)(qword_140327038 + 8LL * v39);
      if ( v38 == 1 )
        MiReturnCommit((__int64)v40, 1uLL);
      if ( v40 == MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v42 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v44 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v32 = (_DWORD)CachedResidentAvailable == v44;
              LODWORD(CachedResidentAvailable) = v44;
              if ( v32 )
                goto LABEL_102;
            }
            while ( v44 != -1 && (unsigned __int64)(v44 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v42 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_140324F00, v42);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 816, 1uLL);
      }
LABEL_102:
      v2 = v59;
LABEL_103:
      if ( v36 )
        goto LABEL_104;
    }
LABEL_105:
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v15 )
    {
      MiReleasePageFileInfo(v28, v15, 1);
      v15 = 0LL;
    }
    if ( v29 )
      MiDereferenceControlAreaProbe(v29, 1);
    CurrentIrql = v61;
    MdlFlags = v58;
    v17 = v65;
LABEL_110:
    v2 = (PMDL)((char *)v2 + 8);
    v59 = v2;
    if ( (++v66 & 0x3F) == 0 && CurrentIrql < 2u )
    {
      if ( v2 >= v17 )
      {
        LODWORD(v16) = v60;
        break;
      }
      if ( KeShouldYieldProcessor() )
      {
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v61 = CurrentIrql;
      }
    }
    v16 = v60;
  }
  while ( v2 < v17 );
  if ( v18 != 0xFFFFFFFFFLL )
  {
    v45 = 48 * v18 - 0x58000000000LL;
    v46 = 0LL;
    if ( v16 )
    {
      if ( (*(_BYTE *)(v45 + 34) & 7) != 6
        || (*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
        || (v47 = *(_QWORD *)(v45 + 8) | 0x8000000000000000uLL, v47 < 0xFFFFF68000000000uLL)
        || v47 > 0xFFFFF6FFFFFFFFFFuLL
        || (v48 = (__int64)(v47 << 25) >> 16, v48 < 0xFFFFF68000000000uLL)
        || v48 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v20 = 0;
      }
      if ( v20 )
      {
        v49 = 3;
        goto LABEL_131;
      }
      goto LABEL_167;
    }
    v49 = 1;
LABEL_131:
    if ( (*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
LABEL_167:
      KeBugCheckEx(
        0x1Au,
        0x41791uLL,
        v45,
        *(_QWORD *)(v45 + 8) | 0x8000000000000000uLL,
        *(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v50 = 0LL;
    v51 = 0LL;
    while ( 1 )
    {
      v52 = *(_QWORD *)(v45 + 40) & 0xFFFFFFFFFLL;
      v63 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v63);
          while ( (*(_QWORD *)(v45 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) );
        CurrentIrql = v61;
      }
      *(_QWORD *)(v45 + 24) ^= (((*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 0x10000) ^ *(_QWORD *)(v45 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      v53 = *(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v53 >= 0x10000 )
        break;
      if ( !v46 )
      {
        v54 = ((unsigned int)HIDWORD(*(_QWORD *)(v45 + 40)) >> 8) & 0x3FF;
        if ( v54 == 1023 )
          v46 = MiSystemPartition;
        else
          v46 = *(int **)(qword_140327038 + 8LL * v54);
      }
      ++v50;
      if ( !v53 && (unsigned int)MiPfnShareCountIsZero(v45) != 3 )
        ++v51;
      _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !--v49 )
        goto LABEL_148;
      v45 = 48 * v52 - 0x58000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_148:
    if ( v50 )
    {
      if ( v46 == MiSystemPartition )
      {
        v55 = KeGetCurrentPrcb();
        v56 = (int)v55->CachedResidentAvailable;
        if ( (_DWORD)v56 != -1 )
        {
          if ( v50 + v56 <= 0x100 )
          {
            do
            {
              if ( v50 >= 0x80000 )
                break;
              v57 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&v55->CachedResidentAvailable,
                      v50 + v56,
                      v56);
              v32 = (_DWORD)v56 == v57;
              LODWORD(v56) = v57;
              if ( v32 )
                goto LABEL_161;
            }
            while ( v57 != -1 && v50 + v57 <= 0x100 );
          }
          if ( (int)v56 > 192
            && (_DWORD)v56 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v55->CachedResidentAvailable,
                                192,
                                v56) )
          {
            v50 += (int)v56 - 192;
          }
        }
        _InterlockedExchangeAdd64(&qword_140324F00, v50);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 816, v50);
      }
    }
LABEL_161:
    if ( v51 )
      MiReturnCommit((__int64)v46, v51);
  }
  __writecr8(CurrentIrql);
  if ( v67 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v67->NumberOfLockedPages, -(__int64)v64);
  v68->MdlFlags &= 0xF6FDu;
}
