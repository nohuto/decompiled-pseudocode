/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180017710
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 25) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 29) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 30) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 9);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 12);
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 13);
  *((_BYTE *)this + 80) = *((_DWORD *)a3 + 14) != 0;
  CResource::NotifyOnChanged((char *)this + 8, 0LL, 0LL);
  return 0LL;
}
