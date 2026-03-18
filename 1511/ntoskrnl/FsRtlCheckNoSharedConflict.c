/*
 * XREFs of FsRtlCheckNoSharedConflict @ 0x140001708
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x1400CCE78 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1400CE098 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x1400CE540 (RtlSplay.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1401ACB18 (FsRtlFindFirstOverlapInNode.c)
 */

bool __fastcall FsRtlCheckNoSharedConflict(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 FirstOverlappingSharedNode; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 *(_QWORD *)(a1 + 8),
                                 a2,
                                 a3,
                                 (unsigned int)&Links,
                                 0LL);
  if ( Links )
    *(_QWORD *)(a1 + 8) = RtlSplay(Links);
  if ( !FirstOverlappingSharedNode )
    return 1;
  if ( *(_BYTE *)(FirstOverlappingSharedNode - 24 + 8) )
    return FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a3) == 0;
  return 0;
}
