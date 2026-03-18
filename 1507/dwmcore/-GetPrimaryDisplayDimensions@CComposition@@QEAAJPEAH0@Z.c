/*
 * XREFs of ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x1800E29DC
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18010B3D0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComposition::GetPrimaryDisplayDimensions(CComposition *this, int *a2, int *a3)
{
  unsigned int v5; // ebx
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v7; // eax

  if ( *((_DWORD *)this + 136) )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(this);
    v7 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, int *, int *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                + 200LL))(
           PrimaryDesktopRenderTargetNoRef,
           a2,
           a3);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, v7, 0x1029u);
  }
  else
  {
    v5 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801757BC, 1u, -2003304307, 0x1026u);
  }
  return v5;
}
