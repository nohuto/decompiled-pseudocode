/*
 * XREFs of imp_WdfDeviceInitSetFileObjectConfig @ 0x1C002E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetFileObjectConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FILEOBJECT_CONFIG *FileObjectConfig,
        _WDF_OBJECT_ATTRIBUTES *FileObjectAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  unsigned __int8 v8; // dl
  _WDF_FILEOBJECT_CLASS FileObjectClass; // esi
  int _a1; // ecx
  unsigned __int16 v11; // r9
  void *retaddr; // [rsp+68h] [rbp+28h]
  int v13; // [rsp+78h] [rbp+38h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v7 = DeviceInit->DriverGlobals;
  if ( !FileObjectConfig )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( FileObjectConfig->Size == 40 )
  {
    if ( (int)FxValidateObjectAttributes(v7, FileObjectAttributes, 7, (unsigned __int16)FileObjectAttributes) >= 0 )
    {
      if ( FileObjectConfig->AutoForwardCleanupClose > (unsigned int)WdfUseDefault )
      {
        WPP_IFR_SF_D(v7, v8, 0x12u, 0xCu, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectConfig->AutoForwardCleanupClose);
      }
      else
      {
        DeviceInit->FileObject.Set = 1;
        DeviceInit->FileObject.AutoForwardCleanupClose = FileObjectConfig->AutoForwardCleanupClose;
        FileObjectClass = FileObjectConfig->FileObjectClass;
        _a1 = FileObjectClass & 0x7FFFFFFF;
        if ( (FileObjectClass & 0x7FFFFFFF) != 0 && (FileObjectConfig->FileObjectClass & 0x7FFFFFFFu) <= 4 )
        {
          if ( v7->IsUserModeDriver && (unsigned int)(_a1 - 2) <= 1 )
          {
            FileObjectClass = FileObjectClass < WdfFileObjectInvalid
                            ? WdfFileObjectCanBeOptional|WdfFileObjectWdfCannotUseFsContexts
                            : WdfFileObjectWdfCannotUseFsContexts;
            if ( v7->FxVerboseOn )
              WPP_IFR_SF_dd(v7, 5u, 0x12u, 0xEu, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 4);
            _a1 = FileObjectClass & 0x7FFFFFFF;
          }
          if ( (FileObjectClass & 0x80000000) == 0 || _a1 >= 2 && _a1 <= 4 )
          {
            DeviceInit->FileObject.Class = FileObjectClass;
            *(_OWORD *)&DeviceInit->FileObject.Callbacks.Size = *(_OWORD *)&FileObjectConfig->Size;
            *(_OWORD *)&DeviceInit->FileObject.Callbacks.EvtFileClose = *(_OWORD *)&FileObjectConfig->EvtFileClose;
            *(_QWORD *)&DeviceInit->FileObject.Callbacks.AutoForwardCleanupClose = *(_QWORD *)&FileObjectConfig->AutoForwardCleanupClose;
            if ( FileObjectAttributes )
            {
              *(_OWORD *)&DeviceInit->FileObject.Attributes.Size = *(_OWORD *)&FileObjectAttributes->Size;
              *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback = *(_OWORD *)&FileObjectAttributes->EvtDestroyCallback;
              *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject = *(_OWORD *)&FileObjectAttributes->ParentObject;
              DeviceInit->FileObject.Attributes.ContextTypeInfo = FileObjectAttributes->ContextTypeInfo;
            }
            return;
          }
          v11 = 15;
        }
        else
        {
          v11 = 13;
        }
        WPP_IFR_SF_d(v7, 2u, 0x12u, v11, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectClass);
      }
    }
  }
  else
  {
    WPP_IFR_SF_dd(v7, 2u, 0x12u, 0xBu, WPP_FxDeviceInitApi_cpp_Traceguids, FileObjectConfig->Size, 40);
  }
  v13 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    v7->Public.DriverName,
    (const char *)&v13,
    v7->Public.DriverName,
    (const char *)&v13);
  if ( v7->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
}
