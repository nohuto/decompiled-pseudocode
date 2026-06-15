/*
 * XREFs of ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000D2F0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 176, a2);
  return a2;
}
