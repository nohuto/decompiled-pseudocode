/*
 * XREFs of NtCreateTimer @ 0x14047056C
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x14007E5B4 (PsInsertVirtualizedTimer.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 */

NTSTATUS __stdcall NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  TIMER_TYPE v4; // r14d
  PHANDLE v6; // rsi
  char PreviousMode; // di
  NTSTATUS Object; // ecx
  struct _KTIMER *v9; // rbx
  struct _LIST_ENTRY **p_Blink; // r8
  _KPROCESS *Process; // rcx
  PVOID DeferredContext; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF

  v4 = TimerType;
  v6 = TimerHandle;
  if ( (unsigned int)TimerType > SynchronizationTimer )
    return -1073741582;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)TimerHandle >= 0x7FFFFFFF0000LL )
      TimerHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *TimerHandle = *TimerHandle;
  }
  LOBYTE(TimerType) = PreviousMode;
  LOBYTE(TimerHandle) = PreviousMode;
  Object = ObCreateObject(
             (_DWORD)TimerHandle,
             (_DWORD)ExTimerObjectType,
             (_DWORD)ObjectAttributes,
             TimerType,
             0,
             312,
             0,
             0,
             (__int64)&DeferredContext);
  if ( Object >= 0 )
  {
    v9 = (struct _KTIMER *)DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx(v9, v4);
    *(_QWORD *)&v9[1].Header.Lock = 0LL;
    BYTE4(v9[3].Dpc) = 0;
    *(_QWORD *)&v9[3].Processor = 0LL;
    *(_QWORD *)&v9[4].Header.Lock = 0LL;
    p_Blink = &v9[4].Header.WaitListHead.Blink;
    v9[4].Header.WaitListHead.Blink = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = (struct _KTIMER *)DeferredContext;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
        PsInsertVirtualizedTimer((__int64)Process, (_QWORD *)DeferredContext + 35, p_Blink);
    }
    Object = ObInsertObjectEx(v9, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v14);
    if ( Object >= 0 )
      *v6 = (HANDLE)v14;
  }
  return Object;
}
