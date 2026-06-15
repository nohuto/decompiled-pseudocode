/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAXXZ @ 0x18002EFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001E6C0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

int __fastcall CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *, struct HostedAppStateChangedContext *); // rdi
  struct HostedAppStateChangedContext *v2; // rsi
  int result; // eax
  LPVOID *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *(__int64 (__fastcall **)(CApplicationManager *, struct HostedAppStateChangedContext *))(a1 + 8);
  v2 = *(struct HostedAppStateChangedContext **)(a1 + 16);
  if ( v1 == CApplicationManager::OnHostedAppStateChanged )
    result = CApplicationManager::OnHostedAppStateChanged(g_ApplicationManager, v2);
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
