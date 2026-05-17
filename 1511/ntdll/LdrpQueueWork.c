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

struct _PEB *__fastcall LdrpQueueWork(_QWORD *a1)
{
  struct _PEB *result; // rax
  __int64 **v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  result = (struct _PEB *)a1[4];
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v3 = (__int64 **)qword_180145198;
    a1[8] = qword_180145198;
    a1[7] = &LdrpWorkQueue;
    if ( *v3 != &LdrpWorkQueue )
      __fastfail(3u);
    *v3 = a1 + 7;
    qword_180145198 = (__int64)(a1 + 7);
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( LdrpMapAndSnapWork )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork((_PEB_LDR_DATA *)LdrpMapAndSnapWork, v4, v5, v6);
    }
  }
  return result;
}
