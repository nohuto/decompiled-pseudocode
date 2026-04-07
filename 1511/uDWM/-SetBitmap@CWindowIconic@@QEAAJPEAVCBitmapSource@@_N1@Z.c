/*
 * XREFs of ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003B0F8
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18003CC54 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180075D38 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180076780 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003B660 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BCC8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
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
