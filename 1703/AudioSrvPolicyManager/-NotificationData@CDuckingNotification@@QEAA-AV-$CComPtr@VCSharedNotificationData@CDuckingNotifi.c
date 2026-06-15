/*
 * XREFs of ?NotificationData@CDuckingNotification@@QEAA?AV?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@XZ @ 0x18000A118
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800073E0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CDuckingNotification::NotificationData(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
