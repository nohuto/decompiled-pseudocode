/*
 * XREFs of ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0066060
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000EF80 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C003DE90 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00667B4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00A19E0 (-_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqxd @ 0x1C0078B64 (WPP_IFR_SF_qqxd.c)
 */

__int64 __fastcall FxRequest::Complete(FxRequest *this, unsigned int Status, __int64 a3, unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a4; // r8
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a4 = 0LL;
    WPP_IFR_SF_qqxd(
      m_Globals,
      Status,
      (unsigned int)_a4,
      0xBu,
      v10,
      _a4,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  if ( m_DeviceBase )
    this->m_PriorityBoost = HIBYTE(m_DeviceBase[1].m_Globals);
  else
    this->m_PriorityBoost = 0;
  return FxRequest::CompleteInternal(this, (_FX_DRIVER_GLOBALS *)Status, a3, a4);
}
