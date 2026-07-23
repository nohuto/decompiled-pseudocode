/*
 * XREFs of MiGetInPageSupportBlock @ 0x14005EA80
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x14005E9AC (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiPfAllocateMdls @ 0x14049E7C0 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1405563AC (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x1406A2FF8 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14005EB30 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void *__fastcall MiGetInPageSupportBlock(unsigned int a1)
{
  int v2; // esi
  _SLIST_HEADER *v3; // rcx
  void *PoolWithTag; // rax
  void *v5; // rbx
  SIZE_T v7; // rdx

  v2 = a1 & 1;
  v3 = (_SLIST_HEADER *)((char *)&unk_14034F6B0 + 16 * ((a1 & 1) == 0));
  if ( LOWORD(v3->Alignment) )
  {
    PoolWithTag = RtlpInterlockedPopEntrySList(v3);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
LABEL_3:
      MiInitializeInPageSupport(PoolWithTag, a1);
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
