/*
 * XREFs of ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0007A0C
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C000D830 (DpiEnterSystemDisplay.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 *     DxgkIsPrimarySource @ 0x1C00C6310 (DxgkIsPrimarySource.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::GetPrimaryPath(
        ADAPTER_DISPLAY *this,
        unsigned int *a2,
        unsigned int *a3,
        enum _DXGK_PRIMARY_TARGET_TYPE *a4)
{
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 160LL) == 1 )
  {
    *a2 = *((_DWORD *)this + 36);
    *a3 = *((_DWORD *)this + 37);
    *(_DWORD *)a4 = *((_DWORD *)this + 38);
  }
  else
  {
    *(_DWORD *)a4 = 3;
    *a2 = -1;
    *a3 = -1;
  }
}
