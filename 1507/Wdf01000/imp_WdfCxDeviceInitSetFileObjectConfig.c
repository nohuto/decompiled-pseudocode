/*
 * XREFs of imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00700C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCxDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_FILEOBJECT_CONFIG *CxFileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rdi
  unsigned __int8 v8; // dl
  _WDF_TRI_STATE AutoForwardCleanupClose; // eax
  _WDF_FILEOBJECT_CLASS _a1; // ecx
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+58h] [rbp+18h]

  if ( !CxDeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( ClientDriverGlobals == (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16] )
  {
    WPP_IFR_SF_qd(
      ClientDriverGlobals,
      2u,
      0x12u,
      0xAu,
      WPP_FxCxDeviceInitApi_cpp_Traceguids,
      DriverGlobals->Driver,
      -1073741808);
    goto LABEL_21;
  }
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
    goto LABEL_21;
  }
  if ( (int)FxValidateObjectAttributes(
              ClientDriverGlobals,
              FileObjectAttributes,
              7,
              (unsigned __int16)FileObjectAttributes) < 0 )
  {
LABEL_21:
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( ClientDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return;
  }
  AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
  if ( (unsigned int)AutoForwardCleanupClose > WdfUseDefault )
  {
    WPP_IFR_SF_D(ClientDriverGlobals, v8, 0x12u, 0x10u, WPP_FxCxDeviceInitApi_cpp_Traceguids, AutoForwardCleanupClose);
    goto LABEL_21;
  }
  CxDeviceInit->FileObject.Set = 1;
  CxDeviceInit->FileObject.AutoForwardCleanupClose = CxFileObjectConfig->AutoForwardCleanupClose;
  _a1 = CxFileObjectConfig->FileObjectClass;
  if ( (_a1 & 0x7FFFFFFF) == 0 || (CxFileObjectConfig->FileObjectClass & 0x7FFFFFFFu) > 4 )
  {
    v11 = 17;
    goto LABEL_16;
  }
  if ( _a1 < WdfFileObjectInvalid && (CxFileObjectConfig->FileObjectClass & 0x7FFFFFFFu) < 2 )
  {
    v11 = 18;
LABEL_16:
    WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, v11, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a1);
    goto LABEL_21;
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
