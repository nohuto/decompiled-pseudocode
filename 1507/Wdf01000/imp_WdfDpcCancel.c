/*
 * XREFs of imp_WdfDpcCancel @ 0x1C0066640
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 */

BOOLEAN __fastcall imp_WdfDpcCancel(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Dpc, unsigned __int8 Wait)
{
  FxDpc *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  BOOLEAN v9; // al
  BOOLEAN v10; // bl
  FxDpc *pFxDpc; // [rsp+68h] [rbp+20h] BYREF

  if ( !Dpc )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1015uLL);
  v4 = (FxDpc *)(~Dpc & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Dpc & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxDpc *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4117 )
  {
    pFxDpc = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pFxDpc, (void *)Dpc, 0x1015u, Offset);
    v4 = pFxDpc;
  }
  if ( Wait && (m_Globals = v4->m_Globals, m_Globals->FxVerifierOn) && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 0;
  }
  else
  {
    v9 = KeRemoveQueueDpc(&v4->m_Dpc);
    v10 = v9;
    if ( Wait && !v9 )
      KeFlushQueuedDpcs();
    return v10;
  }
}
