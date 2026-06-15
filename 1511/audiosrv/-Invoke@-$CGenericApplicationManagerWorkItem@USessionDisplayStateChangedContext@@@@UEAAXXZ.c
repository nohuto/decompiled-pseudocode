/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@USessionDisplayStateChangedContext@@@@UEAAXXZ @ 0x18009C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<SessionDisplayStateChangedContext>::Invoke(__int64 a1)
{
  (*(void (__fastcall **)(CRefCountedObject *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  operator delete(*(void **)(a1 + 16));
}
