/*
 * XREFs of imp_WdfIoTargetGetState @ 0x1C0082110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetGetState(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget)
{
  __int64 Offset; // r8
  FxIoTarget *v3; // rcx
  FxIoTarget *pTarget; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1200uLL);
  v3 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxIoTarget *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4608 )
  {
    pTarget = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pTarget, (void *)IoTarget, 0x1200u, Offset);
    v3 = pTarget;
  }
  return (unsigned int)v3->m_State;
}
