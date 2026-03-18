/*
 * XREFs of IoAllocateMdl @ 0x140033BF0
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140007270 (IopBuildAsynchronousFsdRequest.c)
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     MiCreateMdl @ 0x1400DFC50 (MiCreateMdl.c)
 *     MiZeroPageWrite @ 0x140112300 (MiZeroPageWrite.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     HvlGetCoverageData @ 0x1401E4A7C (HvlGetCoverageData.c)
 *     MmAllocateMdlForIoSpace @ 0x140215180 (MmAllocateMdlForIoSpace.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140677B20 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x140690220 (PnprInitializeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     VfBuildMdlFromScatterGatherList @ 0x14073AF7C (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int64 v5; // r12
  __int16 v6; // r13
  __int64 v7; // r14
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  PMDL result; // rax
  _WORD *v13; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  _GENERAL_LOOKASIDE *P; // rbx
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  unsigned int Number; // eax
  PMDL i; // rax

  v5 = Length;
  v6 = 0;
  v7 = (unsigned __int16)VirtualAddress & 0xFFF;
  v10 = (v7 + (unsigned __int64)Length + 4095) >> 12;
  if ( (unsigned int)v10 <= 0x11 )
  {
    v11 = 184;
    v6 = 8;
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( v13 )
      goto LABEL_8;
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[3].L;
    ++L->TotalAllocates;
    v13 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( v13
      || (Size = L->Size,
          Tag = L->Tag,
          Type = (unsigned int)L->Type,
          ++L->AllocateMisses,
          (v13 = (_WORD *)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
    {
LABEL_8:
      *(_DWORD *)v13 = CurrentPrcb->Number;
    }
    if ( v13 )
    {
      LOWORD(Number) = *v13;
      goto LABEL_12;
    }
  }
  else
  {
    v11 = 8 * v10 + 48;
  }
  result = (PMDL)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x206C644Du);
  v13 = result;
  if ( !result )
    return result;
  Number = KeGetPcr()->Prcb.Number;
LABEL_12:
  v13[6] = Number;
  *(_QWORD *)v13 = 0LL;
  *((_DWORD *)v13 + 10) = v5;
  v13[4] = 8 * (((unsigned __int64)(v7 + v5 + 4095) >> 12) + 6);
  v13[5] = v6;
  *((_QWORD *)v13 + 4) = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  *((_DWORD *)v13 + 11) = (unsigned __int16)VirtualAddress & 0xFFF;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      for ( i = Irp->MdlAddress; i->Next; i = i->Next )
        ;
      i->Next = (struct _MDL *)v13;
    }
    else
    {
      Irp->MdlAddress = (PMDL)v13;
    }
  }
  return (PMDL)v13;
}
