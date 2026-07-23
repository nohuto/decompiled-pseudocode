/*
 * XREFs of FsRtlPrivateInsertExclusiveLock @ 0x1400CEA30
 * Callers:
 *     FsRtlPrivateInsertLock @ 0x1400CDA14 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x1400CD450 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400CEAA4 (FsRtlFindFirstOverlappingExclusiveNode.c)
 */

PRTL_SPLAY_LINKS __fastcall FsRtlPrivateInsertExclusiveLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  PRTL_SPLAY_LINKS result; // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v6; // [rsp+48h] [rbp+10h] BYREF

  result = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                               *(_QWORD *)(a1 + 16),
                               (int)a2 + 24,
                               (int)a2 + 64,
                               (unsigned int)&v6,
                               (__int64)&v5);
  a2->Parent = a2;
  a2->LeftChild = 0LL;
  a2->RightChild = 0LL;
  if ( result )
  {
    if ( !result->RightChild )
      goto LABEL_4;
    if ( result->LeftChild )
      result = RtlRealSuccessor(result);
    goto LABEL_6;
  }
  result = v6;
  if ( v6 )
  {
    if ( !v5 )
    {
LABEL_4:
      result->RightChild = a2;
LABEL_5:
      a2->Parent = result;
      return result;
    }
LABEL_6:
    result->LeftChild = a2;
    goto LABEL_5;
  }
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
