/*
 * XREFs of ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0008EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqcDq @ 0x1C003F060 (WPP_IFR_SF_qqcDq.c)
 */

int __fastcall FxPkgIo::Dispatch(FxPkgIo *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  _FX_DRIVER_GLOBALS *v5; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxDeviceBase *m_DeviceBase; // r11
  unsigned int globals; // edx
  char _a5; // r10
  _DEVICE_OBJECT *_a4; // r8
  const void *_a3; // r11

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  v5 = this->m_Globals;
  if ( v5->FxVerboseOn )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    m_DeviceBase = this->m_DeviceBase;
    globals = CurrentStackLocation->MinorFunction;
    _a5 = CurrentStackLocation->MajorFunction;
    LOWORD(CurrentStackLocation) = m_DeviceBase->m_ObjectSize;
    _a4 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)CurrentStackLocation )
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(v5, globals, (unsigned int)_a4, 0xCu, WPP_FxPkgIo_cpp_Traceguids, _a3, _a4, _a5, globals, Irp);
  }
  return FxPkgIo::DispatchStep1(this, Irp, this->m_DynamicDispatchInfoListHead.Flink);
}
