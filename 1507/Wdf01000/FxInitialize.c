/*
 * XREFs of FxInitialize @ 0x1C0021AE0
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C0021640 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C0021BA4 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     FxRegisterBugCheckCallback @ 0x1C0021EB4 (FxRegisterBugCheckCallback.c)
 *     FxCacheBugCheckDriverInfo @ 0x1C0022214 (FxCacheBugCheckDriverInfo.c)
 *     ?FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C0022350 (-FxIFRStart@@YAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU_DRIVER_OBJECT@@@Z.c)
 *     FxRegistrySettingsInitialize @ 0x1C00226F0 (FxRegistrySettingsInitialize.c)
 *     ?FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C002C630 (-FxPoolInitialize@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F908 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     LockVerifierSection @ 0x1C0079DE4 (LockVerifierSection.c)
 *     WPP_IFR_SF_Z @ 0x1C0079EDC (WPP_IFR_SF_Z.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C007A4A8 (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007B0E4 (-AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxInitialize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DRIVER_OBJECT *DriverObject,
        const _UNICODE_STRING *RegistryPath,
        _WDF_DRIVER_CONFIG *a4)
{
  LOGICAL IsDriverVerifying; // eax
  _DRIVER_OBJECT *v8; // r8
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  int v12; // esi
  const _GUID *v14; // [rsp+20h] [rbp-18h]

  IsDriverVerifying = MmIsDriverVerifying(DriverObject);
  FxRegistrySettingsInitialize(FxDriverGlobals, RegistryPath, IsDriverVerifying != 0);
  FxIFRStart(FxDriverGlobals, RegistryPath, v8);
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_Z(FxDriverGlobals, v9, v10, v11, v14, RegistryPath);
  v12 = FxPoolInitialize(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
  if ( v12 < 0 )
  {
    FxIFRStop(FxDriverGlobals);
    return (unsigned int)v12;
  }
  else
  {
    if ( FxDriverGlobals->FxVerifierLock )
    {
      FxDriverGlobals->ThreadTableLock.m_Lock = 0LL;
      FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 1;
      FxVerifierLock::AllocateThreadTable(FxDriverGlobals);
    }
    FxCacheBugCheckDriverInfo(FxDriverGlobals);
    FxRegisterBugCheckCallback(FxDriverGlobals, DriverObject);
    if ( RegistryPath && !_FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(FxDriverGlobals, RegistryPath) )
      _FX_DRIVER_GLOBALS::RegisterClientVersion(FxDriverGlobals, RegistryPath);
    if ( FxDriverGlobals->FxVerifierOn )
      LockVerifierSection(FxDriverGlobals, RegistryPath);
    return 0LL;
  }
}
