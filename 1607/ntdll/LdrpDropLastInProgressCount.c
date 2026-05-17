/*
 * XREFs of LdrpDropLastInProgressCount @ 0x18007A61C
 * Callers:
 *     LdrpFindLoadedDll @ 0x180012330 (LdrpFindLoadedDll.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrpLoadDllInternal @ 0x180018D30 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x180018F98 (LdrpFastpthReloadedDll.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     RtlQueryInformationActivationContext @ 0x18003DAF0 (RtlQueryInformationActivationContext.c)
 *     LdrEnumerateLoadedModules @ 0x18007A560 (LdrEnumerateLoadedModules.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrInitShimEngineDynamic @ 0x1800D1D70 (LdrInitShimEngineDynamic.c)
 *     LdrpCompleteProcessCloning @ 0x1800D2B24 (LdrpCompleteProcessCloning.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 */

__int64 LdrpDropLastInProgressCount()
{
  struct _TEB *v0; // rax

  v0 = NtCurrentTeb();
  v0->SameTebFlags &= ~0x1000u;
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  LdrpWorkInProgress = 0;
  RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
  return ZwSetEvent(LdrpLoadCompleteEvent, 0LL);
}
