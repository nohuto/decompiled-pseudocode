/*
 * XREFs of ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C002D644 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxIrpQueue::_WdmCancelRoutineInternal(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  KIRQL CancelIrql; // cl
  unsigned __int8 v4; // r8
  FxIrpQueue *v5; // rsi
  FxIrpQueue *_a2; // rbx
  unsigned __int8 v7; // r8
  __int64 v8; // r9
  void (__fastcall *m_CancelCallback)(FxIrpQueue *, _IRP *, _IO_CSQ_IRP_CONTEXT *, unsigned __int8); // rax
  FxNonPagedObject *m_LockObject; // rcx
  FxNonPagedObject *v11; // rax
  __int64 v12; // r10
  int irql; // [rsp+58h] [rbp+10h] BYREF
  FxIrp v14; // [rsp+60h] [rbp+18h] BYREF

  CancelIrql = Irp->CancelIrql;
  v14.m_Irp = Irp;
  IoReleaseCancelSpinLock(CancelIrql);
  v5 = (FxIrpQueue *)Irp->Tail.Overlay.DriverContext[3];
  if ( LODWORD(v5->m_Queue.Flink) == 1 )
    _a2 = (FxIrpQueue *)v5->m_LockObject;
  else
    _a2 = (FxIrpQueue *)Irp->Tail.Overlay.DriverContext[3];
  FxNonPagedObject::Lock(_a2->m_LockObject, (unsigned __int8 *)&irql, v4);
  FxIrpQueue::RemoveIrpFromListEntry(_a2, &v14);
  if ( v5 != _a2 )
  {
    v5->m_Queue.Blink = 0LL;
    Irp->Tail.Overlay.DriverContext[3] = 0LL;
  }
  m_CancelCallback = _a2->m_CancelCallback;
  if ( m_CancelCallback )
  {
    LOBYTE(v8) = irql;
    m_CancelCallback(_a2, Irp, (_IO_CSQ_IRP_CONTEXT *)v5, v8);
  }
  else
  {
    m_LockObject = _a2->m_LockObject;
    if ( SLOBYTE(m_LockObject->m_ObjectFlags) < 0 && m_LockObject[-1].m_DeviceBase )
      FxVerifierLock::Unlock((FxVerifierLock *)m_LockObject[-1].m_DeviceBase, irql, v7);
    else
      KeReleaseSpinLock(&m_LockObject->m_NPLock.m_Lock, irql);
    Irp->IoStatus.Status = -1073741536;
    Irp->IoStatus.Information = 0LL;
    WPP_IFR_SF_qq(_a2->m_LockObject->m_Globals, 2u, 0x12u, 0xBu, WPP_FxIrpQueue_cpp_Traceguids, Irp, _a2);
    v11 = _a2->m_LockObject;
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v11->m_Globals->Public.DriverName,
      (const char *)&irql,
      v11->m_Globals->Public.DriverName,
      (const char *)&irql);
    if ( *(_BYTE *)(v12 + 318) )
      DbgBreakPoint();
    IofCompleteRequest(Irp, 0);
  }
}
