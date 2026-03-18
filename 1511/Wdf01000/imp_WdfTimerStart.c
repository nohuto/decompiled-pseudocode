/*
 * XREFs of imp_WdfTimerStart @ 0x1C0002260
 * Callers:
 *     <none>
 * Callees:
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00023A0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall imp_WdfTimerStart(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Timer,
        _LARGE_INTEGER DueTime)
{
  __int64 Offset; // r8
  FxTimer *v5; // rcx
  FxTimer *pFxTimer; // [rsp+48h] [rbp+10h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1028uLL);
  LOWORD(Offset) = 0;
  v5 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxTimer *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4136 )
  {
    pFxTimer = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v5 = pFxTimer;
  }
  return FxTimer::Start(v5, DueTime);
}
