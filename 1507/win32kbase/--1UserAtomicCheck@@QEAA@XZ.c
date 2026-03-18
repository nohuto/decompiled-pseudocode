/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004FFC4
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C000AEBC (-ResetSystemColors@@YAXXZ.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C004FEC0 (DestroyThreadsObjects.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00500C4 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  if ( !*(_BYTE *)this )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack(this);
  }
}
