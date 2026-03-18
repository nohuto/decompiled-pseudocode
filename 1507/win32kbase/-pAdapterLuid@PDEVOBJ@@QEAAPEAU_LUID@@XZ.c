/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0034460
 * Callers:
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C0014680 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C001A460 (DrvGetWDDMAdapterInfo.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C008243C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00B6D10 (NtHWCursorUpdatePointer.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00BBAA0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DrvUpdateDpiInfoAndNotifyMonitorChange @ 0x1C00BC93C (DrvUpdateDpiInfoAndNotifyMonitorChange.c)
 * Callees:
 *     <none>
 */

struct _LUID *__fastcall PDEVOBJ::pAdapterLuid(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(*(_QWORD *)this + 2600LL);
  if ( v2 == -4 && (*(_DWORD *)(v1 + 56) & 0x20000) != 0 )
    return (struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 1824) + 40LL) + 2600LL) + 264LL);
  if ( !v2 || (*(_DWORD *)(v1 + 56) & 0x20000) != 0 )
    return 0LL;
  return (struct _LUID *)(v2 + 264);
}
