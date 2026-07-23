/*
 * XREFs of KiInsertTimer2IntoCollection @ 0x1400EB140
 * Callers:
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EA710 (KiInsertTimer2WithCollectionLockHeld.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertTimer2IntoCollection(__int64 a1, _RTL_RB_TREE *a2, unsigned int a3)
{
  __int64 v3; // rbp
  _RTL_BALANCED_NODE *Root; // rdx
  _RTL_BALANCED_NODE *v7; // rdi
  BOOLEAN v8; // r8
  _RTL_BALANCED_NODE *v9; // rax
  _RTL_BALANCED_NODE *v11; // rax

  v3 = a3;
  Root = a2->Root;
  v7 = (_RTL_BALANCED_NODE *)(a1 + 24 * (a3 + 1LL));
  if ( a3 )
  {
    v8 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( v7[1].Children[1] >= Root[1].Children[1] )
        {
          v9 = Root->Children[1];
          if ( !v9 )
            goto LABEL_7;
        }
        else
        {
          v9 = Root->Children[0];
          if ( !Root->Children[0] )
            goto LABEL_8;
        }
        Root = v9;
      }
    }
  }
  else
  {
    v8 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( v7[2].Children[0] < Root[2].Children[0] )
        {
          v11 = Root->Children[0];
          if ( !Root->Children[0] )
          {
LABEL_8:
            v8 = 0;
            break;
          }
        }
        else
        {
          v11 = Root->Children[1];
          if ( !v11 )
          {
LABEL_7:
            v8 = 1;
            break;
          }
        }
        Root = v11;
      }
    }
  }
  RtlRbInsertNodeEx(a2, Root, v8, v7);
  if ( a2->Min != v7 )
    return 0LL;
  a2[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 8 * v3 + 72);
  return 1LL;
}
