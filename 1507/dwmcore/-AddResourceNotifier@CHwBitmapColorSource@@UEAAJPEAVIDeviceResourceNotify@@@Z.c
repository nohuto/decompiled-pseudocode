/*
 * XREFs of ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18001BE10
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x180048F10 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180015EB0 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::AddResourceNotifier(
        CHwBitmapColorSource *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = CD3DResource::AddResourceNotifier((CD3DResource *)(v2 + 24), a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1033u);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x1037u);
  }
  return v4;
}
