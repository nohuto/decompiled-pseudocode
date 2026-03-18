/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18007BFF0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800B8CE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F3A4C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3BB4 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderComposeTop(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        bool a4)
{
  char v4; // bp
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax

  v4 = 0;
  if ( !*((_QWORD *)this + 12)
    || *((_BYTE *)this + 560)
    || (v4 = 1, v9 = CDrawingContext::PushStereoContext(a2, 1LL), v10 = v9, v9 >= 0) )
  {
    v11 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( v4 )
      {
        v12 = CDrawingContext::PopStereoContext(a2, 0LL);
        v10 = v12;
        if ( v12 >= 0 )
        {
          v13 = CDrawingContext::PushStereoContext(a2, 2LL);
          v10 = v13;
          if ( v13 >= 0 )
          {
            v14 = CHwndRenderTarget::RenderComposeTopWorker(this, a2, a3, a4);
            v10 = v14;
            if ( v14 >= 0 )
            {
              v15 = CDrawingContext::PopStereoContext(a2, 0LL);
              v10 = v15;
              if ( v15 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xACCu);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xACAu);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xAC6u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xAC0u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xABAu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xAB3u);
  }
  return v10;
}
