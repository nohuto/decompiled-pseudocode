/*
 * XREFs of ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0084C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxIoTarget::_RequestCancelled(
        FxIrpQueue *Queue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        KIRQL CallerIrql)
{
  FxIoTarget *p_m_RequestCount; // rbx
  _LIST_ENTRY *Blink; // rcx
  FxRequestBase *v8; // rdi
  unsigned __int64 v9; // rcx
  const void *_a1; // rax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  FxVerifierLock *m_TargetFileObject; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  p_m_RequestCount = (FxIoTarget *)&Queue[-7].m_RequestCount;
  if ( SLOBYTE(Queue[-6].m_LockObject) < 0 && (Blink = Queue[-7].m_Queue.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)Blink, CallerIrql, (unsigned __int8)CsqContext);
  else
    KeReleaseSpinLock(&p_m_RequestCount->m_NPLock.m_Lock, CallerIrql);
  v8 = (FxRequestBase *)&CsqContext[-5];
  if ( v8->m_ObjectSize )
    v9 = (unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v9 = 0LL;
  _a1 = v8;
  if ( v9 )
    _a1 = (const void *)v9;
  WPP_IFR_SF_q(v8->m_Globals, 4u, 0xEu, 0x37u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  v8->m_CsqContext.Irp = (_IRP *)&v8->120;
  v8->m_ListEntry.Flink = (_LIST_ENTRY *)&v8->120;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  FxNonPagedObject::Lock(p_m_RequestCount, &irql, v11);
  v8->m_TargetFlags &= ~2u;
  if ( SLOBYTE(p_m_RequestCount->m_ObjectFlags) < 0
    && (m_TargetFileObject = (FxVerifierLock *)p_m_RequestCount[-1].m_TargetFileObject) != 0LL )
  {
    FxVerifierLock::Unlock(m_TargetFileObject, irql, v12);
  }
  else
  {
    KeReleaseSpinLock(&p_m_RequestCount->m_NPLock.m_Lock, irql);
  }
  FxIoTarget::FailPendedRequest(p_m_RequestCount, v8, -1073741536);
}
