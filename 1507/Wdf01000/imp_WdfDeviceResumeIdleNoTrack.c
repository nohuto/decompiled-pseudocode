/*
 * XREFs of imp_WdfDeviceResumeIdleNoTrack @ 0x1C00719A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0017540 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  FxObject *v2; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPowerIdleMachine *v5; // rcx
  void *PPObject; // [rsp+48h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v2 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxObject *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4098 )
  {
    PPObject = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, &PPObject, (void *)Device, 0x1002u, Offset);
    v2 = (FxObject *)PPObject;
  }
  m_Globals = v2->m_Globals;
  v5 = *(FxPowerIdleMachine **)(*(_QWORD *)&v2[6].m_ObjectFlags + 880LL);
  if ( v5 )
    FxPowerIdleMachine::IoDecrement(v5, 0LL, 0, 0LL);
  else
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids);
}
