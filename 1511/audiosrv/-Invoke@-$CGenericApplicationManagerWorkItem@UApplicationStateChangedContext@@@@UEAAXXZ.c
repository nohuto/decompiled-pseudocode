/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UApplicationStateChangedContext@@@@UEAAXXZ @ 0x180005010
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180003FA0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

int __fastcall CGenericApplicationManagerWorkItem<ApplicationStateChangedContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *, struct ApplicationStateChangedContext *); // rdi
  struct ApplicationStateChangedContext *v2; // rsi
  int result; // eax
  LPVOID *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *(__int64 (__fastcall **)(CApplicationManager *, struct ApplicationStateChangedContext *))(a1 + 8);
  v2 = *(struct ApplicationStateChangedContext **)(a1 + 16);
  if ( v1 == CApplicationManager::OnApplicationStateChanged )
    result = CApplicationManager::OnApplicationStateChanged(g_ApplicationManager, v2);
  else
    result = v1(g_ApplicationManager, v2);
  v5 = *(LPVOID **)(a1 + 16);
  if ( v5 )
  {
    if ( *v5 )
    {
      CoTaskMemFree(*v5);
      *v5 = 0LL;
    }
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v5);
  }
  return result;
}
