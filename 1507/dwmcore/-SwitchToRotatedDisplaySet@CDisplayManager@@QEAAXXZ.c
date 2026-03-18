/*
 * XREFs of ?SwitchToRotatedDisplaySet@CDisplayManager@@QEAAXXZ @ 0x1800EBB50
 * Callers:
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1800EB990 (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 */

void __fastcall CDisplayManager::SwitchToRotatedDisplaySet(CDisplayManager *this)
{
  CDisplaySet *v1; // r9
  CDisplaySet *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = qword_1801930F0;
  if ( qword_1801930F0 )
  {
    v2 = qword_1801930E8;
    v3 = **((_QWORD **)qword_1801930F0 + 6);
    v4 = **((_QWORD **)qword_1801930E8 + 6);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(v3 + 80);
    *(_OWORD *)(v4 + 96) = *(_OWORD *)(v3 + 96);
    *(_OWORD *)(v4 + 112) = *(_OWORD *)(v3 + 112);
    *(_OWORD *)(v4 + 868) = *(_OWORD *)(v3 + 868);
    *(_QWORD *)(v4 + 884) = *(_QWORD *)(v3 + 884);
    *(_DWORD *)(v4 + 892) = *(_DWORD *)(v3 + 892);
    *(_DWORD *)(v4 + 896) = *(_DWORD *)(v3 + 896);
    *(_BYTE *)(v4 + 146) = *(_BYTE *)(v3 + 146);
    *(_OWORD *)((char *)v2 + 24) = *(_OWORD *)((char *)v1 + 24);
    if ( qword_1801930F0 )
    {
      CDisplaySet::Release(qword_1801930F0);
      qword_1801930F0 = 0LL;
    }
  }
}
