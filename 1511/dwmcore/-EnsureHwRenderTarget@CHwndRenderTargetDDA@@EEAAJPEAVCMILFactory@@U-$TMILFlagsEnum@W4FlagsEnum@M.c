/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180114810
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B2304 (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x18013A09C (-UpdateDDADisplayId@CDisplay@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rdx
  CDisplay *v6; // rcx
  int DisplayRenderTarget; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi

  v3 = 0;
  v5 = a1[2] + 252LL;
  v6 = (CDisplay *)a1[10];
  if ( *((_QWORD *)v6 + 8) )
  {
    CDisplay::UpdateDDADisplayId(v6, (a3 & 0x10000000) != 0);
  }
  else
  {
    DisplayRenderTarget = CMILFactory::CreateDisplayRenderTarget((__int64)v6, v5, a3, a3, (__int64)v6, (__int64)v6 + 64);
    v3 = DisplayRenderTarget;
    if ( DisplayRenderTarget >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayRenderTarget, 0x374u);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Du);
    return (unsigned int)v3;
  }
LABEL_7:
  v8 = a1[10];
  a1[11] = *(_QWORD *)(v8 + 64);
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v8 + 64));
  return (unsigned int)v3;
}
