/*
 * XREFs of MmProbeAndLockPages @ 0x14002ECA0
 * Callers:
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     IopProbeAndLockPages @ 0x14010AC3C (IopProbeAndLockPages.c)
 *     MiGetWorkingSetInfo @ 0x14010F8A4 (MiGetWorkingSetInfo.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     IopProbeAndLockPages_0 @ 0x1401CAC3C (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1401CAC84 (IopProbeAndLockPages_1.c)
 *     KiOpPatchCode @ 0x1401DB18C (KiOpPatchCode.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     VslFinalizeSecureImageHash @ 0x14023D228 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x14023D620 (VslValidateDynamicCodePages.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     MmProbeAndLockProcessPages @ 0x1404EEB38 (MmProbeAndLockProcessPages.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x140696D50 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 * Callees:
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     MiAddMdlTracker @ 0x1401E298C (MiAddMdlTracker.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  unsigned __int64 *v3; // rbp
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v8; // rbx
  __int64 ByteCount; // rcx
  unsigned __int64 v10; // rdx
  struct _EPROCESS *Process; // rax
  char *v12; // rdi
  char *v13; // r8
  unsigned __int64 v14; // r9
  _KPROCESS *v15; // rcx
  char *AnyMultiplexedVm; // rax
  LONG *v17; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v19; // ett
  __int64 v20; // rax
  char v21; // cl
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  NTSTATUS v27; // ebx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  _BYTE *v31; // rcx
  volatile signed __int32 *v32; // rcx
  struct _MDL *v33; // rdi
  __int64 v34; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+118h] [rbp+B8h]

  v3 = (unsigned __int64 *)((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL);
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (unsigned __int64)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    ByteCount = MemoryDescriptorList->ByteCount;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = CurrentThread;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = MemoryDescriptorList;
    *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = Operation;
    *v3 = v8;
    v10 = ByteCount + v8;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ByteCount + v8;
    if ( AccessMode && (v10 > 0x7FFFFFFF0000LL || v8 >= v10) )
    {
      ++dword_140327108;
      RtlRaiseStatus(-1073741819);
    }
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = MemoryDescriptorList + 1;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ((v8 >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0xFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = (((v10 - 1) >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL;
    if ( Operation )
      MemoryDescriptorList->MdlFlags |= 0x80u;
    else
      MemoryDescriptorList->MdlFlags &= ~0x80u;
    MemoryDescriptorList->MdlFlags |= 2u;
    if ( v8 >= 0x7FFFFFFF0000LL )
    {
      *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      MemoryDescriptorList->Process = 0LL;
    }
    else
    {
      Process = (struct _EPROCESS *)CurrentThread->ApcState.Process;
      *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = Process;
      MemoryDescriptorList->Process = Process;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)&Process->NumberOfLockedPages,
        ((v8 & 0xFFF) + ByteCount + 4095) >> 12);
      v8 = *v3;
    }
    v12 = (char *)MmBadPointer;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = MmBadPointer;
    v13 = v12;
    *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E) = 0;
    if ( v8 >= 0x7FFFFFFF0000LL )
    {
      if ( v8 < qword_140326950 || v8 >= qword_140326950 + 0x8000000000LL )
      {
        if ( v8 >= qword_140327F70 && v8 < qword_140327F70 + 0xF8000000000LL
          || qword_140326C70
          && v8 >= qword_140326C70
          && v8 < qword_140326C70 + (qword_140326C50 << 21)
          && (*(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
        {
          v14 = qword_140326CC0;
          v13 = (char *)&unk_140327BA0;
          *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = &unk_140327BA0;
          *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 3;
        }
        else
        {
          v14 = qword_140326CC0;
          if ( qword_140326CC0 && v8 >= qword_140326CC0 && v8 < qword_140326CC0 + (qword_140326CA0 << 21) )
          {
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
            *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = AnyMultiplexedVm;
            *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 2;
            v13 = AnyMultiplexedVm;
          }
          else if ( v8 < qword_140327F60 || v8 >= qword_140327F60 + 0x100000000000LL )
          {
            if ( qword_140326C70
              && v8 >= qword_140326C70
              && v8 < qword_140326C70 + (qword_140326C50 << 21)
              && (*(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                           - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
            {
              *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
            }
            else
            {
              v13 = MiGetAnyMultiplexedVm(1);
              *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v13;
              *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 5;
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 4;
          }
        }
      }
      else
      {
        v8 = *v3;
        v14 = qword_140326CC0;
        v12 = (char *)MmBadPointer;
        v15 = KeGetCurrentThread()->ApcState.Process;
        *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 6;
        v13 = (char *)(v15[1].ActiveProcessors.Bitmap[2] + 3008);
        *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v13;
      }
    }
    else
    {
      v14 = qword_140326CC0;
      v13 = (char *)(*(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) + 1280LL);
      *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v13;
      *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 1;
    }
    *(_WORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 0;
    *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    if ( v13 == v12 )
    {
      *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 17;
    }
    else
    {
      v17 = &dword_140327CC0;
      if ( (v13[184] & 7) != 2 )
        v17 = (LONG *)(v13 + 192);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v17, CurrentIrql);
      }
      else
      {
        _m_prefetchw(v17);
        v19 = *v17 & 0x7FFFFFFF;
        if ( v19 != _InterlockedCompareExchange(v17, v19 + 1, v19) )
          ExpWaitForSpinLockSharedAndAcquire(v17, CurrentIrql);
        v8 = *v3;
      }
      if ( v17[1] )
      {
        _InterlockedExchange(v17 + 1, 0);
        v8 = *v3;
      }
      *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = CurrentIrql;
      if ( *(_DWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) == 1 )
      {
        v20 = *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        v21 = *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
        if ( *(_QWORD *)(v20 + 1032) )
          v21 = 1;
        *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = v21;
        if ( *(_QWORD *)(v20 + 912) )
          *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3D) = 1;
      }
      v14 = qword_140326CC0;
    }
    if ( v14 && v8 >= v14 && v8 < v14 + (qword_140326CA0 << 21) )
    {
      v22 = MiSystemCacheVaControlArea(v8);
      *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = MiPartitionIdToPointer(
                                                                               *(_WORD *)(v22 + 60) & 0x3FF,
                                                                               v23,
                                                                               v24,
                                                                               v25)
                                                                           + 6592;
    }
    do
    {
      **(_QWORD **)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = -1LL;
      if ( *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) )
      {
        v26 = *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        --*(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
        *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = MI_READ_PTE_LOCK_FREE(v26);
        *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = MI_GET_PAGE_FRAME_FROM_PTE(v3 + 16);
      }
      else
      {
        v27 = MiProbeLeafFrame((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL);
        if ( v27 < 0 )
          break;
      }
      v27 = MiProbeLockFrame((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL);
      if ( v27 < 0 )
        break;
      v28 = *(_QWORD **)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v29 = *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v28 + 1;
      *v3 += 4096LL;
      *v28 = v29;
      v30 = *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 8LL;
      *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v30;
    }
    while ( v30 <= *(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) );
    v31 = *(_BYTE **)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    if ( v31 != MmBadPointer )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3E) == 1 )
      {
        MiUnlockWorkingSetExclusive(
          (__int64)v31,
          *(unsigned __int8 *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
      }
      else
      {
        if ( (v31[184] & 7) == 2 )
          v32 = &dword_140327CC0;
        else
          v32 = (volatile signed __int32 *)(v31 + 192);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v32, retaddr);
        }
        else
        {
          _InterlockedAnd(v32, 0xBFFFFFFF);
          _InterlockedDecrement(v32);
        }
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
      }
    }
    v33 = *(struct _MDL **)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(*(_QWORD *)(((unsigned __int64)&v34 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
    if ( v27 >= 0 )
      break;
    MmUnlockPages(v33);
    ++dword_140327130;
    if ( v27 != -1073741267 )
      RtlRaiseStatus(v27);
  }
}
