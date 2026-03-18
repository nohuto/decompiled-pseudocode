/*
 * XREFs of HMUnlockObject @ 0x1C007B2FC
 * Callers:
 *     HMFreeObject @ 0x1C0038B10 (HMFreeObject.c)
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 *     HMRemoveHandleForObject @ 0x1C007B1F0 (HMRemoveHandleForObject.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00B4200 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C007B320 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 8))-- == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
