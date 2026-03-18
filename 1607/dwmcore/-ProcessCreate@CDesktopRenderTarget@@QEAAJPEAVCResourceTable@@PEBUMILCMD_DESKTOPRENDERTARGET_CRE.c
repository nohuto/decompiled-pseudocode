/*
 * XREFs of ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x180077F78
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddDesktopRenderTarget@CComposition@@QEAAJPEAVCDesktopRenderTarget@@@Z @ 0x180043750 (-AddDesktopRenderTarget@CComposition@@QEAAJPEAVCDesktopRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessCreate(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_CREATE *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (*((_BYTE *)a3 + 32) & 0x10) != 0 )
  {
    CComposition::AddDesktopRenderTarget(*((CComposition **)this + 2), this);
    *((_DWORD *)this + 98) = *((_DWORD *)a3 + 8);
    *((_BYTE *)this + 424) = *((_DWORD *)a3 + 9) != 0;
    *(_OWORD *)((char *)this + 396) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 102) = 1065353216;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x43Cu);
  }
  return v3;
}
