/*
 * XREFs of MmProbeAndLockPages @ 0x140034050
 * Callers:
 *     sub_14000745C @ 0x14000745C (sub_14000745C.c)
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     sub_1401F8708 @ 0x1401F8708 (sub_1401F8708.c)
 *     sub_1401F8750 @ 0x1401F8750 (sub_1401F8750.c)
 *     KiOpPatchCode @ 0x14020A738 (KiOpPatchCode.c)
 *     HvlFinalizeSecureImageHash @ 0x1402700F0 (HvlFinalizeSecureImageHash.c)
 *     HvlFinishSecureImageValidation @ 0x1402701CC (HvlFinishSecureImageValidation.c)
 *     HvlValidateDynamicCodePages @ 0x14027058C (HvlValidateDynamicCodePages.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     MmProbeAndLockProcessPages @ 0x1404778C8 (MmProbeAndLockProcessPages.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     VerifierMmProbeAndLockPages @ 0x140753BF0 (VerifierMmProbeAndLockPages.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall MmProbeAndLockPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, LOCK_OPERATION Operation)
{
  unsigned __int64 *v3; // rbp
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v8; // rdx
  __int64 ByteCount; // r8
  unsigned __int64 v10; // rcx
  PMDL v11; // rdi
  unsigned __int64 v12; // r8
  struct _EPROCESS *Process; // rax
  __int64 v14; // rax
  int *v15; // r9
  int *v16; // r8
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v18; // ett
  NTSTATUS v19; // ebx
  _QWORD *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  volatile signed __int32 *v23; // rcx
  struct _MDL *v24; // rdi
  _KPROCESS *v25; // rax
  __int64 v26; // [rsp+60h] [rbp+0h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+98h]

  v3 = (unsigned __int64 *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (unsigned __int64)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
    ByteCount = MemoryDescriptorList->ByteCount;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = CurrentThread;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = MemoryDescriptorList;
    *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = Operation;
    *v3 = v8;
    v10 = ByteCount + v8;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ByteCount + v8;
    if ( AccessMode && (v10 > 0x7FFFFFFF0000LL || v8 >= v10) )
    {
      ++dword_14034F1B0;
      RtlRaiseStatus(-1073741819);
    }
    v11 = MemoryDescriptorList + 1;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = MemoryDescriptorList + 1;
    v12 = ((v8 & 0xFFF) + ByteCount + 4095) >> 12;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = ((v8 >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0xFFFFFFFFFLL;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = (((v10 - 1) >> 9) & 0x7FFFFFFFF8LL)
                                                                         - 0x98000000000LL;
    if ( Operation )
      MemoryDescriptorList->MdlFlags |= 0x80u;
    else
      MemoryDescriptorList->MdlFlags &= ~0x80u;
    MemoryDescriptorList->MdlFlags |= 2u;
    if ( v8 >= 0x7FFFFFFF0000LL )
    {
      v14 = 0LL;
      *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
      MemoryDescriptorList->Process = 0LL;
    }
    else
    {
      Process = (struct _EPROCESS *)CurrentThread->ApcState.Process;
      *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = Process;
      MemoryDescriptorList->Process = Process;
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process->NumberOfLockedPages, v12);
      v14 = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v11 = *(PMDL *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v8 = *v3;
    }
    v15 = (int *)MmBadPointer;
    *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = MmBadPointer;
    v16 = v15;
    *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = 0;
    if ( v8 < 0x7FFFFFFF0000LL )
    {
      v16 = (int *)(v14 + 1272);
      *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 1;
LABEL_11:
      *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v16;
      goto LABEL_12;
    }
    if ( v8 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    {
      v25 = CurrentThread->ApcState.Process;
      *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 6;
      v16 = (int *)(v25[1].ActiveProcessors.Bitmap[2] + 2968);
      goto LABEL_11;
    }
    if ( v8 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
      || qword_14034EDB0
      && v8 >= qword_14034EDB0
      && v8 < qword_14034EDB0 + (qword_14034ED90 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v16 = dword_14034FE40;
      *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 3;
      goto LABEL_11;
    }
    if ( qword_14034EE00 && v8 >= qword_14034EE00 && v8 < qword_14034EE00 + (qword_14034EDE0 << 21) )
    {
      v16 = dword_14034FD40;
      *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 2;
      goto LABEL_11;
    }
    if ( v8 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
    {
      *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 4;
    }
    else
    {
      if ( !qword_14034EDB0
        || v8 < qword_14034EDB0
        || v8 >= qword_14034EDB0 + (qword_14034ED90 << 21)
        || (*(_BYTE *)(48 * ((*(_QWORD *)(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) != 0xD0 )
      {
        v16 = &dword_14034FF40;
        *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 5;
        goto LABEL_11;
      }
      *(_DWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
    }
LABEL_12:
    if ( v16 == v15 )
    {
      *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 17;
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16);
      }
      else
      {
        _m_prefetchw(v16);
        v18 = *v16 & 0x7FFFFFFF;
        if ( v18 != _InterlockedCompareExchange(v16, v18 + 1, v18) )
          ExpWaitForSpinLockSharedAndAcquire(*(volatile signed __int32 **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                         + 0x58));
        v11 = *(PMDL *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      }
      *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = CurrentIrql;
    }
    do
    {
      v11->Next = (struct _MDL *)-1LL;
      v19 = MiProbeLeafFrame((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
      if ( v19 < 0 )
        break;
      v19 = MiProbeLockFrame((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
      if ( v19 < 0 )
        break;
      v20 = *(_QWORD **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v21 = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      *v3 += 4096LL;
      *v20 = v21;
      v11 = (PMDL)(v20 + 1);
      v22 = *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 8LL;
      *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v11;
      *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v22;
    }
    while ( v22 <= *(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) );
    v23 = *(volatile signed __int32 **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    if ( v23 != MmBadPointer )
    {
      if ( *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) == 1 )
      {
        MiUnlockWorkingSetExclusive(v23, *(unsigned __int8 *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
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
          _InterlockedDecrement(*(volatile signed __int32 **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
        }
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
      }
    }
    v24 = *(struct _MDL **)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(*(_QWORD *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
    if ( v19 >= 0 )
      break;
    MmUnlockPages(v24);
    ++dword_14034F1D8;
    if ( v19 != -1073741267 )
      RtlRaiseStatus(v19);
  }
}
