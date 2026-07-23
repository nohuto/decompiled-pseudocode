/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400EA710
 * Callers:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400EC8F8 (KiInsertTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     KiInsertTimer2IntoCollection @ 0x1400EB140 (KiInsertTimer2IntoCollection.c)
 *     KiRemoveTimer2 @ 0x1400F76D0 (KiRemoveTimer2.c)
 */

char __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, _BYTE *a3)
{
  char v4; // cl
  int v5; // edi
  BOOLEAN v8; // r8
  _RTL_BALANCED_NODE *v9; // rdx
  _RTL_RB_TREE *v10; // r14
  _RTL_BALANCED_NODE *v11; // rax
  char v12; // cl
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v5 = 0;
  *a3 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v8 = 0;
    v9 = (_RTL_BALANCED_NODE *)*((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3));
    v10 = (_RTL_RB_TREE *)((char *)&KiTimer2Collections + 24 * (v4 & 3));
    if ( v9 )
    {
      while ( 1 )
      {
        if ( (_RTL_BALANCED_NODE *)*(_QWORD *)(a1 + 72) >= v9[2].Children[0] )
        {
          v11 = v9->Children[1];
          if ( !v11 )
          {
            v8 = 1;
            break;
          }
        }
        else
        {
          v11 = v9->Children[0];
          if ( !v9->Children[0] )
          {
            v8 = 0;
            break;
          }
        }
        v9 = v11;
      }
    }
    RtlRbInsertNodeEx(v10, v9, v8, (PRTL_BALANCED_NODE)(a1 + 24));
    if ( v10->Min == (_RTL_BALANCED_NODE *)(a1 + 24) )
    {
      v5 = 1;
      v10[1].Root = *(_RTL_BALANCED_NODE **)(a1 + 72);
    }
  }
  v12 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v12 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v12 & 0xEF;
    v5 |= KiInsertTimer2IntoCollection(a1, (char *)&KiTimer2Collections + 24 * (v12 & 3), 1LL);
  }
  if ( !v5 )
    return 1;
  if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
  {
    KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
    _InterlockedOr(v14, 0);
  }
  if ( *(_QWORD *)(a1 + 72) > MEMORY[0xFFFFF78000000008] )
    return 1;
  *a3 = 1;
  if ( a2 )
    return 1;
  KiRemoveTimer2(a1);
  return 0;
}
