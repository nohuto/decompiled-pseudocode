/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18001D3B4
 * Callers:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18001D3E4 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@UCriticalSectionTraits@HandleTr.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  EnterCriticalSection(a2);
  *a1 = a2;
  return a1;
}
