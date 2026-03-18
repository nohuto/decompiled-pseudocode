/*
 * XREFs of imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0028000
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitAssignWdmIrpPreprocessCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        int (__fastcall *EvtDeviceWdmIrpPreprocess)(WDFDEVICE__ *, _IRP *),
        unsigned __int8 MajorFunction,
        unsigned __int8 *MinorFunctions,
        unsigned int NumMinorFunctions)
{
  _FX_DRIVER_GLOBALS *v9; // r13
  FxIrpPreprocessInfo *v10; // rax
  FxIrpPreprocessInfo::Info *Dispatch; // rcx
  int v12; // r8d
  __int64 v13; // rdi
  unsigned __int8 *v14; // rcx
  _LIST_ENTRY *Caller; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], Caller);
  v9 = DeviceInit->DriverGlobals;
  if ( !EvtDeviceWdmIrpPreprocess )
    FxVerifierNullBugCheck(v9, Caller);
  if ( NumMinorFunctions && !MinorFunctions )
    FxVerifierNullBugCheck(v9, Caller);
  if ( MajorFunction >= 0x1Cu )
  {
    WPP_IFR_SF_(v9, 2u, 0x12u, 0x1Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    return 3221225485LL;
  }
  if ( !DeviceInit->PreprocessInfo )
  {
    v10 = (FxIrpPreprocessInfo *)FxPoolAllocator(
                                   v9,
                                   (_LIST_ENTRY *)&v9->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   0x2B8uLL,
                                   v9->Tag,
                                   Caller);
    if ( v10 )
    {
      Dispatch = v10->Dispatch;
      v12 = 27;
      do
      {
        --v12;
        Dispatch->EvtDevicePreprocess = 0LL;
        Dispatch->NumMinorFunctions = 0;
        Dispatch->MinorFunctions = 0LL;
        ++Dispatch;
      }
      while ( v12 >= 0 );
      v10->ClassExtension = 0;
      v10->ListEntry.Blink = (_LIST_ENTRY *)v10;
      v10->ListEntry.Flink = (_LIST_ENTRY *)v10;
    }
    else
    {
      v10 = 0LL;
    }
    DeviceInit->PreprocessInfo = v10;
    if ( !v10 )
    {
      WPP_IFR_SF_(v9, 2u, 0x12u, 0x1Fu, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
  }
  if ( NumMinorFunctions )
  {
    v13 = MajorFunction;
    if ( DeviceInit->PreprocessInfo->Dispatch[v13].NumMinorFunctions )
    {
      WPP_IFR_SF_(v9, 2u, 0x12u, 0x20u, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225488LL;
    }
    DeviceInit->PreprocessInfo->Dispatch[v13].MinorFunctions = (unsigned __int8 *)FxPoolAllocator(
                                                                                    v9,
                                                                                    (_LIST_ENTRY *)&v9->FxPoolFrameworks,
                                                                                    ExDefaultNonPagedPoolType,
                                                                                    NumMinorFunctions,
                                                                                    v9->Tag,
                                                                                    Caller);
    v14 = DeviceInit->PreprocessInfo->Dispatch[v13].MinorFunctions;
    if ( !v14 )
    {
      WPP_IFR_SF_(v9, 2u, 0x12u, 0x21u, WPP_FxDeviceInitApi_cpp_Traceguids);
      return 3221225626LL;
    }
    memmove(v14, MinorFunctions, NumMinorFunctions);
    DeviceInit->PreprocessInfo->Dispatch[v13].NumMinorFunctions = NumMinorFunctions;
  }
  DeviceInit->PreprocessInfo->Dispatch[MajorFunction].EvtDevicePreprocess = EvtDeviceWdmIrpPreprocess;
  return 0LL;
}
