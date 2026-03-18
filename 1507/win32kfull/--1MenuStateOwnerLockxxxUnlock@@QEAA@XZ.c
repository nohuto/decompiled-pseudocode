/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C010B274
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C010B390 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

void __fastcall MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(struct tagMENUSTATE **this)
{
  struct tagMENUSTATE *v1; // rcx

  v1 = *this;
  if ( v1 )
    xxxUnlockMenuStateInternal(v1, 0);
}
