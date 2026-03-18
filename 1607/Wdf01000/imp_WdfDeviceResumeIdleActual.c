/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x1C0033880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0023B60 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C007BB94 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        void *Tag,
        int Line,
        char *File)
{
  __int64 Offset; // r8
  FxObject *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxPowerIdleMachine *v10; // rcx
  void *PPObject; // [rsp+48h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  LOWORD(Offset) = 0;
  v8 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v8->__vftable);
    v8 = (FxObject *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4098 )
  {
    PPObject = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, &PPObject, (void *)Device, 0x1002u, Offset);
    v8 = (FxObject *)PPObject;
  }
  m_Globals = v8->m_Globals;
  v10 = *(FxPowerIdleMachine **)(*(_QWORD *)&v8[6].m_ObjectFlags + 880LL);
  if ( v10 )
    FxPowerIdleMachine::IoDecrement(v10, Tag, Line, File);
  else
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids);
}
