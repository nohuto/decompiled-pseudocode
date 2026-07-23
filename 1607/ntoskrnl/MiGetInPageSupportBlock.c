/*
 * XREFs of MiGetInPageSupportBlock @ 0x1400E53C0
 * Callers:
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x1400E4E34 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x140499FF0 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1404D151C (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x140659D50 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x1400E5470 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rax
  void *v5; // rbx
  SIZE_T v7; // rdx

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_140327680 + 16 * ((a1 & 1) == 0));
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
