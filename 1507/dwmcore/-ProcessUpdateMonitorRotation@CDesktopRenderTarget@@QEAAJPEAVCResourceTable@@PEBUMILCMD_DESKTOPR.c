/*
 * XREFs of ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1800EB990
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SwitchToRotatedDisplaySet@CDisplayManager@@QEAAXXZ @ 0x1800EBB50 (-SwitchToRotatedDisplaySet@CDisplayManager@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessUpdateMonitorRotation(
        CDesktopRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx

  CDisplayManager::SwitchToRotatedDisplaySet(this);
  v4 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    do
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v4);
      v4 = (unsigned int)(v4 + 1);
      *(_BYTE *)(v5 + 575) = 1;
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 28) );
    v6 = *((_QWORD *)this + 24);
    *((float *)this + 51) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 116LL);
    *((float *)this + 53) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 124LL);
    *((float *)this + 50) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 112LL);
    *((float *)this + 52) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 120LL);
  }
  return 0LL;
}
