/*
 * XREFs of ?NotifyOnChangeCompleted@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x18002E630
 * Callers:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyOnChangeCompleted(CCompositionSurfaceBitmap *this)
{
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
}
