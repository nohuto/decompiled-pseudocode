/*
 * XREFs of ?CcdQueryDisplayConfig@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@0PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1800A0270
 * Callers:
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007C44C (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?CcdEmulateOldQDC@@YAKXZ @ 0x1800A01E0 (-CcdEmulateOldQDC@@YAKXZ.c)
 */

__int64 __fastcall CcdQueryDisplayConfig(
        __int64 a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO *a3,
        unsigned int *a4,
        struct DISPLAYCONFIG_MODE_INFO *a5)
{
  unsigned int DisplayConfig; // ebx

  DisplayConfig = QueryDisplayConfig(1u, a2, a3, a4, a5, 0LL);
  if ( !DisplayConfig && (unsigned int)CcdEmulateOldQDC() )
    qsort(a3, *a2, 0x48uLL, DisplayConfigModeSort);
  return DisplayConfig;
}
