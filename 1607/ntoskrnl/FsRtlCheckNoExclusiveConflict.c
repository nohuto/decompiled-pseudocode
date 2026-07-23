/*
 * XREFs of FsRtlCheckNoExclusiveConflict @ 0x1401B8864
 * Callers:
 *     FsRtlFastCheckLockForRead @ 0x1400A70D8 (FsRtlFastCheckLockForRead.c)
 *     FsRtlFastCheckLockForWrite @ 0x1400AB3E4 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 *     RtlSplay @ 0x1400C3880 (RtlSplay.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400C3DE8 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

char __fastcall FsRtlCheckNoExclusiveConflict(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  char v10; // bl
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // r10
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rbp
  PRTL_SPLAY_LINKS Links; // [rsp+60h] [rbp+8h] BYREF

  v10 = 1;
  FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                      *(_QWORD **)(a1 + 16),
                                                      a2,
                                                      a3,
                                                      &Links,
                                                      0LL);
  if ( FirstOverlappingExclusiveNode )
  {
    v12 = *a3;
    v13 = a6;
    v14 = a5;
    while ( (_RTL_SPLAY_LINKS *)v12 >= FirstOverlappingExclusiveNode[1].Parent )
    {
      if ( (_RTL_SPLAY_LINKS *)*a2 <= FirstOverlappingExclusiveNode[2].RightChild
        && (FirstOverlappingExclusiveNode[2].Parent != (_RTL_SPLAY_LINKS *)v14
         || FirstOverlappingExclusiveNode[2].LeftChild != (_RTL_SPLAY_LINKS *)v13
         || HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) != a4) )
      {
        v10 = 0;
        break;
      }
      FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
      if ( !FirstOverlappingExclusiveNode )
        break;
    }
  }
  if ( Links )
    *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  return v10;
}
