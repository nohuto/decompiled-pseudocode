/*
 * XREFs of ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180139270
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005CA10 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CColorBrush::AddOcclusionInformation(
        CColorBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  FLOAT width; // xmm1_4
  FLOAT height; // xmm2_4
  int v5; // eax
  float v7[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    if ( *((float *)this + 33) >= 1.0 )
    {
      width = a3->width;
      height = a3->height;
      v7[0] = 0.0;
      v7[1] = 0.0;
      v7[2] = width;
      v7[3] = height;
      v5 = COcclusionContext::DrawOcclusionRectangle((__int64)a2 + 8, v7, 0);
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x64u);
    }
  }
  return 0LL;
}
