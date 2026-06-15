/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x18009E010
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800032C0 (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_CastingAppStateChangedContext *__fastcall CGenericApplicationManagerWorkItem<ScreenReaderStateChangedContext>::Invoke(
        __int64 a1)
{
  _CastingAppStateChangedContext *result; // rax
  CUnknown **v3; // rcx

  result = (_CastingAppStateChangedContext *)(*(__int64 (__fastcall **)(CRefCountedObject *, _QWORD))(a1 + 8))(
                                               g_ApplicationManager,
                                               *(_QWORD *)(a1 + 16));
  v3 = *(CUnknown ***)(a1 + 16);
  if ( v3 )
    return _CastingAppStateChangedContext::`scalar deleting destructor'(v3);
  return result;
}
