/*
 * XREFs of imp_WdfIoQueuePurgeSynchronously @ 0x1C0093DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0095AA8 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x1C00972F0 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 */

void __fastcall imp_WdfIoQueuePurgeSynchronously(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue)
{
  FxIoQueue *v2; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  int v6; // eax
  FxIoQueue *pQueue; // [rsp+60h] [rbp+18h] BYREF

  if ( !Queue )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1003uLL);
  v2 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v2->FxNonPagedObject::FxObject::__vftable);
    v2 = (FxIoQueue *)((char *)v2 - Offset);
  }
  if ( v2->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v2 = pQueue;
  }
  m_Globals = v2->m_Globals;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    v6 = FxIoQueue::QueuePurgeSynchronously(v2);
    if ( v6 < 0 )
      FxIoQueue::FatalError(pQueue, v6);
  }
}
