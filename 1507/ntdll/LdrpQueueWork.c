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

struct _PEB *__fastcall LdrpQueueWork(_QWORD *a1)
{
  struct _PEB *result; // rax
  __int64 **v3; // rcx

  result = (struct _PEB *)a1[4];
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (__int64 **)qword_180146158;
    a1[8] = qword_180146158;
    a1[7] = &LdrpWorkQueue;
    if ( *v3 != &LdrpWorkQueue )
      __fastfail(3u);
    *v3 = a1 + 7;
    qword_180146158 = (__int64)(a1 + 7);
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
