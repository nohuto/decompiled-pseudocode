/*
 * XREFs of ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA5C8
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA6F8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3C80 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F42BC (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
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
    || *((_BYTE *)this + 567)
    || (v4 = 1, v9 = CDrawingContext::PushStereoContext(a2, 1LL, 0LL), v10 = v9, v9 >= 0) )
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
          v13 = CDrawingContext::PushStereoContext(a2, 2LL, 0LL);
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
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB22u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB20u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB1Cu);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB16u);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB10u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB09u);
  }
  return v10;
}
