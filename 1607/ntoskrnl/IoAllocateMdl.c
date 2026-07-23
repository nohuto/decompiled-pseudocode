/*
 * XREFs of IoAllocateMdl @ 0x14002EB10
 * Callers:
 *     MiZeroPageWrite @ 0x14006AE64 (MiZeroPageWrite.c)
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     MiCreateMdl @ 0x1400FA8C0 (MiCreateMdl.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
 *     HvlGetCoverageData @ 0x1401BA780 (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x1401E4184 (MmAllocateMdlForIoSpace.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140626EF0 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x14064499C (PnprInitializeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1406A9D20 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140706774 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int64 v5; // r14
  CSHORT v6; // r15
  __int64 v7; // rbp
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v12; // r12d
  _GENERAL_LOOKASIDE *P; // rdi
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  PMDL i; // rdx

  v5 = Length;
  v6 = 0;
  v7 = (unsigned __int16)VirtualAddress & 0xFFF;
  v10 = (v7 + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v10 > 0x11 )
  {
    v12 = 8 * v10 + 48;
  }
  else
  {
    v6 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 184;
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( result )
      goto LABEL_3;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[3].L;
    ++L->TotalAllocates;
    result = (PMDL)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( result
      || (Size = L->Size,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (result = (PMDL)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
    {
LABEL_3:
      LODWORD(result->Next) = CurrentPrcb->Number;
    }
    if ( result )
    {
      LOWORD(Number) = result->Next;
      goto LABEL_6;
    }
  }
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x206C644Du);
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_6:
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->ByteCount = v5;
  result->Size = 8 * (((unsigned __int64)(v7 + v5 + 4095) >> 12) + 6);
  result->MdlFlags = v6;
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = (unsigned __int16)VirtualAddress & 0xFFF;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      for ( i = Irp->MdlAddress; i->Next; i = i->Next )
        ;
      i->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
