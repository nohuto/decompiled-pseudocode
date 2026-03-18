/*
 * XREFs of IoFreeMdl @ 0x140072230
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     MiZeroPageWrite @ 0x14006B2E4 (MiZeroPageWrite.c)
 *     CcZeroDataInCache @ 0x14006D5D0 (CcZeroDataInCache.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400A4594 (IopBuildAsynchronousFsdRequest.c)
 *     CcPrepareMdlWrite @ 0x1400B161C (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1400B3998 (CcMdlWriteComplete2.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E9780 (IopBuildDeviceIoControlRequest.c)
 *     IopDropIrp @ 0x1400F788C (IopDropIrp.c)
 *     CcMdlWriteAbort @ 0x1401B2500 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1401BA89C (HvlGetCoverageData.c)
 *     CcMdlRead @ 0x1404586BC (CcMdlRead.c)
 *     CcMdlReadComplete2 @ 0x140458920 (CcMdlReadComplete2.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x1404F0034 (AlpcpFreeCompletionList.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     ?Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x140574D00 (-Read@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     FsRtlpFreeMdlChain @ 0x14061EBF8 (FsRtlpFreeMdlChain.c)
 *     ?Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z @ 0x14061FE98 (-Write@PC_ENVIRONMENT@@SAJPEAX0K_K@Z.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x1406213D4 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x140627068 (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x140644494 (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140709458 (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025D10 (MmUnmapLockedPages.c)
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
