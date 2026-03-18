/*
 * XREFs of ?DrawMask@CDropShadow@@AEAAJPEAVCDrawingContext@@PEAVCBlurLayer@@AEBUD2D_SIZE_F@@M@Z @ 0x18014F460
 * Callers:
 *     ?UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014FE1C (-UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013B20 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478 (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z @ 0x18014F850 (-GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z.c)
 */

__int64 __fastcall CDropShadow::DrawMask(
        CDropShadow *this,
        struct CDrawingContext *a2,
        struct CBlurLayer *a3,
        const struct D2D_SIZE_F *a4,
        float a5)
{
  int MaskContentNoRef; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _BYTE v14[8]; // [rsp+30h] [rbp-51h] BYREF
  struct CSpriteVisualContent *v15; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v16[64]; // [rsp+40h] [rbp-41h] BYREF
  int v17; // [rsp+80h] [rbp-1h]
  __int128 v18; // [rsp+90h] [rbp+Fh] BYREF

  v17 = 0;
  v15 = 0LL;
  v18 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v14[0] = 0;
  MaskContentNoRef = CDropShadow::GetMaskContentNoRef(this, &v15);
  v9 = MaskContentNoRef;
  if ( MaskContentNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MaskContentNoRef, 0x1E0u);
  }
  else
  {
    v10 = CExternalLayer::ApplyState(a3, a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1E3u);
    }
    else
    {
      CMILMatrix::SetTranslation((CMILMatrix *)v16, a5, a5, 0.0);
      v11 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v16, 1, 1);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1E9u);
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, _BYTE *, __int128 *))(*(_QWORD *)v15 + 120LL))(
                v15,
                a2,
                a4,
                v14,
                &v18);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1EFu);
        CDrawingContext::PopTransformInternal(a2, 1);
      }
      return (unsigned int)CExternalLayer::RestoreState(a3, a2);
    }
  }
  return v9;
}
