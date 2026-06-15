/*
 * XREFs of ?AcquireShutdownLock@CAudioResourceManager@@IEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180091E8C
 * Callers:
 *     ?ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800922C0 (-ReevaluateNonDefaultStatusForSaDevice@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAX.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180028540 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 */

__int64 __fastcall CAudioResourceManager::AcquireShutdownLock(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 40, a2);
  return a2;
}
