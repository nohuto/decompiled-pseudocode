/*
 * XREFs of ?ReleaseResources@CSurfaceBrush@@AEAAXXZ @ 0x18012239C
 * Callers:
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x1801212B0 (--1CSurfaceBrush@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@CSurfaceBrush@@UEAAXPEBVIDeviceResource@@@Z @ 0x180122340 (-NotifyInvalidResource@CSurfaceBrush@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSurfaceBrush::ReleaseResources(CSurfaceBrush *this)
{
  *((_QWORD *)this + 5) = 0LL;
  CResource::NotifyOnChanged(this, 5u, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 8));
  *((_QWORD *)this + 8) = 0LL;
}
