/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@U_CastingAppStateChangedContext@@@@UEAAXXZ @ 0x180003200
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0 (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180003EC0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void *__fastcall CGenericApplicationManagerWorkItem<_CastingAppStateChangedContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *__hidden, struct _CastingAppStateChangedContext *); // rdi
  struct _CastingAppStateChangedContext *v2; // rsi
  void *result; // rax
  unsigned int v5; // edx
  _CastingAppStateChangedContext *v6; // rcx

  v1 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, struct _CastingAppStateChangedContext *))(a1 + 8);
  v2 = *(struct _CastingAppStateChangedContext **)(a1 + 16);
  if ( v1 == CApplicationManager::OnCastingAppStateChanged )
    result = (void *)CApplicationManager::OnCastingAppStateChanged(g_ApplicationManager, v2);
  else
    result = (void *)v1(g_ApplicationManager, v2);
  v6 = *(_CastingAppStateChangedContext **)(a1 + 16);
  if ( v6 )
    return _CastingAppStateChangedContext::`scalar deleting destructor'(v6, v5);
  return result;
}
