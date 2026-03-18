/*
 * XREFs of ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0031A80
 * Callers:
 *     DrvGetWDDMAdapterInfo @ 0x1C00086F0 (DrvGetWDDMAdapterInfo.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C005DA28 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z @ 0x1C007AA00 (-DxgkEngFindViewDesktopPosition@@YAHQEBU_LUID@@IPEAU_POINTL@@@Z.c)
 *     NtHWCursorUpdatePointer @ 0x1C00C4890 (NtHWCursorUpdatePointer.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C00C8FA0 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DrvUpdateDpiInfoAndNotifyMonitorChange @ 0x1C00C9E78 (DrvUpdateDpiInfoAndNotifyMonitorChange.c)
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
