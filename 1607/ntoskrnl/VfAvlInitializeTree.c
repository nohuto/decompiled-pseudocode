/*
 * XREFs of VfAvlInitializeTree @ 0x140223C68
 * Callers:
 *     VfInitVerifierComponents @ 0x140703300 (VfInitVerifierComponents.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x1406FE23C (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(void *a1, __int64 a2, __int64 a3, RTL_AVL_FREE_ROUTINE *FreeRoutine)
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
