/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAXXZ @ 0x18001CAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>::Invoke(__int64 a1)
{
  (*(void (__fastcall **)(CApplicationManager *, _QWORD))(a1 + 8))(g_ApplicationManager, *(_QWORD *)(a1 + 16));
  operator delete(*(void **)(a1 + 16), 4uLL);
}
