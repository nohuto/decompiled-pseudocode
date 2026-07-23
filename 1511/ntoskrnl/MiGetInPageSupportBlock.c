/*
 * XREFs of MiGetInPageSupportBlock @ 0x140070DF4
 * Callers:
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiAllocateInPageSupport @ 0x1400AAD60 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiCreateRotateView @ 0x1404C40C4 (MiCreateRotateView.c)
 *     MiPfAllocateMdls @ 0x1404D9E00 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x140623DE4 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x140070E90 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(char a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rax
  void *v5; // rdi
  SIZE_T v7; // rdx

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_1402FF1F0 + 16 * (v2 == 0));
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
