/*
 * XREFs of HMUnlockObject @ 0x1C007F16C
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C004F7B0 (HMDestroyUnlockedObject.c)
 *     HMFreeObject @ 0x1C004F9B0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C007F060 (HMRemoveHandleForObject.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00A6820 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0015A90 (HMUnlockObjectInternal.c)
 */

_DWORD *__fastcall HMUnlockObject(_DWORD *a1)
{
  if ( a1[2]-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
