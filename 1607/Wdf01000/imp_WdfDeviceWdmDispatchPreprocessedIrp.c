/*
 * XREFs of imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C001E740
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C001FF78 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?IsCxDriverInIoPath@FxDevice@@QEAAEPEAVFxDriver@@@Z @ 0x1C0074258 (-IsCxDriverInIoPath@FxDevice@@QEAAEPEAVFxDriver@@@Z.c)
 *     ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C0079D28 (-PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceWdmDispatchPreprocessedIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _IRP *Irp)
{
  FxDevice *v5; // rbx
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIrpPreprocessInfo *Flink; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v10; // rax
  unsigned __int8 MajorFunction; // cl
  NTSTATUS v12; // eax
  unsigned int v13; // esi
  FxPackage *DispatchPackage; // rax
  _IO_STACK_LOCATION *v17; // rax
  __int64 v18; // r11
  FxIrpPreprocessInfo *v19; // r8
  unsigned int NumMinorFunctions; // r9d
  int v21; // ecx
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *PPObject; // [rsp+58h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v6) = 0;
  if ( (Device & 1) != 0 )
  {
    v6 = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - v6);
  }
  if ( v5->m_Type == 4098 )
  {
    PPObject = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, &PPObject, (void *)Device, 0x1002u, v6);
    v5 = (FxDevice *)PPObject;
  }
  m_Globals = v5->m_Globals;
  if ( !Irp )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, Device, 0xBu) || m_Globals->FxVerifyDownlevel)
    && v5->m_CxDeviceInfoListHead.Flink != &v5->m_CxDeviceInfoListHead
    && (v5->m_PreprocessInfoListHead.Flink == &v5->m_PreprocessInfoListHead
     || FxDevice::IsCxDriverInIoPath(v5, *(FxDriver **)&DriverGlobals[-7].DisplaceDriverUnload)) )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0xBu, WPP_FxDeviceApiKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    v5 = (FxDevice *)PPObject;
  }
  Flink = (FxIrpPreprocessInfo *)v5->m_PreprocessInfoListHead.Flink->Flink;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  v10 = CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v10;
  MajorFunction = v10->MajorFunction;
  if ( (v10->MajorFunction == 22 || MajorFunction == 23 || MajorFunction == 27 && v10->MinorFunction != 2)
    && (v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&v5->m_DeviceObject.m_DeviceObject[1], Irp, &a5, 1u, 0x20u),
        v13 = v12,
        v12 < 0) )
  {
    Irp->IoStatus.Status = v12;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
  }
  else if ( Flink == (FxIrpPreprocessInfo *)&v5->m_PreprocessInfoListHead )
  {
LABEL_11:
    DispatchPackage = FxDevice::GetDispatchPackage(v5, Irp->Tail.Overlay.CurrentStackLocation->MajorFunction);
    return (unsigned int)DispatchPackage->Dispatch(DispatchPackage, Irp);
  }
  else
  {
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v18 = v17->MajorFunction;
    while ( 1 )
    {
      v19 = Flink;
      Flink = (FxIrpPreprocessInfo *)Flink->ListEntry.Flink;
      if ( v19->Dispatch[v18].EvtDevicePreprocess )
        break;
LABEL_34:
      if ( Flink == (FxIrpPreprocessInfo *)&v5->m_PreprocessInfoListHead )
        goto LABEL_11;
    }
    NumMinorFunctions = v19->Dispatch[v18].NumMinorFunctions;
    if ( NumMinorFunctions )
    {
      v21 = 0;
      while ( v19->Dispatch[v18].MinorFunctions[v21] != v17->MinorFunction )
      {
        if ( ++v21 >= NumMinorFunctions )
          goto LABEL_34;
      }
    }
    return (unsigned int)PreprocessIrp(v5, Irp, v19, Flink);
  }
  return v13;
}
