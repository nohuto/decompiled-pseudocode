/*
 * XREFs of ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@@Z @ 0x180150054
 * Callers:
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180150630 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180150A20 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180150F30 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B440 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CCompositionLight::CalcLocalToDeviceMatrix(
        CCompositionLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CVisual *a4,
        struct CMILMatrix *a5)
{
  const struct CVisualTree *v5; // rdx
  int WorldTransform; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-51h] BYREF
  __int128 v11; // [rsp+40h] [rbp-41h]
  __int128 v12; // [rsp+50h] [rbp-31h]
  __int128 v13; // [rsp+60h] [rbp-21h]
  int v14; // [rsp+70h] [rbp-11h]
  __int128 v15; // [rsp+80h] [rbp-1h] BYREF
  __int128 v16; // [rsp+90h] [rbp+Fh]
  __int128 v17; // [rsp+A0h] [rbp+1Fh]
  __int128 v18; // [rsp+B0h] [rbp+2Fh]
  int v19; // [rsp+C0h] [rbp+3Fh]

  v5 = (const struct CVisualTree *)*((_QWORD *)a2 + 781);
  v14 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v5, 3, (__int64)&v10, 0LL, 0LL);
  v8 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0x68u);
  }
  else
  {
    v15 = v10;
    v19 = v14;
    v16 = v11;
    v17 = v12;
    v18 = v13;
    CMILMatrix::Multiply((CMILMatrix *)&v15, a3);
    v10 = v15;
    v14 = v19;
    v11 = v16;
    v12 = v17;
    v13 = v18;
    CMILMatrix::SetToInverse(a5, (const struct CMILMatrix *)&v10);
  }
  return v8;
}
