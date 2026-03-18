/*
 * XREFs of ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x180062138
 * Callers:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18006200C (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xx @ 0x1800E218C (Template_xx.c)
 */

__int64 __fastcall CRedirectedGDISurface::Initialize(
        CRedirectedGDISurface *this,
        HLSURF a2,
        struct CGdiSpriteBitmap *a3)
{
  char *v3; // r14
  __int64 v5; // rcx
  int v6; // ebx
  _QWORD *inserted; // rax
  __int64 v9; // rcx
  signed int LastError; // eax
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int NewElement; // [rsp+70h] [rbp+20h] BYREF

  *((_QWORD *)this + 4) = a2;
  v3 = (char *)this + 16;
  *((_QWORD *)this + 5) = a3;
  Buffer[0] = a2;
  v5 = *((_QWORD *)this + 3);
  v6 = 0;
  Buffer[2] = a3;
  LOBYTE(NewElement) = 0;
  Buffer[1] = v3;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 8), Buffer, 0x18u, (PBOOLEAN)&NewElement);
  if ( inserted )
  {
    if ( !(_BYTE)NewElement )
    {
      inserted[2] = a3;
      inserted[1] = v3;
    }
    NewElement = 0;
    *((_BYTE *)this + 48) = 1;
    SetLastError(0);
    if ( (unsigned int)DwmHLSurfOpenCompositorRef(*((_QWORD *)this + 4)) )
    {
      *((_BYTE *)this + 49) = 1;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xx(
          v9,
          &EVTDESC_PROCESS_GDISPRITE_LOGICALSURFACE_ASSOCIATION,
          *((_QWORD *)this + 5),
          *((_QWORD *)this + 4));
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v6 = LastError;
      NewElement = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x4Cu);
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x28u);
    NewElement = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x48u);
  }
  TranslateDXGIorD3DErrorInContext(v6, 17, &NewElement);
  return NewElement;
}
