/*
 * XREFs of imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00661E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C005E7E0 (WPP_IFR_SF_D.c)
 *     FxValiateCx @ 0x1C0065EE0 (FxValiateCx.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned __int16 v9; // r9
  unsigned __int8 v10; // dl
  _WDF_TRI_STATE AutoForwardCleanupClose; // eax
  _WDF_FILEOBJECT_CLASS _a1; // eax
  unsigned __int16 v13; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v4) >= 0 )
  {
    if ( !CxFileObjectConfig )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( CxFileObjectConfig->Size != 40 )
    {
      WPP_IFR_SF_dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0xFu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        CxFileObjectConfig->Size,
        40);
LABEL_20:
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
      return;
    }
    if ( (int)FxValidateObjectAttributes(ClientDriverGlobals, FileObjectAttributes, 7, v9) < 0 )
      goto LABEL_20;
    AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    if ( (unsigned int)AutoForwardCleanupClose > WdfUseDefault )
    {
      WPP_IFR_SF_D(
        ClientDriverGlobals,
        v10,
        0x12u,
        0x10u,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        AutoForwardCleanupClose);
      goto LABEL_20;
    }
    CxDeviceInit->FileObject.Set = 1;
    CxDeviceInit->FileObject.AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
    _a1 = CxFileObjectConfig->FileObjectClass;
    if ( (_a1 & 0x7FFFFFFF) == 0 || (CxFileObjectConfig->FileObjectClass & 0x7FFFFFFFu) > 4 )
    {
      v13 = 17;
      goto LABEL_15;
    }
    if ( _a1 < WdfFileObjectInvalid && (CxFileObjectConfig->FileObjectClass & 0x7FFFFFFFu) < 2 )
    {
      v13 = 18;
LABEL_15:
      WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, v13, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1);
      goto LABEL_20;
    }
    CxDeviceInit->FileObject.Class = _a1;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&CxFileObjectConfig->Size;
    *(_OWORD *)&CxDeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&CxFileObjectConfig->EvtFileClose;
    *(_QWORD *)&CxDeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&CxFileObjectConfig->AutoForwardCleanupClose;
    if ( FileObjectAttributes )
    {
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
      *(_OWORD *)&CxDeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
      CxDeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
    }
  }
}
