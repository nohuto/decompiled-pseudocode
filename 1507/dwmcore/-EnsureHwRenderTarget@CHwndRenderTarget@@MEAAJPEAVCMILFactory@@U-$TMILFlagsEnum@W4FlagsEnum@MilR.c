/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x180007954 (-UpdateDisplayId@CDisplay@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008320C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x18008E418 (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8 (-Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureHwRenderTarget(CHwndRenderTarget *this, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v5; // rdx
  CDisplay *v6; // rcx
  int DisplayRenderTarget; // eax
  bool v8; // bp
  __int64 v9; // rcx
  __int64 v10; // r14

  v3 = 0;
  v5 = *((_QWORD *)this + 2) + 252LL;
  v6 = (CDisplay *)*((_QWORD *)this + 10);
  if ( *((_QWORD *)v6 + 8) )
  {
    CDisplay::UpdateDisplayId(v6, (a3 & 0x10000000) != 0);
  }
  else
  {
    DisplayRenderTarget = CMILFactory::CreateDisplayRenderTarget((_DWORD)v6, v5, a3, a3, (__int64)v6, (__int64)v6 + 64);
    v3 = DisplayRenderTarget;
    if ( DisplayRenderTarget >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayRenderTarget, 0x3DDu);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x948u);
    return (unsigned int)v3;
  }
LABEL_3:
  v8 = 0;
  if ( !*((_QWORD *)this + 11) )
    v8 = (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                            *((_QWORD *)this + 10) + 96LL,
                            *((_QWORD *)this + 10) + 112LL) == 0;
  v9 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = *(_QWORD *)(v9 + 64);
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(v9 + 64));
  if ( v8 )
    CHwndRenderTarget::Clear(this, 0LL);
  return (unsigned int)v3;
}
