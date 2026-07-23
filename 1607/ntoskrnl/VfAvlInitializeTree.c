/*
 * XREFs of VfAvlInitializeTree @ 0x140223A94
 * Callers:
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x1406FE23C (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(
        void *a1,
        __int64 a2,
        __int64 a3,
        void (__cdecl *FreeRoutine)(_RTL_AVL_TABLE *, PVOID))
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
