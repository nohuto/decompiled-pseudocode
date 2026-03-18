/*
 * XREFs of ?UpdateD2D1PrimitiveProperty@CPrimitiveColor@@QEAAJPEAVID2DContext@@@Z @ 0x180107FDC
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAUPrimitivePropertiesElement@1@@Z @ 0x180107D3C (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAUPrimitiveProperti.c)
 */

__int64 __fastcall CPrimitiveColor::UpdateD2D1PrimitiveProperty(CPrimitiveColor *this, struct ID2DContext *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct CPrimitiveColor::PrimitivePropertiesElement *v5; // r14
  int v6; // eax
  struct CPrimitiveColor::PrimitivePropertiesElement *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = CPrimitiveColor::FindOrCreatePrimitiveProperties(this, a2, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v8;
    if ( *((_BYTE *)v8 + 16) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)v8 + 256LL))(
             *(_QWORD *)v8,
             *((_QWORD *)v8 + 1),
             (char *)this + 120);
      v4 = v6;
      if ( v6 >= 0 )
        *((_BYTE *)v5 + 16) = 0;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB0u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xA9u);
  }
  return v4;
}
