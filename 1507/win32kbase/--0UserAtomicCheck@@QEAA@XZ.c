/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004FFE0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C000AEBC (-ResetSystemColors@@YAXXZ.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C004FEC0 (DestroyThreadsObjects.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0050000 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  *(_BYTE *)this = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack(this);
  return this;
}
