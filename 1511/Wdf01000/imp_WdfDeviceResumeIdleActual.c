/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x1C002E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0012FB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        void *Tag,
        int Line,
        char *File)
{
  FxObject *v7; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPowerIdleMachine *v10; // rcx
  void *PPObject; // [rsp+48h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v7 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxObject *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4098 )
  {
    PPObject = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, &PPObject, (void *)Device, 0x1002u, Offset);
    v7 = (FxObject *)PPObject;
  }
  m_Globals = v7->m_Globals;
  v10 = *(FxPowerIdleMachine **)(*(_QWORD *)&v7[6].m_ObjectFlags + 880LL);
  if ( v10 )
    FxPowerIdleMachine::IoDecrement(v10, Tag, Line, File);
  else
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids);
}
