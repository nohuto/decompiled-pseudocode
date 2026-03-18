/*
 * XREFs of ?ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z @ 0x180086004
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CTranslateTransform::ProcessUpdate(
        CTranslateTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_TRANSLATETRANSFORM *a3)
{
  __int64 v3; // xmm2_8

  v3 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 16) = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 15) = v3;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
