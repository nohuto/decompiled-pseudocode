/*
 * XREFs of ??A?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEBAAEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180126248
 * Callers:
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180078BD8 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 232LL * a2;
}
