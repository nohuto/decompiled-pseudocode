/*
 * XREFs of ??$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUApplicationStateChangedContext@@@Z0@Z @ 0x180001EC4
 * Callers:
 *     PbmReportApplicationState @ 0x180001E2C (PbmReportApplicationState.c)
 * Callees:
 *     ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002BFC0 (-QueueWorkItem@CSyncWorkItem@@UEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall QueueApplicationManagerWorkItem<ApplicationStateChangedContext>(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // esi

  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v5[2] = a2;
    v5[1] = CApplicationManager::OnApplicationStateChanged;
    v6 = CSyncWorkItem::QueueWorkItem((ULONG_PTR)v5);
    if ( v6 >= 0 )
      v5 = 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  return (unsigned int)v6;
}
