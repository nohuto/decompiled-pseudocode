/*
 * XREFs of ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180093CD0
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyOnChangeCompleted(CCompositionSurfaceBitmap *this)
{
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 136) = 0;
}
