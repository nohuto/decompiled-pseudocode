/*
 * XREFs of IoFreeMdl @ 0x140031620
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140007270 (IopBuildAsynchronousFsdRequest.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     MiZeroPageWrite @ 0x140112300 (MiZeroPageWrite.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 *     CcMdlWriteAbort @ 0x1401DDCB4 (CcMdlWriteAbort.c)
 *     HvlGetCoverageData @ 0x1401E4A7C (HvlGetCoverageData.c)
 *     CcMdlReadComplete2 @ 0x140474C68 (CcMdlReadComplete2.c)
 *     CcMdlRead @ 0x1404774E8 (CcMdlRead.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14052D2E8 (AlpcpFreeCompletionList.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     FsRtlpFreeMdlChain @ 0x14066D930 (FsRtlpFreeMdlChain.c)
 *     IopCleanupFileObjectIosbRange @ 0x14067127C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     IopLiveDumpFreeMappingResources @ 0x140677D3C (IopLiveDumpFreeMappingResources.c)
 *     PnprFreeMappingReserve @ 0x14068FDFC (PnprFreeMappingReserve.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     VerifierIoFreeMdl @ 0x140739B88 (VerifierIoFreeMdl.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8

  if ( (Mdl->MdlFlags & 0x20) != 0 )
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
  if ( (Mdl->MdlFlags & 8) != 0 )
  {
    if ( *((unsigned __int16 *)&Mdl->MdlFlags + 1) >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = 0LL;
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[*((unsigned __int16 *)&Mdl->MdlFlags + 1)];
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
