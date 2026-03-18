/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800FA8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x18008E418 (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x180124B60 (-UpdateDDADisplayId@CDisplay@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  struct _GUID *v5; // rdx
  CDisplay *v6; // rcx
  int DisplayRenderTarget; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi

  v3 = 0;
  v5 = (struct _GUID *)(a1[2] + 252LL);
  v6 = (CDisplay *)a1[10];
  if ( *((_QWORD *)v6 + 9) )
  {
    CDisplay::UpdateDDADisplayId(v6, (a3 & 0x10000000) != 0);
  }
  else
  {
    DisplayRenderTarget = CMILFactory::CreateDisplayRenderTarget((__int64)v6, v5, a3, a3, (__int64)v6, (__int64)v6 + 72);
    v3 = DisplayRenderTarget;
    if ( DisplayRenderTarget >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayRenderTarget, 0x404u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Du);
    return (unsigned int)v3;
  }
LABEL_7:
  v8 = a1[10];
  a1[11] = *(_QWORD *)(v8 + 72);
  v9 = *(_QWORD *)(v8 + 72);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v8 + 72));
  return (unsigned int)v3;
}
