/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@UEAAXXZ @ 0x18002EEB0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001DD60 (-HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

int __fastcall CGenericApplicationManagerWorkItem<DuckingGainValueChangedContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *, struct DuckingGainValueChangedContext *); // rdi
  struct DuckingGainValueChangedContext *v2; // rsi
  int result; // eax
  LPVOID *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = *(__int64 (__fastcall **)(CApplicationManager *, struct DuckingGainValueChangedContext *))(a1 + 8);
  v2 = *(struct DuckingGainValueChangedContext **)(a1 + 16);
  if ( v1 == CApplicationManager::HandleDuckingIdGainChanged )
    result = CApplicationManager::HandleDuckingIdGainChanged(g_ApplicationManager, v2);
  else
    result = v1(g_ApplicationManager, v2);
  v5 = *(LPVOID **)(a1 + 16);
  if ( v5 )
  {
    CoTaskMemFree(*v5);
    *v5 = 0LL;
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v5);
  }
  return result;
}
