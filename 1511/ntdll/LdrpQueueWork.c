/*
 * XREFs of LdrpQueueWork @ 0x1800767BC
 * Callers:
 *     LdrpSignalModuleMapped @ 0x18000FAD0 (LdrpSignalModuleMapped.c)
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     TpPostWork @ 0x18002E720 (TpPostWork.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  __int64 **v2; // rcx

  if ( **(int **)(a1 + 32) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (__int64 **)qword_180145198;
    *(_QWORD *)(a1 + 64) = qword_180145198;
    *(_QWORD *)(a1 + 56) = &LdrpWorkQueue;
    if ( *v2 != &LdrpWorkQueue )
      __fastfail(3u);
    *v2 = (__int64 *)(a1 + 56);
    qword_180145198 = a1 + 56;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
