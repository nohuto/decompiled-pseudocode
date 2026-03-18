/*
 * XREFs of ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801411D8
 * Callers:
 *     ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801412F0 (-CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x180140D00 (--$ApplyRangeColorKey@TGpCC@@@@YAXPEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x180140DB0 (--$ApplyRangeColorKey@TGpCCR@@@@YAXPEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x180140E40 (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXPEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXPEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x180140FB0 (--$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXPEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBuffer(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        __int64 a3,
        int a4,
        unsigned __int8 *a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  int *v8; // rdx
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  switch ( v5 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>((__int64)a2, a3, a3, (__int64)a5, (float *)this + 21, (float *)this + 29);
      break;
    case 10:
      ApplyRangeColorKey<GpCCRf16>(
        (__int64)a2,
        (unsigned int)a3,
        a3,
        (__int64)a5,
        (__int64)this + 76,
        (__int64)this + 108);
      break;
    case 28:
      ApplyRangeColorKey<GpCCR>(
        (__int64)a2,
        a3,
        a3,
        (__int64)a5,
        (unsigned __int8 *)this + 72,
        (unsigned __int8 *)this + 104);
      break;
    default:
      if ( (unsigned int)(v5 - 87) > 1 )
      {
        v6 = -2003292288;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x31Cu);
      }
      else
      {
        v8 = &v10;
        if ( *((_BYTE *)this + 64) )
          v8 = 0LL;
        v10 = -16777216;
        ApplyRangeColorKey<GpCC>(
          (__int64)a2,
          a3,
          a3,
          (__int64)a5,
          (unsigned __int8 *)this + 68,
          (unsigned __int8 *)this + 100,
          (__int64)v8);
      }
      break;
  }
  return v6;
}
