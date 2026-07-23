/*
 * XREFs of MiFreeInPageSupportBlock @ 0x140033DF0
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x14005E9AC (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x1406A2FF8 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
    v3 = (_SLIST_HEADER *)&MiState[2 * ((P[189] & 0x20) == 0) + 526];
    if ( (unsigned int)LOWORD(v3->Alignment) >= *((unsigned __int8 *)&MiState[530] + ((P[189] & 0x20) == 0)) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)P);
  }
}
