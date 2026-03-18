/*
 * XREFs of ?ProcessUpdate@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM@@@Z @ 0x1800F6970
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CManipulationTransform::ProcessUpdate(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATIONTRANSFORM *a3)
{
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
