/*
 * XREFs of LdrpQueueWork @ 0x1800390B0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpSignalModuleMapped @ 0x18004136C (LdrpSignalModuleMapped.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     TpPostWork @ 0x1800276B0 (TpPostWork.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  __int64 **v2; // rcx

  if ( **(int **)(a1 + 32) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (__int64 **)qword_180146158;
    *(_QWORD *)(a1 + 64) = qword_180146158;
    *(_QWORD *)(a1 + 56) = &LdrpWorkQueue;
    if ( *v2 != &LdrpWorkQueue )
      __fastfail(3u);
    *v2 = (__int64 *)(a1 + 56);
    qword_180146158 = a1 + 56;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
