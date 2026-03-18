/*
 * XREFs of ?ReleaseResources@CPrimitive@@AEAAXXZ @ 0x1801178C8
 * Callers:
 *     ??1CPrimitive@@UEAA@XZ @ 0x1800F8BCC (--1CPrimitive@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@CPrimitive@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801175C0 (-NotifyInvalidResource@CPrimitive@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessColorStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_COLORSTATEUPDATE@@@Z @ 0x180117640 (-ProcessColorStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_COLORSTATEUPD.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CPrimitive::ReleaseResources(CPrimitive *this)
{
  *((_QWORD *)this + 8) = 0LL;
  CResource::NotifyOnChanged(this, 5u, 0LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 21));
  *((_QWORD *)this + 21) = 0LL;
}
