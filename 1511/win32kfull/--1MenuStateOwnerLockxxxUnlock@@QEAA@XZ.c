/*
 * XREFs of ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C013776C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0137890 (xxxMNEndMenuStateInternal.c)
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
