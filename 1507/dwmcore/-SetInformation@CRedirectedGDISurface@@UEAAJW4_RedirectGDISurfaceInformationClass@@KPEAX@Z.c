/*
 * XREFs of ?SetInformation@CRedirectedGDISurface@@UEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x180062480
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x18007ED00 (-RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::SetInformation(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  int v8; // r9d
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( a2 == 1 )
  {
    if ( a3 >= 4 )
    {
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(a1 + 16), 0LL, qword_180195FF0, *a4) )
        return v4;
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v10 = 331;
      goto LABEL_21;
    }
    v8 = -2147024872;
    v10 = 325;
    v4 = -2147024872;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, &dword_18016B9C8, 1u, v8, v10);
    return v4;
  }
  if ( a2 != 4 )
  {
    if ( (unsigned int)(a2 - 5) > 1 )
    {
      v4 = -2147024809;
      v10 = 364;
    }
    else
    {
      v4 = -2003292412;
      v10 = 359;
    }
    v8 = v4;
    goto LABEL_24;
  }
  if ( a3 < 0x20 )
  {
    v8 = -2147024872;
    v10 = 342;
    v4 = -2147024872;
    goto LABEL_24;
  }
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(a1 + 16), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 2), a4[2]) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = 348;
LABEL_21:
    if ( LastError >= 0 )
      LastError = -2003304445;
    v8 = LastError;
    v4 = LastError;
    goto LABEL_24;
  }
  return v4;
}
