/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18012DD30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B5F7C (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x1801639F4 (-UpdateDDADisplayId@CDisplay@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  CDisplay *v5; // rcx
  int v6; // edx
  int v7; // ebx
  int DisplayRenderTarget; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = a1[2];
  v5 = (CDisplay *)a1[19];
  v6 = v3 + 252;
  v7 = 0;
  if ( *((_QWORD *)v5 + 8) )
  {
    CDisplay::UpdateDDADisplayId(v5, (a3 & 0x10000000) != 0);
  }
  else
  {
    DisplayRenderTarget = CMILFactory::CreateDisplayRenderTarget((__int64)v5, v6, a3, a3, (__int64)v5, (__int64)v5 + 64);
    v7 = DisplayRenderTarget;
    if ( DisplayRenderTarget >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayRenderTarget, 0x2E0u);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2Du);
    return (unsigned int)v7;
  }
LABEL_7:
  v9 = a1[19];
  a1[20] = *(_QWORD *)(v9 + 64);
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return (unsigned int)v7;
}
