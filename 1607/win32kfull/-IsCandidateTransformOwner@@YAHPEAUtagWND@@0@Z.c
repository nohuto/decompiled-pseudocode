/*
 * XREFs of ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C010C4F4
 * Callers:
 *     GetInheritedMonitor @ 0x1C0070E64 (GetInheritedMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     IsTitleWindow @ 0x1C010C644 (IsTitleWindow.c)
 *     UnionRect @ 0x1C010C690 (UnionRect.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C014736C (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsCandidateTransformOwner(struct tagWND *a1, struct tagWND *a2)
{
  int v3; // ebp
  BOOL v5; // r14d
  __int64 v6; // r10
  __int64 v7; // r11
  struct tagRECT *v9; // rdi
  struct tagRECT *v10; // rbx
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_BYTE *)a2 + 51) & 8;
  v5 = ((*((_BYTE *)a2 + 50) >> 3) & (unsigned __int8)~(*((_BYTE *)a2 + 51) >> 5) & 1) != 0;
  if ( !(unsigned int)IsTitleWindow(a1, 1LL)
    || *(_QWORD *)(v6 + 384) != *(_QWORD *)(v7 + 384) && *(_QWORD *)(v6 + 376) != *(_QWORD *)(v7 + 376) )
  {
    return 0LL;
  }
  if ( ((*((_BYTE *)a1 + 352) ^ *((_BYTE *)a2 + 352)) & 0xF) != 0 )
    return 0LL;
  if ( !v3 && !v5 )
    return 1LL;
  v9 = (struct tagRECT *)((char *)a1 + 112);
  v10 = (struct tagRECT *)((char *)a2 + 112);
  v11 = IsAdjacentRect(v10, v9);
  v12 = v11;
  if ( v3 )
  {
    if ( !v11 && !(unsigned int)IntersectRect(v14, &v10->left, &v9->left) )
      return 0LL;
  }
  if ( !v5 || v12 )
    return 1LL;
  if ( !(unsigned int)UnionRect(v14, v10, v9) )
    return 0LL;
  v13 = v14[0] - *(_QWORD *)&v10->left;
  if ( v14[0] == *(_QWORD *)&v10->left )
    v13 = v14[1] - *(_QWORD *)&v10->right;
  return !v13;
}
