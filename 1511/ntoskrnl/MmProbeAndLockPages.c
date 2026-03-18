/*
 * XREFs of MmProbeAndLockPages @ 0x1400A7230
 * Callers:
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     sub_1400E53CC @ 0x1400E53CC (sub_1400E53CC.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     sub_1401BCDC8 @ 0x1401BCDC8 (sub_1401BCDC8.c)
 *     sub_1401BCE10 @ 0x1401BCE10 (sub_1401BCE10.c)
 *     KiOpPatchCode @ 0x1401CB744 (KiOpPatchCode.c)
 *     MiGetWorkingSetInfo @ 0x1401DF478 (MiGetWorkingSetInfo.c)
 *     HvlFinalizeSecureImageHash @ 0x140220C9C (HvlFinalizeSecureImageHash.c)
 *     HvlFinishSecureImageValidation @ 0x140220D78 (HvlFinishSecureImageValidation.c)
 *     HvlValidateDynamicCodePages @ 0x140221138 (HvlValidateDynamicCodePages.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     MmProbeAndLockProcessPages @ 0x1404D8364 (MmProbeAndLockProcessPages.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     VerifierMmProbeAndLockPages @ 0x1406D0124 (VerifierMmProbeAndLockPages.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiAddMdlTracker @ 0x1401D2A9C (MiAddMdlTracker.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  unsigned __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v8; // rdx
  __int64 ByteCount; // r8
  unsigned __int64 v10; // rcx
  PMDL v11; // rdi
  struct _EPROCESS *Process; // rax
  __int64 v13; // rax
  LONG *v14; // r9
  LONG *v15; // r8
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v17; // ett
  NTSTATUS v18; // ebx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  volatile signed __int32 *v23; // rcx
  struct _MDL *v24; // rdi
  _KPROCESS *v25; // rax
  PMDL v26[2]; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+108h] [rbp+A8h]

  v3 = (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) = 0x98000000000LL;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (unsigned __int64)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    ByteCount = MemoryDescriptorList->ByteCount;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = CurrentThread;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = MemoryDescriptorList;
    *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = Operation;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v8;
    v10 = ByteCount + v8;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = ByteCount + v8;
    if ( AccessMode && (v10 > 0x7FFFFFFF0000LL || v8 >= v10) )
    {
      ++dword_1402FECF8;
      RtlRaiseStatus(-1073741819);
    }
    v11 = MemoryDescriptorList + 1;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = MemoryDescriptorList + 1;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = ((v8 >> 9) & 0x7FFFFFFFF8LL)
                                                                        - *(_QWORD *)((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = (((v10 - 1) >> 9) & 0x7FFFFFFFF8LL)
                                                                        - 0x98000000000LL;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0xFFFFFFFFFLL;
    if ( Operation )
      MemoryDescriptorList->MdlFlags |= 0x80u;
    else
      MemoryDescriptorList->MdlFlags &= ~0x80u;
    MemoryDescriptorList->MdlFlags |= 2u;
    if ( v8 >= 0x7FFFFFFF0000LL )
    {
      v13 = 0LL;
      *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
      MemoryDescriptorList->Process = 0LL;
    }
    else
    {
      Process = (struct _EPROCESS *)CurrentThread->ApcState.Process;
      *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = Process;
      MemoryDescriptorList->Process = Process;
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)&Process->NumberOfLockedPages,
        ((v8 & 0xFFF) + ByteCount + 4095) >> 12);
      v13 = *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      v11 = *(PMDL *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v8 = *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    v14 = (LONG *)MmBadPointer;
    *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = MmBadPointer;
    v15 = v14;
    *(_BYTE *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 0;
    if ( v8 < 0x7FFFFFFF0000LL )
    {
      v15 = (LONG *)(v13 + 1280);
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 1;
LABEL_11:
      *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v15;
      goto LABEL_12;
    }
    if ( v8 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      v25 = CurrentThread->ApcState.Process;
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 6;
      v15 = (LONG *)(v25[1].ActiveProcessors.Bitmap[2] + 2968);
      goto LABEL_11;
    }
    if ( v8 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
      || qword_1402FE8F0
      && v8 >= qword_1402FE8F0
      && v8 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v15 = &dword_1402FF980;
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 3;
      goto LABEL_11;
    }
    if ( qword_1402FE940 && v8 >= qword_1402FE940 && v8 < qword_1402FE940 + (qword_1402FE920 << 21) )
    {
      v15 = &dword_1402FF880;
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2;
      goto LABEL_11;
    }
    if ( v8 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 4;
    }
    else
    {
      if ( !qword_1402FE8F0
        || v8 < qword_1402FE8F0
        || v8 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21)
        || (*(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) != 0xD0 )
      {
        v15 = &dword_1402FFA80;
        *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 5;
        goto LABEL_11;
      }
      *(_DWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0;
    }
LABEL_12:
    if ( v15 == v14 )
    {
      *(_BYTE *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v15, CurrentIrql);
      }
      else
      {
        _m_prefetchw(v15);
        v17 = *v15 & 0x7FFFFFFF;
        if ( v17 != _InterlockedCompareExchange(v15, v17 + 1, v17) )
          ExpWaitForSpinLockSharedAndAcquire(
            *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
            CurrentIrql);
        v11 = *(PMDL *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      }
      *(_BYTE *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = CurrentIrql;
    }
    do
    {
      v11->Next = (struct _MDL *)-1LL;
      v18 = MiProbeLeafFrame(v3 + 16);
      if ( v18 < 0 )
        break;
      v18 = MiProbeLockFrame(v3 + 16);
      if ( v18 < 0 )
        break;
      v20 = *(_QWORD **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v21 = *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) += 4096LL;
      *v20 = v21;
      v11 = (PMDL)(v20 + 1);
      v22 = *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 8LL;
      *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v11;
      *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v22;
    }
    while ( v22 <= *(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) );
    v23 = *(volatile signed __int32 **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    if ( v23 != MmBadPointer )
    {
      if ( *(_BYTE *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) == 1 )
      {
        MiUnlockWorkingSetExclusive(
          (__int64)v23,
          *(unsigned __int8 *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
          v19);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v23, retaddr);
        }
        else
        {
          _InterlockedAnd(v23, 0xBFFFFFFF);
          _InterlockedDecrement(*(volatile signed __int32 **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
        }
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60));
      }
    }
    v24 = *(struct _MDL **)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(*(_QWORD *)(((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
    if ( v18 >= 0 )
      break;
    MmUnlockPages(v24);
    ++dword_1402FED20;
    if ( v18 != -1073741267 )
      RtlRaiseStatus(v18);
  }
}
