/*
 * XREFs of ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18002D8C0
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180023BE8 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@.c)
 *     ?CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z @ 0x180027BE8 (-CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E074 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x1800834C0 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::FillOrStrokeShape(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        _OWORD *a5,
        struct CResource *a6)
{
  unsigned int v7; // ebx
  int BrushRealizer; // eax
  CBrushResourceRealizer *v11; // r15
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  void (__fastcall *v15)(CBrushResourceRealizer *__hidden); // rdi
  __int64 (__fastcall *v16)(CMILRefCountBase *); // rdi
  CBrushResourceRealizer *v18; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0;
  v18 = 0LL;
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a5) )
  {
    BrushRealizer = CDrawingContext::GetBrushRealizer(this, a6, (CDrawingContext *)((char *)this + 2784), &v18);
    v11 = v18;
    v7 = BrushRealizer;
    if ( BrushRealizer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizer, 0x527u);
    }
    else
    {
      *(_OWORD *)((char *)this + 2920) = *a4;
      *(_OWORD *)((char *)this + 2936) = *a5;
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x52Fu);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, CBrushResourceRealizer *, _DWORD))(**((_QWORD **)this + 44) + 80LL))(
                *((_QWORD *)this + 44),
                *((_QWORD *)this + 47),
                (char *)this + 56,
                (char *)this + 72,
                (char *)this + 2784,
                a3,
                0LL,
                v11,
                *((_DWORD *)this + 68));
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x53Bu);
        else
          CDrawingContext::CheckForDrawingWithProtectedImageBrush(this, a6, v14);
      }
    }
    if ( v11 )
    {
      v15 = *(void (__fastcall **)(CBrushResourceRealizer *__hidden))(*(_QWORD *)v11 + 32LL);
      if ( v15 == CBrushResourceRealizer::FreeRealizationResources )
        CBrushResourceRealizer::FreeRealizationResources(v11);
      else
        v15(v11);
      v16 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v11 + 8LL);
      if ( v16 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v11);
      else
        v16(v11);
    }
  }
  return v7;
}
