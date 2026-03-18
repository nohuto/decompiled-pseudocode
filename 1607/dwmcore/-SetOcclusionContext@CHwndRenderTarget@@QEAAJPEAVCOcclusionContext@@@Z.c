/*
 * XREFs of ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180107A80
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800091AC (-GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetOcclusionContext(CHwndRenderTarget *this, struct COcclusionContext *a2)
{
  int DrawingContext; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // edi
  struct CDrawingContext *v7; // rbx
  COcclusionContext *v8; // rcx
  COcclusionContext **v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  DrawingContext = CRenderTarget::GetDrawingContext(this, (struct CDrawingContext **)&v10);
  v6 = DrawingContext;
  if ( DrawingContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawingContext, 0x2C0u);
  }
  else
  {
    v7 = (struct CDrawingContext *)v10;
    v8 = v10[809];
    if ( v8 )
    {
      COcclusionContext::`scalar deleting destructor'(v8, v4, v5);
      *((_QWORD *)v7 + 809) = 0LL;
    }
    *((_QWORD *)v7 + 808) = a2;
  }
  return v6;
}
