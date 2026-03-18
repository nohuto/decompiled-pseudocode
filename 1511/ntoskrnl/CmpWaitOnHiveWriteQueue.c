/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x1405E3728
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140521A0C (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x1405DB93C (NtCompressKey.c)
 *     CmpRefreshHive @ 0x1405EAB18 (CmpRefreshHive.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpBoostActiveHiveWriter @ 0x1404C5F60 (CmpBoostActiveHiveWriter.c)
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
