/*
 * XREFs of imp_WdfTimerStart @ 0x1C00255E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00239A4 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

BOOLEAN __fastcall imp_WdfTimerStart(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Timer,
        _LARGE_INTEGER DueTime)
{
  __int64 Offset; // r10
  FxTimer *v5; // rcx
  FxTimer *pFxTimer; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Timer )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1028uLL);
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
  return FxTimer::Start(v5, DueTime, DueTime.LowPart);
}
