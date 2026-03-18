/*
 * XREFs of ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C0025618
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEnableHighPrecisionBrightness @ 0x1C016B340 (DxgkEnableHighPrecisionBrightness.c)
 *     DxgkLPMDisplayControl @ 0x1C016B3D0 (DxgkLPMDisplayControl.c)
 *     DxgkSetHighPrecisionBrightness @ 0x1C016B4D0 (DxgkSetHighPrecisionBrightness.c)
 *     LPMDisplayRegisterInternalDisplay @ 0x1C016B548 (LPMDisplayRegisterInternalDisplay.c)
 *     LPMDisplayUnregisterInternalDisplay @ 0x1C016B5C4 (LPMDisplayUnregisterInternalDisplay.c)
 *     LPMSetTTMDisplayPowerState @ 0x1C016B648 (LPMSetTTMDisplayPowerState.c)
 * Callees:
 *     <none>
 */

AutoResourceLock *__fastcall AutoResourceLock::AutoResourceLock(AutoResourceLock *this, struct _ERESOURCE *a2)
{
  *(_QWORD *)this = Resource;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)this, 1u);
  return this;
}
