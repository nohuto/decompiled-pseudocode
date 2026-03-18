/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000377C
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x1800036F8 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+70h] [rbp-18h]

  v7 = 0;
  if ( CMILMatrix::SetToInverse((CMILMatrix *)v6, a2) )
  {
    updated = CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v6, 0LL);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1A60u);
    else
      CDrawingContext::PopTransformInternal(this, 0);
  }
  else
  {
    v4 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x1A5Du);
  }
  return v4;
}
