/*
 * XREFs of ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18006B420
 * Callers:
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 * Callees:
 *     ?FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ @ 0x18002EC50 (-FreeRealizationResources@CBrushResourceRealizer@@UEAAXXZ.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180031AA0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180032A20 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B824 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180064DB4 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillOrStrokeShape(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        float *a5,
        struct CResource *a6)
{
  unsigned int v7; // edi
  int BrushRealizer; // eax
  CBrushResourceRealizer *v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 (__fastcall *v14)(struct CResource *, __int64); // rax
  char v15; // al
  void (__fastcall *v16)(CBrushResourceRealizer *); // rax
  unsigned int (__fastcall *v17)(CMILRefCountBase *__hidden); // rax
  CBrushResourceRealizer *v19; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0;
  v19 = 0LL;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a5) )
  {
    BrushRealizer = CDrawingContext::GetBrushRealizer(this, a6, (CDrawingContext *)((char *)this + 3264), &v19);
    v11 = v19;
    v7 = BrushRealizer;
    if ( BrushRealizer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizer, 0x533u);
    }
    else
    {
      *((_OWORD *)this + 213) = *a4;
      *((_OWORD *)this + 214) = *(_OWORD *)a5;
      v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x53Bu);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, __int64, _QWORD, CBrushResourceRealizer *, _DWORD))(**((_QWORD **)this + 54) + 80LL))(
                *((_QWORD *)this + 54),
                *((_QWORD *)this + 57),
                (char *)this + 128,
                (char *)this + 144,
                (char *)this + 3264,
                a3,
                0LL,
                v11,
                *((_DWORD *)this + 88));
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x547u);
        }
        else
        {
          v14 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a6 + 48LL);
          if ( (char *)v14 == (char *)CSolidColorLegacyMilBrush::IsOfType )
          {
            v15 = CSolidColorLegacyMilBrush::IsOfType((__int64)a6, 76);
          }
          else if ( (char *)v14 == (char *)CImageLegacyMilBrush::IsOfType )
          {
            v15 = CImageLegacyMilBrush::IsOfType((__int64)a6, 76);
          }
          else
          {
            v15 = v14(a6, 76LL);
          }
          if ( v15 )
          {
            if ( *((_BYTE *)a6 + 444) )
              *((_BYTE *)this + 6534) = 1;
            if ( *((_BYTE *)a6 + 445) )
              *((_BYTE *)this + 6536) = 1;
          }
        }
      }
    }
    if ( v11 )
    {
      v16 = *(void (__fastcall **)(CBrushResourceRealizer *))(*(_QWORD *)v11 + 32LL);
      if ( v16 == CBrushResourceRealizer::FreeRealizationResources )
        CBrushResourceRealizer::FreeRealizationResources(v11);
      else
        v16(v11);
      v17 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v11 + 8LL);
      if ( v17 == CMILRefCountBase::Release )
        CMILRefCountBase::Release(v11);
      else
        v17(v11);
    }
  }
  return v7;
}
