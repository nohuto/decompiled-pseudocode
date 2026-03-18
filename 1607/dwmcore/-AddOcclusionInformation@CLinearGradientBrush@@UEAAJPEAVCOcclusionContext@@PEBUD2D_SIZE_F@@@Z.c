/*
 * XREFs of ?AddOcclusionInformation@CLinearGradientBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18013EF70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005CA10 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::AddOcclusionInformation(
        CLinearGradientBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v6; // ebx
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  int v9; // eax
  float v11[4]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CLinearGradientBrush *))(*(_QWORD *)this + 176LL))(this) )
  {
    if ( *((_BYTE *)this + 193) )
    {
      if ( a3 )
      {
        width = a3->width;
        height = a3->height;
        v11[0] = 0.0;
        v11[1] = 0.0;
        v11[2] = width;
        v11[3] = height;
        v9 = COcclusionContext::DrawOcclusionRectangle((__int64)a2 + 8, v11, 0);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x9Cu);
      }
    }
  }
  return v6;
}
