/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18001039C
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001BF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180010328 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800222D4 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+30h] [rbp-58h] BYREF

  if ( CBaseMatrix::Invert((CBaseMatrix *)v6, a2) )
  {
    updated = CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v6, 0LL);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1A3Fu);
    else
      CDrawingContext::PopTransformInternal(this, 0);
  }
  else
  {
    v4 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x1A3Cu);
  }
  return v4;
}
