/*
 * XREFs of IoAllocateMdl @ 0x14002EF90
 * Callers:
 *     MiZeroPageWrite @ 0x14006B2E4 (MiZeroPageWrite.c)
 *     CcZeroDataInCache @ 0x14006D5D0 (CcZeroDataInCache.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400A4594 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1400B161C (CcPrepareMdlWrite.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E9780 (IopBuildDeviceIoControlRequest.c)
 *     MiCreateMdl @ 0x1400FCB40 (MiCreateMdl.c)
 *     HvlGetCoverageData @ 0x1401BA89C (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x1401E4358 (MmAllocateMdlForIoSpace.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     CcMdlRead @ 0x1404586BC (CcMdlRead.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140626E3C (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x1406448B8 (PnprInitializeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1406A9BE8 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1406AA264 (EtwpSavePersistedLogger.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140706744 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
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
