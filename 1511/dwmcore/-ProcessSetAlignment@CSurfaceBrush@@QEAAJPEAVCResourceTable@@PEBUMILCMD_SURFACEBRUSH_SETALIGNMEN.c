/*
 * XREFs of ?ProcessSetAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETALIGNMENT@@@Z @ 0x1800F5960
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ProcessSetAlignment(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_SURFACEBRUSH_SETALIGNMENT *a3)
{
  int v4; // eax

  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 4);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 24) = v4;
  CResource::NotifyOnChanged(this, 5u, 0LL);
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
