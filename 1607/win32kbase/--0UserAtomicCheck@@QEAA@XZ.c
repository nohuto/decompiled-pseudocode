/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003A7A0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005C414 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C003A7C0 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  *(_BYTE *)this = 0;
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  UserAtomicCheck::RegisterStack(this);
  return this;
}
