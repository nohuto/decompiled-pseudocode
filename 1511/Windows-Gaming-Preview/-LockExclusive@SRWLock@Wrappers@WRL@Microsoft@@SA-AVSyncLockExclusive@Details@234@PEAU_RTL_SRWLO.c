/*
 * XREFs of ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180001D90
 * Callers:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180001BD4 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180001DE0 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800111B8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockExclusive(RTL_SRWLOCK **a1, RTL_SRWLOCK *a2)
{
  AcquireSRWLockExclusive(a2);
  *a1 = a2;
  return a1;
}
