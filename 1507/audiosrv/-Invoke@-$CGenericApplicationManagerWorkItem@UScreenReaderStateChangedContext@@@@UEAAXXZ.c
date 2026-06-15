/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@UEAAXXZ @ 0x1800A0E90
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??_G_CastingAppStateChangedContext@@QEAAPEAXI@Z @ 0x1800A0E5C (--_G_CastingAppStateChangedContext@@QEAAPEAXI@Z.c)
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
