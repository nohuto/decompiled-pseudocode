/*
 * XREFs of ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180006208
 * Callers:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180006338 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockShared(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2)
{
  AcquireSRWLockShared(a2);
  *a1 = a2;
  return a1;
}
