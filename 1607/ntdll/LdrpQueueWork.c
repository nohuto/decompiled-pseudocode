/*
 * XREFs of LdrpQueueWork @ 0x18003C7F0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180016434 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpSignalModuleMapped @ 0x18002F87C (LdrpSignalModuleMapped.c)
 *     LdrpLoadContextReplaceModule @ 0x180073728 (LdrpLoadContextReplaceModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     TpPostWork @ 0x18003CEF0 (TpPostWork.c)
 */

struct _PEB *__fastcall LdrpQueueWork(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  result = *(struct _PEB **)(a1 + 32);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (_QWORD *)qword_1801522B8;
    v4 = (_QWORD *)(a1 + 56);
    if ( *(__int64 **)qword_1801522B8 != &LdrpWorkQueue )
      __fastfail(3u);
    *(_QWORD *)(a1 + 64) = qword_1801522B8;
    *v4 = &LdrpWorkQueue;
    *v3 = v4;
    qword_1801522B8 = a1 + 56;
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork(LdrpMapAndSnapWork);
    }
  }
  return result;
}
