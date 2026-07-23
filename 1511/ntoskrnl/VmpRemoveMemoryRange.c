/*
 * XREFs of VmpRemoveMemoryRange @ 0x14020CA3C
 * Callers:
 *     VmDeleteMemoryRange @ 0x14065C250 (VmDeleteMemoryRange.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x14020C900 (VmpProcessContextLockExclusive.c)
 *     VmpProcessInvalidateSlat @ 0x14020C99C (VmpProcessInvalidateSlat.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpRemoveMemoryRange(__int64 SpinLock, _QWORD *a2, __int64 a3)
{
  _RTL_BALANCED_NODE *v6; // rsi
  __int64 v7; // r15
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  _RTL_BALANCED_NODE *v12; // rbx
  __int64 v13; // rdx
  _RTL_BALANCED_NODE *v14; // r8

  v6 = 0LL;
  v7 = VmpProcessContextLockExclusive((volatile LONG *)SpinLock);
  if ( *(_QWORD *)(SpinLock + 64) != a3 )
  {
    v8 = -1073740007;
    goto LABEL_11;
  }
  v9 = *(_QWORD **)(SpinLock + 8);
  if ( !v9 )
  {
LABEL_10:
    v8 = -1073741172;
    goto LABEL_11;
  }
  v10 = a2[6];
  while ( 1 )
  {
    if ( v10 > v9[4] )
    {
      v9 = (_QWORD *)v9[1];
      goto LABEL_9;
    }
    if ( v10 >= v9[3] )
      break;
    v9 = (_QWORD *)*v9;
LABEL_9:
    if ( !v9 )
      goto LABEL_10;
  }
  v12 = (_RTL_BALANCED_NODE *)(v9 - 3);
  v13 = v9[3];
  if ( v13 == v10
    && (v14 = v12[2].Children[1], v14 == (_RTL_BALANCED_NODE *)a2[7])
    && v12[2].ParentValue == a2[8]
    && v12[3].Children[0] == (_RTL_BALANCED_NODE *)a2[9] )
  {
    VmpProcessInvalidateSlat(SpinLock, v13, (_DWORD)v14 - v13 + 1);
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 8), v12 + 1);
    RtlRbRemoveNode((PRTL_RB_TREE)(SpinLock + 24), v12);
    if ( !*(_QWORD *)(SpinLock + 8) )
      *(_QWORD *)(SpinLock + 64) = -1LL;
    v6 = v12;
    v8 = 0;
  }
  else
  {
    v8 = -1073741637;
  }
LABEL_11:
  if ( v7 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
    __writecr8((unsigned __int8)v7);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v8;
}
