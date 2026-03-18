/*
 * XREFs of imp_WdfWmiInstanceFireEvent @ 0x1C00686B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C0069260 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 */

int __fastcall imp_WdfWmiInstanceFireEvent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 WmiInstance,
        unsigned int EventDataSize,
        void *EventData)
{
  FxWmiInstanceExternal *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxWmiInstanceExternal *pInstance; // [rsp+40h] [rbp-18h] BYREF

  if ( !WmiInstance )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1034uLL);
  v6 = (FxWmiInstanceExternal *)(~WmiInstance & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (WmiInstance & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxWmiInstanceExternal *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4148 )
  {
    pInstance = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pInstance, (void *)WmiInstance, 0x1034u, Offset);
    v6 = pInstance;
  }
  m_Globals = v6->m_Globals;
  if ( !m_Globals->FxVerifierOn )
    return FxWmiInstance::FireEvent(v6, EventData, EventDataSize);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 1u )
    return FxWmiInstance::FireEvent(v6, EventData, EventDataSize);
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 1);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return -1073741808;
}
