/*
 * XREFs of ?SwitchToRotatedDisplaySet@CDisplayManager@@QEAAXXZ @ 0x18010767C
 * Callers:
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1800F3C5C (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 */

void __fastcall CDisplayManager::SwitchToRotatedDisplaySet(CDisplayManager *this)
{
  CDisplaySet *v1; // r9
  CDisplaySet *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = qword_1801A39F0;
  if ( qword_1801A39F0 )
  {
    v2 = qword_1801A39E8;
    v3 = **((_QWORD **)qword_1801A39F0 + 6);
    v4 = **((_QWORD **)qword_1801A39E8 + 6);
    *(_OWORD *)(v4 + 72) = *(_OWORD *)(v3 + 72);
    *(_OWORD *)(v4 + 88) = *(_OWORD *)(v3 + 88);
    *(_OWORD *)(v4 + 104) = *(_OWORD *)(v3 + 104);
    *(_OWORD *)(v4 + 264) = *(_OWORD *)(v3 + 264);
    *(_QWORD *)(v4 + 280) = *(_QWORD *)(v3 + 280);
    *(_DWORD *)(v4 + 288) = *(_DWORD *)(v3 + 288);
    *(_DWORD *)(v4 + 292) = *(_DWORD *)(v3 + 292);
    *(_BYTE *)(v4 + 301) = *(_BYTE *)(v3 + 301);
    *(_OWORD *)((char *)v2 + 24) = *(_OWORD *)((char *)v1 + 24);
    if ( qword_1801A39F0 )
    {
      CDisplaySet::Release(qword_1801A39F0);
      qword_1801A39F0 = 0LL;
    }
  }
}
