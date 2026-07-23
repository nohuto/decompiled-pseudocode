/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x140034D90
 * Callers:
 *     KiInsertTimer2 @ 0x140033028 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x1400338E0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v4; // cl
  int v7; // edi
  BOOLEAN v8; // r8
  _RTL_RB_TREE *v9; // rdi
  _RTL_BALANCED_NODE *Root; // rdx
  char v11; // cl
  BOOLEAN v13; // r8
  _RTL_RB_TREE *v14; // rsi
  _RTL_BALANCED_NODE *v15; // rdx
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // rax
  signed __int32 v18[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v7 = 0;
  *a3 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    v8 = 0;
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v9 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v4 & 3));
    Root = v9->Root;
    if ( v9->Root )
    {
      while ( 1 )
      {
        if ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a1 + 72) >= Root[2].Children[0] )
        {
          v17 = Root->Children[1];
          if ( !v17 )
          {
            v8 = 1;
            break;
          }
        }
        else
        {
          v17 = Root->Children[0];
          if ( !Root->Children[0] )
          {
            v8 = 0;
            break;
          }
        }
        Root = v17;
      }
    }
    RtlRbInsertNodeEx(v9, Root, v8, (PRTL_BALANCED_NODE)(a1 + 24));
    if ( v9->Min == (_RTL_BALANCED_NODE *)(a1 + 24) )
    {
      v9[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
  }
  v11 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v11 | 0x10;
  }
  else
  {
    v13 = 0;
    *(_BYTE *)(a1 + 131) = v11 & 0xEF;
    v14 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v11 & 3));
    v15 = v14->Root;
    if ( v14->Root )
    {
      while ( 1 )
      {
        if ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a1 + 80) >= v15[1].Children[1] )
        {
          v16 = v15->Children[1];
          if ( !v16 )
          {
            v13 = 1;
            break;
          }
        }
        else
        {
          v16 = v15->Children[0];
          if ( !v15->Children[0] )
          {
            v13 = 0;
            break;
          }
        }
        v15 = v16;
      }
    }
    RtlRbInsertNodeEx(v14, v15, v13, (PRTL_BALANCED_NODE)(a1 + 48));
    if ( v14->Min == (_RTL_BALANCED_NODE *)(a1 + 48) )
    {
      v7 |= 1u;
      v14[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 80);
    }
  }
  if ( !v7 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v18, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *a3 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
