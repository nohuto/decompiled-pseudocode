/*
 * XREFs of ??_E?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAPEAXI@Z @ 0x18002F030
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vector deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  CRefCountedObject *v4; // rsi
  HANDLE ProcessHeap; // rax

  *lpMem = &CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::`vftable';
  v4 = g_ApplicationManager;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)g_ApplicationManager + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(CRefCountedObject *))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(CRefCountedObject *, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
  }
  *lpMem = &WORKER_THREAD_EVENT::`vftable';
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return lpMem;
}
