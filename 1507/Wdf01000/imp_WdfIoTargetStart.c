/*
 * XREFs of imp_WdfIoTargetStart @ 0x1C0082A90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetStart(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget)
{
  __int64 Offset; // r8
  FxIoTarget *v3; // rcx
  FxIoTarget *pTarget; // [rsp+48h] [rbp+10h] BYREF

  Offset = 0LL;
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
  return ((__int64 (__fastcall *)(FxIoTarget *, unsigned __int64, __int64))v3->Start)(v3, IoTarget, Offset);
}
