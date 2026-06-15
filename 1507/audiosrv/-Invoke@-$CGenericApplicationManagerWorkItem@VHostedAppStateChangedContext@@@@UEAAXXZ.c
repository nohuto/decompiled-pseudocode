/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@VHostedAppStateChangedContext@@@@UEAAXXZ @ 0x18002D020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001BCD0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<HostedAppStateChangedContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *, struct HostedAppStateChangedContext *); // rdi
  struct HostedAppStateChangedContext *v2; // rsi
  LPVOID *v4; // rbx

  v1 = *(__int64 (__fastcall **)(CApplicationManager *, struct HostedAppStateChangedContext *))(a1 + 8);
  v2 = *(struct HostedAppStateChangedContext **)(a1 + 16);
  if ( v1 == CApplicationManager::OnHostedAppStateChanged )
    CApplicationManager::OnHostedAppStateChanged(g_ApplicationManager, v2);
  else
    v1(g_ApplicationManager, v2);
  v4 = *(LPVOID **)(a1 + 16);
  if ( v4 )
  {
    if ( *v4 )
    {
      CoTaskMemFree(*v4);
      *v4 = 0LL;
    }
    operator delete(v4);
  }
}
