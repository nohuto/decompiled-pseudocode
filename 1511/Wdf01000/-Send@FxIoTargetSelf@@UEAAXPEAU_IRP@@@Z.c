/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0076BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C001BB58 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0055334 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0076D80 (WPP_IFR_SF_qcDqd.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int8 MajorFunction; // r11
  const void *_a1; // rcx
  int v7; // esi
  FxDefaultIrpHandler *DispatchPackage; // rax
  __int64 v9; // rcx
  FxIoQueue *v10; // r9
  FxPkgIo *v11; // r10
  char v12; // r11
  const void *globals; // rcx
  const void *v14; // rdx
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  int v17; // [rsp+48h] [rbp-10h]

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !this->m_DispatchQueue && !*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + MajorFunction) )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, _a1, MajorFunction);
    v7 = -1073741436;
$Fail:
    Irp->IoStatus.Status = v7;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return;
  }
  DispatchPackage = FxDevice::GetDispatchPackage(this->m_Device, CurrentStackLocation->MajorFunction);
  if ( DispatchPackage != (FxDefaultIrpHandler *)v11 )
  {
    v7 = -1073741811;
    if ( *(_WORD *)(v9 + 10) )
      globals = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qcDqd(
      this->m_Globals,
      (unsigned __int8)v14,
      0xEu,
      0xBu,
      WPP_FxIoTargetSelf_cpp_Traceguids,
      v14,
      v12,
      CurrentStackLocation->MinorFunction,
      globals,
      v17);
    FxVerifierDbgBreakPoint(this->m_Globals);
    goto $Fail;
  }
  m_CxDeviceInfo = v10->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = &v11->m_InCallerContextCallback;
  FxPkgIo::DispatchStep2(v11, Irp, p_IoInCallerContextCallback, v10);
}
