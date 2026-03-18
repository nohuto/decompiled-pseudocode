/*
 * XREFs of MiGetInPageSupportBlock @ 0x1400E7520
 * Callers:
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x1400E6F94 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x140499560 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1404EF458 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x140659C6C (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x1400E75D0 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  union _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rax
  void *v5; // rbx
  SIZE_T v7; // rdx

  v2 = a1 & 1;
  v3 = (union _SLIST_HEADER *)((char *)&unk_140327640 + 16 * ((a1 & 1) == 0));
  if ( LOWORD(v3->Alignment) )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(v3);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
LABEL_3:
      MiInitializeInPageSupport((ULONG_PTR)PoolWithTag);
      return v5;
    }
  }
  if ( (a1 & 4) == 0 )
  {
    v7 = 432LL;
    if ( v2 )
      v7 = 2352LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6E496D4Du);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return v5;
    goto LABEL_3;
  }
  return 0LL;
}
