/*
 * XREFs of VfAvlReserveNode @ 0x140154068
 * Callers:
 *     VfTargetDriversAdd @ 0x140153EF4 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1407431E0 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407433B8 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
