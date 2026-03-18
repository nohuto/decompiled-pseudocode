/*
 * XREFs of MiFreeInPageSupportBlock @ 0x1400C63A0
 * Callers:
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1400E6F94 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x14042C0DC (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140499560 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x140659C6C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(char *P)
{
  char *v2; // rcx
  union _SLIST_HEADER *v3; // rcx

  if ( *((struct _KTHREAD **)P + 19) == KeGetCurrentThread() && *((_QWORD *)P + 26) )
    KeAbPostRelease((ULONG_PTR)P);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 44, 0xFFFFFFFF) == 1 )
  {
    v2 = (char *)*((_QWORD *)P + 31);
    if ( v2 && v2 != P + 256 )
      ExFreePoolWithTag(v2, 0);
    v3 = (union _SLIST_HEADER *)&MiState[2 * ((P[189] & 0x20) == 0) + 576];
    if ( (unsigned int)LOWORD(v3->Alignment) >= *((unsigned __int8 *)&MiState[580] + ((P[189] & 0x20) == 0)) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)P);
  }
}
