/*
 * XREFs of MiFreeInPageSupportBlock @ 0x1400C4240
 * Callers:
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1400E4E34 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x140659D50 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(char *P)
{
  char *v2; // rcx
  _SLIST_HEADER *v3; // rcx

  if ( *((struct _KTHREAD **)P + 19) == KeGetCurrentThread() && *((_QWORD *)P + 26) )
    KeAbPostRelease((ULONG_PTR)P);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 44, 0xFFFFFFFF) == 1 )
  {
    v2 = (char *)*((_QWORD *)P + 31);
    if ( v2 && v2 != P + 256 )
      ExFreePoolWithTag(v2, 0);
    v3 = (_SLIST_HEADER *)&MiState[2 * ((P[189] & 0x20) == 0) + 576];
    if ( (unsigned int)LOWORD(v3->Alignment) >= *((unsigned __int8 *)&MiState[580] + ((P[189] & 0x20) == 0)) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)P);
  }
}
