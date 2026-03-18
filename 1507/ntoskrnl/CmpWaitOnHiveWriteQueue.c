/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x14065A514
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140598A84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpBoostActiveHiveWriter @ 0x1404AF82C (CmpBoostActiveHiveWriter.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  REGHANDLE v7; // rbx
  REGHANDLE v8; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-20h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  if ( (a3 & 0x10) == 0 )
    CmpBoostActiveHiveWriter(v6, a2);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
  CmpUnlockRegistry();
  v7 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v7, &EventDescriptor, 0LL, 0, 0LL);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v8 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v8, &EventDescriptor, 0LL, 0, 0LL);
  return v11;
}
