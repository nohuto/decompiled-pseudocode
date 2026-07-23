/*
 * XREFs of IoFreeMdl @ 0x140071DB0
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     MiZeroPageWrite @ 0x14006AE64 (MiZeroPageWrite.c)
 *     CcZeroDataInCache @ 0x14006D150 (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
 *     CcMdlWriteAbort @ 0x1401B23E4 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1401BA780 (HvlGetCoverageData.c)
 *     CcMdlRead @ 0x14045758C (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x1404577F0 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404D2128 (AlpcpFreeCompletionList.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140575240 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     FsRtlpFreeMdlChain @ 0x14061ECAC (FsRtlpFreeMdlChain.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FF4C (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x14062711C (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140644578 (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rax

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    v2 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v2];
    }
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[3].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PMDL))P->FreeEx)(Mdl);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
