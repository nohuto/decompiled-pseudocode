/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800
 * Callers:
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v3; // bp
  int v4; // ebx
  _RTL_RB_TREE *v5; // rdi
  _BOOL8 v10; // rax
  _RTL_BALANCED_NODE *v11; // r9
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v13; // r8
  _RTL_BALANCED_NODE *v14; // rax
  _RTL_BALANCED_NODE *v15; // rdx
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // rdx
  _RTL_BALANCED_NODE *v18; // rax
  _RTL_BALANCED_NODE *v19; // rax
  _RTL_BALANCED_NODE *v20; // rax
  signed __int32 v21[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = 0;
  *a3 = 0;
  v4 = 0;
  v5 = &KiTimer2Collections;
  do
  {
    if ( ((unsigned __int8)(1 << v4) & *(_BYTE *)(a1 + 129)) == 0 )
      goto LABEL_3;
    v10 = v4 != 3 && (unsigned int)v4 >= 2;
    v11 = (_RTL_BALANCED_NODE *)(a1 + 24 * (v10 + 1));
    switch ( v4 )
    {
      case 3:
        Root = v5->Root;
        v13 = 0;
        if ( !v5->Root )
          goto LABEL_31;
        while ( 1 )
        {
          if ( v11[2].Children[0] >= Root[2].Children[0] )
          {
            v14 = Root->Children[1];
            if ( !v14 )
            {
              v13 = 1;
              goto LABEL_31;
            }
          }
          else
          {
            v14 = Root->Children[0];
            if ( !Root->Children[0] )
              goto LABEL_30;
          }
          Root = v14;
        }
      case 0:
        Root = v5->Root;
        v13 = 0;
        if ( v5->Root )
        {
          while ( 1 )
          {
            if ( v11[2].Children[0] < Root[2].Children[0] )
            {
              v20 = Root->Children[0];
              if ( !Root->Children[0] )
              {
LABEL_30:
                v13 = 0;
                goto LABEL_31;
              }
            }
            else
            {
              v20 = Root->Children[1];
              if ( !v20 )
              {
LABEL_37:
                v13 = 1;
                goto LABEL_31;
              }
            }
            Root = v20;
          }
        }
        goto LABEL_31;
      case 1:
        Root = v5->Root;
        v13 = 0;
        if ( v5->Root )
        {
          while ( 1 )
          {
            if ( v11[2].Children[0] < Root[2].Children[0] )
            {
              v18 = Root->Children[0];
              if ( !Root->Children[0] )
                goto LABEL_30;
            }
            else
            {
              v18 = Root->Children[1];
              if ( !v18 )
                goto LABEL_37;
            }
            Root = v18;
          }
        }
        goto LABEL_31;
      case 2:
        Root = v5->Root;
        v13 = 0;
        if ( v5->Root )
        {
          while ( 1 )
          {
            if ( v11[1].Children[0] < Root[1].Children[0] )
            {
              v19 = Root->Children[0];
              if ( !Root->Children[0] )
                goto LABEL_30;
            }
            else
            {
              v19 = Root->Children[1];
              if ( !v19 )
                goto LABEL_37;
            }
            Root = v19;
          }
        }
LABEL_31:
        RtlRbInsertNodeEx(v5, Root, v13, v11);
LABEL_32:
        v17 = *(_RTL_BALANCED_NODE **)(a1 + 72);
        goto LABEL_33;
    }
    if ( v4 != 4 )
      goto LABEL_32;
    v15 = v5->Root;
    if ( !v5->Root )
    {
LABEL_41:
      RtlRbInsertNodeEx(v5, v15, 0, v11);
      v17 = *(_RTL_BALANCED_NODE **)(a1 + 80);
      goto LABEL_33;
    }
    while ( v11[1].Children[1] < v15[1].Children[1] )
    {
      v16 = v15->Children[0];
      if ( !v15->Children[0] )
        goto LABEL_41;
LABEL_26:
      v15 = v16;
    }
    v16 = v15->Children[1];
    if ( v16 )
      goto LABEL_26;
    RtlRbInsertNodeEx(v5, v15, 1u, v11);
    v17 = *(_RTL_BALANCED_NODE **)(a1 + 80);
LABEL_33:
    if ( v17 < v5[1].Root )
    {
      v3 = 1;
      *((_QWORD *)&KiTimer2Collections + 3 * v4 + 2) = v17;
    }
LABEL_3:
    ++v4;
    v5 = (_RTL_RB_TREE *)((char *)v5 + 24);
  }
  while ( v4 < 5 );
  if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)KiNextTimer2DueTime )
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
  if ( !v3 )
    return 1;
  _InterlockedOr(v21, 0);
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *a3 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
