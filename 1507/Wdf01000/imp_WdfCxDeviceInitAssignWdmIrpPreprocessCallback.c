/*
 * XREFs of imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C006FE40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_Dd @ 0x1C00256D4 (WPP_IFR_SF_Dd.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C005D350 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        int (__fastcall *EvtCxDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int v10; // edi
  FxIrpPreprocessInfo *v11; // rax
  unsigned __int16 v12; // r9
  unsigned __int8 *v13; // rcx
  FxIrpPreprocessInfo *PreprocessInfo; // rax
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CxDeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( ClientDriverGlobals != (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16] )
  {
    if ( !EvtCxDeviceWdmIrpPreprocess )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( NumMinorFunctions && !MinorFunctions )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    if ( MajorFunction >= 0x1Cu )
    {
      v10 = -1073741811;
      WPP_IFR_SF_Dd(
        ClientDriverGlobals,
        2u,
        0x12u,
        0xBu,
        WPP_FxCxDeviceInitApi_cpp_Traceguids,
        MajorFunction,
        -1073741811);
      return v10;
    }
    if ( !CxDeviceInit->PreprocessInfo )
    {
      v11 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                     ClientDriverGlobals,
                                     (_LIST_ENTRY *)&ClientDriverGlobals->FxPoolFrameworks,
                                     ExDefaultNonPagedPoolType,
                                     0x2B8uLL,
                                     ClientDriverGlobals->Tag,
                                     retaddr);
      if ( v11 )
        FxIrpPreprocessInfo::FxIrpPreprocessInfo(v11);
      CxDeviceInit->PreprocessInfo = v11;
      if ( !v11 )
      {
        v10 = -1073741670;
        v12 = 12;
LABEL_24:
        WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, v12, WPP_FxCxDeviceInitApi_cpp_Traceguids, -1073741670);
        return v10;
      }
      v11->ClassExtension = 1;
    }
    if ( NumMinorFunctions )
    {
      if ( CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].NumMinorFunctions )
      {
        v10 = -1073741808;
        WPP_IFR_SF_d(ClientDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxCxDeviceInitApi_cpp_Traceguids, -1073741808);
        return v10;
      }
      CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                                  ClientDriverGlobals,
                                                                                                  (_LIST_ENTRY *)&ClientDriverGlobals->FxPoolFrameworks,
                                                                                                  ExDefaultNonPagedPoolType,
                                                                                                  NumMinorFunctions,
                                                                                                  ClientDriverGlobals->Tag,
                                                                                                  retaddr);
      v13 = CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].MinorFunctions;
      if ( !v13 )
      {
        v10 = -1073741670;
        v12 = 14;
        goto LABEL_24;
      }
      memmove(v13, MinorFunctions, NumMinorFunctions);
      CxDeviceInit->PreprocessInfo->Dispatch[MajorFunction].NumMinorFunctions = NumMinorFunctions;
    }
    PreprocessInfo = CxDeviceInit->PreprocessInfo;
    v10 = 0;
    PreprocessInfo->Dispatch[MajorFunction].EvtDevicePreprocess = EvtCxDeviceWdmIrpPreprocess;
    return v10;
  }
  v10 = -1073741808;
  WPP_IFR_SF_qd(
    ClientDriverGlobals,
    2u,
    0x12u,
    0xAu,
    WPP_FxCxDeviceInitApi_cpp_Traceguids,
    DriverGlobals->Driver,
    -1073741808);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( ClientDriverGlobals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v10;
}
