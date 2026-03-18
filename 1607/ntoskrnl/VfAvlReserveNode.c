/*
 * XREFs of VfAvlReserveNode @ 0x1400842D8
 * Callers:
 *     VfTargetDriversAdd @ 0x14008439C (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x14070DA1C (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x14070DBDC (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14006FEB0 (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x14008435C (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *PoolWithTag; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x54416656u);
  if ( !PoolWithTag )
    return 0LL;
  v8 = (char *)(PoolWithTag + 4);
  PoolWithTag[4] = a2;
  if ( !a3 )
    a3 = *a1;
  PoolWithTag[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, PoolWithTag + 4);
  return v8;
}
