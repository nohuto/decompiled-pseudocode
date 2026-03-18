/*
 * XREFs of ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129428
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180128DDC (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180128FF8 (-IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsRevokable(COverlayContext *this, struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // di

  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 104LL))(*((_QWORD *)a2 + 2))
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 112LL))(*((_QWORD *)a2 + 2))
    || *((_BYTE *)a2 + 168)
    || *((_BYTE *)a2 + 169)
    || COverlayContext::IsFullscreen(this, a2) && *((_BYTE *)a2 + 171) )
  {
    return 0;
  }
  return v4;
}
