/*
 * XREFs of LdrpQueueWork @ 0x18003C7E0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpSignalModuleMapped @ 0x18002F86C (LdrpSignalModuleMapped.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x18003CEE0 (TpPostWork.c)
 */

void __fastcall LdrpQueueWork(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 32) >= 0 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v2 = (_QWORD *)qword_1801522B8;
    v3 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)qword_1801522B8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 64) = qword_1801522B8;
    *v3 = &LdrpWorkQueue;
    *v2 = v3;
    qword_1801522B8 = a1 + 56;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(LdrpMapAndSnapWork);
    }
  }
}
