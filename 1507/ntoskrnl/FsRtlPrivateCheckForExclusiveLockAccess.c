/*
 * XREFs of FsRtlPrivateCheckForExclusiveLockAccess @ 0x140105F7C
 * Callers:
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 * Callees:
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140105568 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x140105B70 (RtlSplay.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14010605C (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1401E2A34 (FsRtlFindFirstOverlapInNode.c)
 */

char __fastcall FsRtlPrivateCheckForExclusiveLockAccess(__int64 a1, unsigned __int64 *a2)
{
  _RTL_SPLAY_LINKS *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 FirstOverlappingExclusiveNode; // rax
  __int64 FirstOverlappingSharedNode; // rax
  PRTL_SPLAY_LINKS v10; // rax
  __int64 v11; // rax
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  Links = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v5, a2, a2 + 5, &Links, 0LL);
    if ( FirstOverlappingSharedNode )
    {
      v11 = *(_BYTE *)(FirstOverlappingSharedNode - 16)
          ? FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a2 + 5)
          : *(_QWORD *)(FirstOverlappingSharedNode - 24);
      if ( v11 && (a2[1] || *(_QWORD *)(v11 + 16)) )
        return 0;
    }
    v4 = Links;
    if ( Links )
    {
      v10 = RtlSplay(Links);
      v4 = 0LL;
      *(_QWORD *)(a1 + 8) = v10;
      Links = 0LL;
    }
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
  {
    FirstOverlappingExclusiveNode = FsRtlFindFirstOverlappingExclusiveNode(
                                      v6,
                                      (_DWORD)a2,
                                      (int)a2 + 40,
                                      (unsigned int)&Links,
                                      0LL);
    if ( !FirstOverlappingExclusiveNode || !a2[1] && !*(_QWORD *)(FirstOverlappingExclusiveNode + 32) )
    {
      v4 = Links;
      goto LABEL_5;
    }
    return 0;
  }
LABEL_5:
  if ( v4 )
    *(_QWORD *)(a1 + 16) = RtlSplay(v4);
  return 1;
}
