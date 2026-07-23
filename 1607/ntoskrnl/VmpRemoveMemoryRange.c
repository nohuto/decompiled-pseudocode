/*
 * XREFs of VmpRemoveMemoryRange @ 0x1402243CC
 * Callers:
 *     VmDeleteMemoryRange @ 0x14069B54C (VmDeleteMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     VmpFlushTbVaRange @ 0x140223EEC (VmpFlushTbVaRange.c)
 *     VmpProcessContextLockExclusive @ 0x140224334 (VmpProcessContextLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(PEX_SPIN_LOCK SpinLock, _QWORD *a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v3; // rbp
  unsigned int v7; // ebx
  _RTL_BALANCED_NODE *v8; // rbx
  _RTL_BALANCED_NODE *v9; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a3 )
  {
    v7 = -1073740007;
    goto LABEL_11;
  }
  VmpFlushTbVaRange(SpinLock, a2[8], a2[9], &v13, &v12, &v11);
  v8 = (_RTL_BALANCED_NODE *)*((_QWORD *)SpinLock + 1);
  if ( !v8 )
  {
LABEL_10:
    v7 = -1073741172;
    goto LABEL_11;
  }
  v9 = (_RTL_BALANCED_NODE *)a2[6];
  while ( 1 )
  {
    if ( v9 > v8[1].Children[1] )
    {
      v8 = v8->Children[1];
      goto LABEL_9;
    }
    if ( v9 >= v8[1].Children[0] )
      break;
    v8 = v8->Children[0];
LABEL_9:
    if ( !v8 )
      goto LABEL_10;
  }
  if ( v8[1].Children[0] == v9
    && v8[1].Children[1] == (_RTL_BALANCED_NODE *)a2[7]
    && v8[1].ParentValue == a2[8]
    && v8[2].Children[0] == (_RTL_BALANCED_NODE *)a2[9] )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 2), v8);
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 6), v8 - 1);
    ++*((_QWORD *)SpinLock + 5);
    if ( !*((_QWORD *)SpinLock + 1) )
      *((_QWORD *)SpinLock + 9) = -1LL;
    v3 = v8 - 1;
    v7 = 0;
  }
  else
  {
    v7 = -1073741637;
  }
LABEL_11:
  if ( v11 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    __writecr8((unsigned __int8)v11);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v7;
}
