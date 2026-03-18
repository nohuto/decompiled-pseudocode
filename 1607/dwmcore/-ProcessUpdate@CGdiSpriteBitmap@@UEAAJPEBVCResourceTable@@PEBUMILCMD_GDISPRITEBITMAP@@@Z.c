/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x18002BD00
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18002B014 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP *a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx

  if ( *((_QWORD *)this + 27) || (v3 = *((_QWORD *)a3 + 1)) == 0 )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR(0x14u, &dword_1801B0A48, 3u, -2003303421, 0x7Bu);
  }
  else
  {
    *((_QWORD *)this + 27) = v3;
    v4 = CGdiSpriteBitmap::EnsureRedirSurface(this);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801B0A48, 3u, v4, 0x83u);
  }
  return v5;
}
