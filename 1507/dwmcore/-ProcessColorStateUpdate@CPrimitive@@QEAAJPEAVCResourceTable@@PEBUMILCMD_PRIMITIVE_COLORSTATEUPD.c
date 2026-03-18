/*
 * XREFs of ?ProcessColorStateUpdate@CPrimitive@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVE_COLORSTATEUPDATE@@@Z @ 0x180117640
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseResources@CPrimitive@@AEAAXXZ @ 0x1801178C8 (-ReleaseResources@CPrimitive@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitive::ProcessColorStateUpdate(
        CPrimitive *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVE_COLORSTATEUPDATE *a3)
{
  if ( *((float *)this + 38) != *((float *)a3 + 2)
    || *((float *)this + 39) != *((float *)a3 + 3)
    || *((float *)this + 40) != *((float *)a3 + 4)
    || *((float *)this + 41) != *((float *)a3 + 5)
    || *((_DWORD *)this + 12) != 1 )
  {
    CPrimitive::ReleaseResources(this);
    *((_DWORD *)this + 12) = 1;
    *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a3 + 8);
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  return 0LL;
}
