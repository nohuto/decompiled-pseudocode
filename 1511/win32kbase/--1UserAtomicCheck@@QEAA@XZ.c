/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C0041EB0 (DestroyThreadsObjects.c)
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C006A0AC (-ResetSystemColors@@YAXXZ.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  if ( !*(_BYTE *)this )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack(this);
  }
}
