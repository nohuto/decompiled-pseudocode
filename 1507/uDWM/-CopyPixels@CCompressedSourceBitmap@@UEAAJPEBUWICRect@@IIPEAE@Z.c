/*
 * XREFs of ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18009D950
 * Callers:
 *     ?CopyPixels@CCompressedSourceBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x18004A6B0 (-CopyPixels@CCompressedSourceBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18003E2F0 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::CopyPixels(
        CCompressedSourceBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax

  v9 = CCompressedSourceBitmap::EnsureUncompressedBitmap((CCompressedSourceBitmap *)((char *)this - 16));
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 33) + 72LL))(
            *((_QWORD *)this + 33),
            a2,
            a3,
            a4,
            a5);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xACu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xA7u);
  }
  return v10;
}
