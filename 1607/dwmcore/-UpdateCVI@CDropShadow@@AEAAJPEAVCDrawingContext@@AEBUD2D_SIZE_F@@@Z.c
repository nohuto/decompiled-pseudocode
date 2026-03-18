/*
 * XREFs of ?UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014FE1C
 * Callers:
 *     ?Draw@CDropShadowContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801600F0 (-Draw@CDropShadowContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180123580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ??_GCBlurLayer@@UEAAPEAXI@Z @ 0x18014EE20 (--_GCBlurLayer@@UEAAPEAXI@Z.c)
 *     ?DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z @ 0x18014F460 (-DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z.c)
 *     ?Create@CBlurLayer@@SAJPEAVCDrawingContext@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z @ 0x18018C7E8 (-Create@CBlurLayer@@SAJPEAVCDrawingContext@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAPEAV1@@Z.c)
 *     ?FillBlurEffect@CBlurLayer@@QEAAJPEAVCDrawingContext@@M@Z @ 0x18018C9E4 (-FillBlurEffect@CBlurLayer@@QEAAJPEAVCDrawingContext@@M@Z.c)
 */

__int64 __fastcall CDropShadow::UpdateCVI(CDropShadow *this, struct CDrawingContext *a2, const struct D2D_SIZE_F *a3)
{
  float width; // xmm1_4
  float height; // xmm2_4
  float v7; // xmm6_4
  const struct _GUID *v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+3Ch] [rbp-1Ch]
  CBlurLayer *v18; // [rsp+60h] [rbp+8h] BYREF
  struct D2D_SIZE_F v19; // [rsp+70h] [rbp+18h] BYREF

  width = a3->width;
  height = a3->height;
  v18 = 0LL;
  v15 = 0LL;
  v16 = (int)width;
  v17 = (int)height;
  if ( this == CDropShadow::s_pFastShadow )
    v7 = FLOAT_16_0;
  else
    v7 = *((float *)this + 38);
  v8 = (const struct _GUID *)(*((_QWORD *)this + 2) + 252LL);
  v19.width = width - (float)(v7 * 2.0);
  v19.height = height - (float)(v7 * 2.0);
  v9 = CBlurLayer::Create(a2, v8, (const struct MilPointAndSizeL *)&v15, &v18);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x15Du);
  }
  else
  {
    v11 = CDropShadow::DrawMask(this, a2, v18, &v19, v7);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x15Fu);
    }
    else
    {
      v12 = CBlurLayer::FillBlurEffect(v18, a2, v7);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x162u);
      }
      else
      {
        v13 = CDrawingContext::FlushD2D(a2);
        v10 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x167u);
      }
    }
  }
  if ( v18 )
    CBlurLayer::`scalar deleting destructor'(v18, 1);
  return v10;
}
