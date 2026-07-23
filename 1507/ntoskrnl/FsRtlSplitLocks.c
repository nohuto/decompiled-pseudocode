/*
 * XREFs of FsRtlSplitLocks @ 0x1401062B4
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140104EB8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleShared @ 0x1401052C0 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x140104898 (RtlRealSuccessor.c)
 */

_RTL_SPLAY_LINKS *__fastcall FsRtlSplitLocks(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  _RTL_SPLAY_LINKS *result; // rax
  _RTL_SPLAY_LINKS *v6; // rbp
  unsigned __int64 v7; // rdi
  _RTL_SPLAY_LINKS *LeftChild; // rsi
  unsigned __int64 v9; // rbx
  _RTL_SPLAY_LINKS *Parent; // r14
  BOOL v11; // r13d
  _RTL_SPLAY_LINKS *v12; // r15
  int v13; // ecx
  _RTL_SPLAY_LINKS *v14; // r14
  PRTL_SPLAY_LINKS v15; // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v17; // [rsp+60h] [rbp+8h]

  result = (_RTL_SPLAY_LINKS *)&retaddr;
  v6 = (_RTL_SPLAY_LINKS *)a1;
  v17 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v7 = *(_QWORD *)(a1 + 16);
    a2 = (_RTL_SPLAY_LINKS *)a1;
    v9 = 0LL;
    LeftChild = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
LABEL_4:
    Parent = a2->Parent;
    v11 = *(_QWORD *)(a1 + 16) > v7;
    while ( 1 )
    {
      if ( !Parent )
      {
        v6->RightChild = (_RTL_SPLAY_LINKS *)v9;
        return result;
      }
      result = a2->Parent;
      if ( v6->Parent == a2->Parent )
      {
        v9 = (unsigned __int64)Parent[2].Parent;
        LeftChild = Parent->LeftChild;
        if ( !v11 )
          v6->RightChild = (_RTL_SPLAY_LINKS *)v9;
        goto LABEL_8;
      }
      result = Parent->LeftChild;
      if ( (unsigned __int64)result > v9 && (Parent->RightChild || result != LeftChild) )
      {
        result = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
        v12 = result;
        if ( result )
        {
          v14 = result + 1;
          result[1].Parent = result + 1;
          result[1].LeftChild = 0LL;
          result[1].RightChild = 0LL;
          LOBYTE(result->LeftChild) = 0;
          if ( v6[1].RightChild )
          {
            v15 = RtlRealSuccessor(v6 + 1);
            v15->LeftChild = v14;
          }
          else
          {
            v15 = v6 + 1;
            v6[1].RightChild = v14;
          }
          v14->Parent = v15;
          Parent = v12;
          v12->Parent = a2->Parent;
          a2->Parent = 0LL;
          v12[2].Parent = v6[2].Parent;
          result = v6->RightChild;
          v6[2].Parent = a2;
          v12->RightChild = result;
          v6->RightChild = (_RTL_SPLAY_LINKS *)v9;
          if ( v17 )
            v17 = 0;
          else
            LOBYTE(v6->LeftChild) = 0;
          v6 = v12;
          goto LABEL_8;
        }
        v13 = v17;
        if ( LOBYTE(v6->LeftChild) )
          v13 = 1;
        LOBYTE(v6->LeftChild) = 1;
        v17 = v13;
      }
      if ( v11 && Parent->LeftChild > (_RTL_SPLAY_LINKS *)v7 )
        return result;
      result = Parent[2].Parent;
      if ( v9 < (unsigned __int64)result )
      {
        v9 = (unsigned __int64)Parent[2].Parent;
        if ( !v11 )
          v6->RightChild = result;
      }
LABEL_8:
      a2 = Parent;
      Parent = Parent->Parent;
    }
  }
  v7 = *a3;
  LeftChild = 0LL;
  v9 = *a4;
  if ( *a3 > *a4 && *(_QWORD *)a1 )
    goto LABEL_4;
  return result;
}
