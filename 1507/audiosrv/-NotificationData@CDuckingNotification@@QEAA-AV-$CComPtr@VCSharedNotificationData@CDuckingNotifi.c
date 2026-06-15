/*
 * XREFs of ?NotificationData@CDuckingNotification@@QEAA?AV?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@XZ @ 0x1800A521C
 * Callers:
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A4D30 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ??0?$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z @ 0x180067068 (--0-$CComPtr@VCSharedNotificationData@CDuckingNotification@@@ATL@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall CDuckingNotification::NotificationData(__int64 a1, __int64 *a2)
{
  ATL::CComPtr<CDuckingNotification::CSharedNotificationData>::CComPtr<CDuckingNotification::CSharedNotificationData>(
    a2,
    (__int64 *)(a1 + 24));
  return a2;
}
