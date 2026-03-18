/*
 * XREFs of ?EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180034700
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180074300 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 * Callees:
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18003434C (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x18003479C (-UpdateDisplayId@CDisplay@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B5F7C (-CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U-$TMILFlagsEnum@W4FlagsEnum.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::EnsureHwRenderTarget(CDisplay *this, __int64 a2, __int64 a3, unsigned int a4)
{
  char *v4; // rsi
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  int DisplayRenderTarget; // eax

  v4 = (char *)this + 56;
  v6 = *((_QWORD *)this + 7);
  v7 = 0;
  if ( v6 && *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6) + 136) )
  {
    CDisplay::UpdateDisplayId(this, (a4 & 0x10000000) != 0);
  }
  else
  {
    CDisplay::ReleaseHwRenderTarget(this);
    DisplayRenderTarget = CMILFactory::CreateDisplayRenderTarget(v9, a3, v10, a4, this, v4);
    v7 = DisplayRenderTarget;
    if ( DisplayRenderTarget < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayRenderTarget, 0x2BAu);
  }
  return v7;
}
