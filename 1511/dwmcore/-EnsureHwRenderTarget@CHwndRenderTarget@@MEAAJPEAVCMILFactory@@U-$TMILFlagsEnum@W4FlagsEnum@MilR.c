/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C430
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x18001DBF0 (-UpdateDisplayId@CDisplay@@QEAAX_N@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B2304 (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureHwRenderTarget(__int64 a1, __int64 a2, int a3)
{
  int v3; // edi
  __int64 v5; // rdx
  CDisplay *v6; // rcx
  int DisplayRenderTarget; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 16) + 252LL;
  v6 = *(CDisplay **)(a1 + 80);
  if ( *((_QWORD *)v6 + 7) )
  {
    CDisplay::UpdateDisplayId(v6, (a3 & 0x10000000) != 0);
  }
  else
  {
    DisplayRenderTarget = CMILFactory::CreateDisplayRenderTarget((_DWORD)v6, v5, a3, a3, (__int64)v6, (__int64)v6 + 56);
    v3 = DisplayRenderTarget;
    if ( DisplayRenderTarget >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayRenderTarget, 0x34Du);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x903u);
    return (unsigned int)v3;
  }
LABEL_3:
  if ( !*(_QWORD *)(a1 + 88) )
    *(_BYTE *)(a1 + 554) = 1;
  v8 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(v8 + 56);
  v9 = *(_QWORD *)(v8 + 56);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v8 + 56));
  return (unsigned int)v3;
}
