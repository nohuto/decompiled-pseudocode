/*
 * XREFs of ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0088DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0065A68 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C0065E4C (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     WPP_IFR_SF_qcDqd @ 0x1C0088F34 (WPP_IFR_SF_qcDqd.c)
 */

void __fastcall FxIoTargetSelf::Send(FxIoTargetSelf *this, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int8 MajorFunction; // bp
  const void *v6; // rcx
  int v7; // r14d
  FxDevice *m_Device; // rsi
  FxDefaultIrpHandler *DispatchPackage; // rax
  unsigned __int8 v10; // dl
  FxIoQueue *v11; // r9
  __int64 v12; // r10
  FxPkgIo *v13; // r11
  unsigned __int16 m_ObjectSize; // ax
  unsigned int _a4; // ecx
  const void *globals; // rsi
  bool v17; // zf
  _FX_DRIVER_GLOBALS **v18; // rbx
  __int16 v19; // ax
  const void *v20; // r10
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  FxIoInCallerContext *p_IoInCallerContextCallback; // r8
  int v23; // [rsp+48h] [rbp-20h]

  --Irp->Tail.Overlay.CurrentStackLocation;
  --Irp->CurrentLocation;
  Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !this->m_DispatchQueue && !*((_QWORD *)&this->m_DeviceBase[3].m_ChildListHead.Blink[9].Flink + MajorFunction) )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetSelf_cpp_Traceguids, v6, MajorFunction);
    v7 = -1073741436;
$Fail:
    Irp->IoStatus.Status = v7;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    return;
  }
  m_Device = this->m_Device;
  DispatchPackage = FxDevice::GetDispatchPackage(m_Device, CurrentStackLocation->MajorFunction);
  if ( DispatchPackage != (FxDefaultIrpHandler *)v13 )
  {
    v7 = -1073741811;
    m_ObjectSize = m_Device->m_ObjectSize;
    _a4 = CurrentStackLocation->MinorFunction;
    globals = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    v17 = m_ObjectSize == 0;
    v18 = (_FX_DRIVER_GLOBALS **)(v12 + 16);
    v19 = *(_WORD *)(v12 + 10);
    if ( v17 )
      globals = 0LL;
    v20 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v19 )
      v20 = 0LL;
    WPP_IFR_SF_qcDqd(*v18, v10, 0xEu, 0xBu, WPP_FxIoTargetSelf_cpp_Traceguids, v20, MajorFunction, _a4, globals, v23);
    FxVerifierDbgBreakPoint(*v18);
    goto $Fail;
  }
  m_CxDeviceInfo = v11->m_CxDeviceInfo;
  p_IoInCallerContextCallback = &m_CxDeviceInfo->IoInCallerContextCallback;
  if ( !m_CxDeviceInfo )
    p_IoInCallerContextCallback = &v13->m_InCallerContextCallback;
  FxPkgIo::DispatchStep2(v13, Irp, p_IoInCallerContextCallback, v11);
}
