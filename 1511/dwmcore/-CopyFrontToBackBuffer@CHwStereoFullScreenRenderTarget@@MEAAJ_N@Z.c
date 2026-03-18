/*
 * XREFs of ?CopyFrontToBackBuffer@CHwStereoFullScreenRenderTarget@@MEAAJ_N@Z @ 0x18014EA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z @ 0x18014F130 (-SetStereoContext@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18014F3D8 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CopyFrontToBackBuffer(
        CHwStereoFullScreenRenderTarget *this,
        char a2)
{
  unsigned int v2; // r14d
  char *v3; // rsi
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax

  v2 = *((_DWORD *)this + 94);
  v3 = (char *)this + 368;
  v6 = CHwStereoFullScreenRenderTarget::SetStereoContext((char *)this + 368, 1LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    LOBYTE(v7) = *((_BYTE *)this + 401) != 0 ? a2 : 0;
    v9 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(this, 1LL, v7);
    v8 = v9;
    if ( v9 >= 0 )
    {
      if ( !*((_BYTE *)this + 401) )
      {
        v10 = CHwStereoFullScreenRenderTarget::SetStereoContext(v3, 2LL);
        v8 = v10;
        if ( v10 >= 0 )
        {
          LOBYTE(v11) = a2;
          v12 = CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(this, 2LL, v11);
          v8 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1CAu);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1C7u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1C3u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1C0u);
  }
  CHwStereoFullScreenRenderTarget::SetStereoContext(v3, v2);
  return v8;
}
