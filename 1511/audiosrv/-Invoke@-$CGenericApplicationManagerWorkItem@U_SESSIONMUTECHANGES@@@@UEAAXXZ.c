/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@U_SESSIONMUTECHANGES@@@@UEAAXXZ @ 0x18003F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x18003F2B0 (-ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<_SESSIONMUTECHANGES>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *__hidden, struct _SESSIONMUTECHANGES *); // rdi
  struct _SESSIONMUTECHANGES *v2; // rsi

  v1 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, struct _SESSIONMUTECHANGES *))(a1 + 8);
  v2 = *(struct _SESSIONMUTECHANGES **)(a1 + 16);
  if ( v1 == CApplicationManager::ApplySessionMuteChanges )
    CApplicationManager::ApplySessionMuteChanges(g_ApplicationManager, v2);
  else
    v1(g_ApplicationManager, v2);
  operator delete(*(void **)(a1 + 16));
}
