/*
 * XREFs of VfAvlReserveNode @ 0x1400025E4
 * Callers:
 *     VfTargetDriversAdd @ 0x140002384 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1406C19B4 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1406C1B60 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *result; // rax

  v3 = *((_DWORD *)a1 + 7);
  if ( v3 == 1 )
    result = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    result = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x54416656u);
  if ( result )
  {
    result += 4;
    *result = a2;
    if ( !a3 )
      a3 = *a1;
    result[1] = a3;
  }
  return result;
}
