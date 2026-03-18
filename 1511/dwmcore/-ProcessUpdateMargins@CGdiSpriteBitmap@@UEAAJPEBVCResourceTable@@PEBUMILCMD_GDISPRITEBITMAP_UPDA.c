/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x180086330
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x18005DCD8 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180087D44 (-RecreateBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
{
  unsigned int v3; // ebx
  _OWORD *v4; // rdx
  _OWORD *v5; // rcx
  CGdiSpriteBitmap *v6; // r9
  int v8; // eax

  v3 = 0;
  if ( *((int *)a3 + 2) < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1DFu);
  }
  else if ( operator!=((_DWORD *)this + 32, (_DWORD *)a3 + 2) )
  {
    *v5 = *v4;
    if ( !*((_QWORD *)v6 + 21) )
    {
      v8 = CGdiSpriteBitmap::RecreateBitmap(v6);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1ECu);
    }
  }
  return v3;
}
