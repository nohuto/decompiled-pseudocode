/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x14013A068
 * Callers:
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     MiRescanPagefileBitmaps @ 0x140139FC0 (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

BOOLEAN __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  BOOLEAN v1; // bl
  _RTL_RB_TREE *v2; // r14
  _RTL_RB_TREE *v3; // r12
  _RTL_BALANCED_NODE *v4; // rsi
  _RTL_BALANCED_NODE *v6; // rdi
  _RTL_BALANCED_NODE *v7; // rbp
  _RTL_BALANCED_NODE *v8; // rax
  BOOLEAN v9; // r8
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v11; // rdx
  BOOLEAN result; // al
  _RTL_BALANCED_NODE *v13; // rax

  v1 = 0;
  v2 = (_RTL_RB_TREE *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = (_RTL_RB_TREE *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = (_RTL_BALANCED_NODE *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v6 = *(_RTL_BALANCED_NODE **)(a1 + 192);
  v7 = (_RTL_BALANCED_NODE *)((char *)v6 + 28616);
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = v4->Children[1];
    v6->Children[0] = v4;
    v6->Children[1] = v8;
    if ( v8->Children[0] != v4 )
      __fastfail(3u);
    v8->Children[0] = v6;
    v4->Children[1] = v6;
    v6 = (_RTL_BALANCED_NODE *)((char *)v6 + 56);
  }
  v9 = 0;
  HIDWORD(v6[2].Left) = -1;
  LODWORD(v6[2].Children[0]) = -1;
  Root = v2->Root;
  if ( v2->Root )
  {
    while ( Root->Children[1] )
      Root = Root->Children[1];
    v9 = 1;
  }
  RtlRbInsertNodeEx(v2, Root, v9, v6);
  v11 = v3->Root;
  if ( v3->Root )
  {
    while ( 1 )
    {
      if ( LODWORD(v6[2].Children[0]) < LODWORD(v11[1].Children[0]) )
      {
        v13 = v11->Children[0];
        if ( !v11->Children[0] )
          break;
      }
      else
      {
        v13 = v11->Children[1];
        if ( !v13 )
        {
          v1 = 1;
          break;
        }
      }
      v11 = v13;
    }
  }
  result = RtlRbInsertNodeEx(v3, v11, v1, v6 + 1);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
