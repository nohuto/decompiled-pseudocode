/*
 * XREFs of ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003A0A8
 * Callers:
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180030D04 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003A7BC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18006DC88 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18006E5C0 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A270 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003A6A4 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AD0C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::SetBitmap(CWindowIconic *this, struct CBitmapSource *a2, unsigned __int8 a3, char a4)
{
  unsigned int v5; // ebx
  CBaseObject *v6; // rcx
  bool v10; // zf
  bool v11; // si
  int CentralImage; // eax
  int v14; // eax
  int updated; // eax
  int v16; // eax

  v5 = 0;
  v6 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v10 = *((_BYTE *)this + 21) == a3;
  *((_BYTE *)this + 21) = a3;
  v11 = !v10;
  if ( a4 && *((_DWORD *)this + 4) == 2 )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v5 = CentralImage;
    if ( CentralImage >= 0 )
    {
      if ( v11 && (v14 = CWindowIconic::OnWindowStyleUpdated(this, 0), v5 = v14, v14 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x24Eu);
      }
      else
      {
        updated = CWindowIconic::UpdateSizeOrMargins(this, 1);
        v5 = updated;
        if ( updated >= 0 )
        {
          v16 = CVisual::RenderRecursive(*((CVisual **)this + 13));
          v5 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x254u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x253u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, CentralImage, 0x24Au);
    }
  }
  return v5;
}
