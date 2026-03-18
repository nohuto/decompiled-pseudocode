/*
 * XREFs of ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180150630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@@Z @ 0x180150054 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 */

__int64 __fastcall CCompositionDistantLight::GetLightInfo(
        CCompositionDistantLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  int v6; // eax
  unsigned int v7; // edi

  *(_DWORD *)a4 = 1;
  *(_OWORD *)((char *)a4 + 4) = *((_OWORD *)this + 11);
  v6 = CCompositionLight::CalcLocalToDeviceMatrix(
         this,
         a2,
         a3,
         *((struct CVisual **)this + 24),
         (struct LightInfo *)((char *)a4 + 80));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Cu);
  }
  else
  {
    *((_QWORD *)a4 + 6) = *((_QWORD *)this + 25);
    *((_DWORD *)a4 + 14) = *((_DWORD *)this + 52);
  }
  return v7;
}
