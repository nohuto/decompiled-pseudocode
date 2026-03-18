/*
 * XREFs of ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C6EC
 * Callers:
 *     ?FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z @ 0x18000CFBC (-FindVisualFromHwnd@CWindowManager@@QEAAJPEAUHWND__@@PEAPEAVCVisual@@@Z.c)
 *     ?CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x1800371A4 (-CreateRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18005C824 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18005C8C0 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x18005C97C (-RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1800E871C (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z @ 0x1800E88B4 (-FindTopLevelVisualFromHwnd@CWindowManager@@QEAAJ_KPEAPEAVCVisual@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1800E892C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowManager::FindEntry(CWindowManager *this, __int64 a2, struct CWindowAssociationMapEntry **a3)
{
  unsigned int v3; // r11d
  __int64 v4; // r9
  unsigned int v6; // r10d
  __int64 v7; // rdx
  struct CWindowAssociationMapEntry *v8; // rcx

  v3 = *((_DWORD *)this + 10);
  v4 = 0LL;
  v6 = -2147023728;
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v8 = *(struct CWindowAssociationMapEntry **)(v7 + 8 * v4);
      if ( *(_QWORD *)v8 == a2 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v3 )
        return v6;
    }
    v6 = 0;
    *a3 = v8;
  }
  return v6;
}
