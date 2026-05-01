/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18000170C
 * Callers:
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000159C (-Remove@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800095E4 (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180001730 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a2, a1);
  return a2;
}
