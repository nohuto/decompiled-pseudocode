/*
 * XREFs of ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x180042C98
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DC4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037CC0 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z @ 0x18003C4C8 (-RecordImageBrushInfo@CDrawingContext@@AEAAXPEAVCResource@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18005D400 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::FillOrStrokeShape(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        float *a5,
        struct CResource *a6)
{
  unsigned int v7; // ebx
  int BrushRealizer; // eax
  CBrushResourceRealizer *v11; // r15
  int v12; // eax
  int v13; // eax
  void (__fastcall *v14)(CBrushResourceRealizer *__hidden); // rdi
  __int64 (__fastcall *v15)(CMILRefCountBase *); // rdi
  CBrushResourceRealizer *v17; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0;
  v17 = 0LL;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a5) )
  {
    BrushRealizer = CDrawingContext::GetBrushRealizer(this, a6, (CDrawingContext *)((char *)this + 2816), &v17);
    v11 = v17;
    v7 = BrushRealizer;
    if ( BrushRealizer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizer, 0x52Eu);
    }
    else
    {
      *(_OWORD *)((char *)this + 2952) = *a4;
      *(_OWORD *)((char *)this + 2968) = *(_OWORD *)a5;
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x536u);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, CBrushResourceRealizer *, _DWORD))(**((_QWORD **)this + 44) + 80LL))(
                *((_QWORD *)this + 44),
                *((_QWORD *)this + 47),
                (char *)this + 56,
                (char *)this + 72,
                (char *)this + 2816,
                a3,
                0LL,
                v11,
                *((_DWORD *)this + 68));
        v7 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x542u);
        else
          CDrawingContext::RecordImageBrushInfo(this, a6);
      }
    }
    if ( v11 )
    {
      v14 = *(void (__fastcall **)(CBrushResourceRealizer *__hidden))(*(_QWORD *)v11 + 32LL);
      if ( v14 == CBrushResourceRealizer::FreeRealizationResources )
        CBrushResourceRealizer::FreeRealizationResources(v11);
      else
        v14(v11);
      v15 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v11 + 8LL);
      if ( v15 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v11);
      else
        v15(v11);
    }
  }
  return v7;
}
