/*
 * XREFs of NtCreateTimer @ 0x140451ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x14011EBF4 (PsInsertVirtualizedTimer.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 */

NTSTATUS __stdcall NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  PHANDLE v5; // rsi
  unsigned __int8 v6; // bl
  NTSTATUS Object; // ecx
  void *v8; // rdi
  _KPROCESS *Process; // rcx
  char *DeferredContext; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF

  v5 = TimerHandle;
  if ( (unsigned int)TimerType > SynchronizationTimer )
    return -1073741582;
  v6 = KeGetCurrentThread()->gap0[10];
  if ( v6 )
  {
    if ( (unsigned __int64)TimerHandle >= MmUserProbeAddress )
      TimerHandle = (PHANDLE)MmUserProbeAddress;
    *TimerHandle = *TimerHandle;
  }
  Object = ObCreateObjectEx(v6, (_DWORD)ExTimerObjectType, (_DWORD)ObjectAttributes, v6);
  if ( Object >= 0 )
  {
    v8 = DeferredContext;
    KeInitializeDpc((PRKDPC)(DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx((PKTIMER)DeferredContext, TimerType);
    *((_QWORD *)DeferredContext + 8) = 0LL;
    DeferredContext[244] = 0;
    *((_QWORD *)DeferredContext + 31) = 0LL;
    *((_QWORD *)DeferredContext + 32) = 0LL;
    *((_QWORD *)DeferredContext + 34) = 0LL;
    if ( v6 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v8 = DeferredContext;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
        PsInsertVirtualizedTimer((__int64)Process, (_QWORD *)DeferredContext + 35, (_QWORD *)DeferredContext + 34);
    }
    Object = ObInsertObjectEx(v8, 0, 0LL, (__int64)&v12);
    if ( Object >= 0 )
      *v5 = (HANDLE)v12;
  }
  return Object;
}
