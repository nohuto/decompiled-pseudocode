/*
 * XREFs of ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003A784
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C005C414 (-ResetSystemColors@@YAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C003A884 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 */

void __fastcall UserAtomicCheck::~UserAtomicCheck(UserAtomicCheck *this)
{
  if ( !*(_BYTE *)this )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack(this);
  }
}
