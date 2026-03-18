/*
 * XREFs of ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1800F3C5C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SwitchToRotatedDisplaySet@CDisplayManager@@QEAAXXZ @ 0x18010767C (-SwitchToRotatedDisplaySet@CDisplayManager@@QEAAXXZ.c)
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
      *(_BYTE *)(v5 + 568) = 1;
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 28) );
    v6 = *((_QWORD *)this + 30);
    *((float *)this + 63) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 108LL);
    *((float *)this + 65) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 116LL);
    *((float *)this + 62) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 104LL);
    *((float *)this + 64) = (float)*(int *)(**(_QWORD **)(v6 + 48) + 112LL);
  }
  return 0LL;
}
