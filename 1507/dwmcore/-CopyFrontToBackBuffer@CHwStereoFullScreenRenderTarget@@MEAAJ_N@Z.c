/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@MEAAJ_N@Z @ 0x18013F870
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x1800436A0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x18013FF20 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyFrontToBackBuffer(
        CHwStereoFullScreenRenderTarget *this,
        char a2)
{
  unsigned int v2; // r14d
  char *v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v2 = *((_DWORD *)this + 94);
  v3 = (char *)this + 368;
  v6 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 368, 1LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = CHwFullScreenRenderTarget::CopyFrontToBackBuffer(this, a2 & (unsigned __int8)-(*((_BYTE *)this + 401) != 0));
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( !*((_BYTE *)this + 401) )
      {
        v9 = CHwStereoFullScreenRenderTarget::SetStereoContext(v3, 2LL);
        v7 = v9;
        if ( v9 >= 0 )
        {
          v10 = CHwFullScreenRenderTarget::CopyFrontToBackBuffer(this, a2);
          v7 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1C7u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1C6u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1C2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1C0u);
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v3, v2);
  return v7;
}
