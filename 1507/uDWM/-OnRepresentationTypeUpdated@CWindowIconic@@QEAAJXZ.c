/*
 * XREFs of ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007AA98
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A920 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18006DC88 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18006E5C0 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18006F138 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180030E60 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A204 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 */

__int64 __fastcall CWindowIconic::OnRepresentationTypeUpdated(CWindowIconic *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+48h] [rbp+10h] BYREF

  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    this,
    (enum IconicRepresentationType *)&v5);
  v2 = CWindowIconic::SetRepresentationType((__int64)this, v5, 1);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x2A8u);
  return v3;
}
