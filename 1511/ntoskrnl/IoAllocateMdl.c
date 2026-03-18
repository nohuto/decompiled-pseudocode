/*
 * XREFs of IoAllocateMdl @ 0x1400FC2E0
 * Callers:
 *     CcZeroDataInCache @ 0x140015F4C (CcZeroDataInCache.c)
 *     IopBuildDeviceIoControlRequest @ 0x140073E30 (IopBuildDeviceIoControlRequest.c)
 *     MiCreateMdl @ 0x1400C86FC (MiCreateMdl.c)
 *     MiZeroPageWrite @ 0x1400E0134 (MiZeroPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     HvlGetCoverageData @ 0x1401AE12C (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x1401D3B0C (MmAllocateMdlForIoSpace.c)
 *     MiSortPartitionMdls @ 0x1401D9E48 (MiSortPartitionMdls.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     CcMdlRead @ 0x1404D83FC (CcMdlRead.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1405FD1C8 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1406104AC (PnprInitializeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     VfBuildMdlFromScatterGatherList @ 0x1406BA6D0 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x1406BC758 (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
