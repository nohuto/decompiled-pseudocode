/*
 * XREFs of HMUnlockObject @ 0x1C0077C6C
 * Callers:
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 *     HMFreeObject @ 0x1C0041860 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0077B60 (HMRemoveHandleForObject.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AB000 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0077C90 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 8))-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
