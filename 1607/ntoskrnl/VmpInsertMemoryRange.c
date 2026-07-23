/*
 * XREFs of VmpInsertMemoryRange @ 0x1402240D0
 * Callers:
 *     VmCreateMemoryRange @ 0x14069B3C8 (VmCreateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     VmpProcessContextLockExclusive @ 0x140224334 (VmpProcessContextLockExclusive.c)
 */

__int64 __fastcall VmpInsertMemoryRange(PEX_SPIN_LOCK SpinLock, PRTL_BALANCED_NODE Node, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  _RTL_BALANCED_NODE **v9; // r10
  unsigned int v10; // ebx
  _QWORD *v11; // rcx
  _RTL_BALANCED_NODE **v12; // r14
  _QWORD *v13; // rcx
  _RTL_BALANCED_NODE *v14; // rdx
  BOOLEAN v15; // r8
  _RTL_BALANCED_NODE *v16; // rcx
  _RTL_BALANCED_NODE *v17; // rax
  _RTL_BALANCED_NODE *v18; // rdx
  BOOLEAN v19; // r8
  unsigned __int64 ParentValue; // rcx
  _RTL_BALANCED_NODE *v21; // rax

  v6 = VmpProcessContextLockExclusive(SpinLock);
  v7 = *((_QWORD *)SpinLock + 9);
  v8 = v6;
  if ( v7 == -1 )
  {
    *((_QWORD *)SpinLock + 9) = a3;
  }
  else if ( v7 != a3 )
  {
    v10 = -1073740007;
    goto LABEL_39;
  }
  v9 = (_RTL_BALANCED_NODE **)(SpinLock + 2);
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)SpinLock + 1);
  while ( v11 )
  {
    if ( Node[2].Children[1] < (_RTL_BALANCED_NODE *)v11[3] )
    {
      v11 = (_QWORD *)*v11;
    }
    else
    {
      if ( Node[2].Children[0] <= (_RTL_BALANCED_NODE *)v11[4] )
      {
LABEL_15:
        v10 = -1073741800;
        goto LABEL_39;
      }
      v11 = (_QWORD *)v11[1];
    }
  }
  v12 = (_RTL_BALANCED_NODE **)(SpinLock + 6);
  v13 = (_QWORD *)*((_QWORD *)SpinLock + 3);
  while ( v13 )
  {
    if ( Node[3].Children[0] < (_RTL_BALANCED_NODE *)v13[8] )
    {
      v13 = (_QWORD *)*v13;
    }
    else
    {
      if ( Node[2].ParentValue <= v13[9] )
        goto LABEL_15;
      v13 = (_QWORD *)v13[1];
    }
  }
  v14 = *v9;
  v15 = 0;
  if ( !*v9 )
    goto LABEL_29;
  v16 = Node[2].Children[0];
  while ( v16 <= v14[1].Children[1] && v16 < v14[1].Children[0] )
  {
    v17 = v14->Children[0];
    if ( !v14->Children[0] )
    {
      v15 = 0;
      goto LABEL_29;
    }
LABEL_27:
    v14 = v17;
  }
  v17 = v14->Children[1];
  if ( v17 )
    goto LABEL_27;
  v15 = 1;
LABEL_29:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 2), v14, v15, Node + 1);
  v18 = *v12;
  v19 = 0;
  if ( !*v12 )
    goto LABEL_38;
  ParentValue = Node[2].ParentValue;
  while ( 2 )
  {
    if ( (_RTL_BALANCED_NODE *)ParentValue <= v18[3].Children[0] && ParentValue < v18[2].ParentValue )
    {
      v21 = v18->Children[0];
      if ( !v18->Children[0] )
      {
        v19 = 0;
        goto LABEL_38;
      }
      goto LABEL_36;
    }
    v21 = v18->Children[1];
    if ( v21 )
    {
LABEL_36:
      v18 = v21;
      continue;
    }
    break;
  }
  v19 = 1;
LABEL_38:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(SpinLock + 6), v18, v19, Node);
LABEL_39:
  if ( v8 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v8);
  }
  return v10;
}
