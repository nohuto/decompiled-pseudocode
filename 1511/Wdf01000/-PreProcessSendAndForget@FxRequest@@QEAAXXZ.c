/*
 * XREFs of ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0022948
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004AD0 (imp_WdfRequestSend.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0006D50 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C00234FC (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00569E8 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9918 (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9BA8 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::PreProcessSendAndForget(FxRequest *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _IRP *m_Irp; // rax
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _FX_DRIVER_GLOBALS *v5; // rdx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rcx
  FxObject *p_Blink; // rbp
  unsigned __int64 *v9; // rsi
  KIRQL v10; // al
  int m_ObjectState; // edx
  KIRQL v12; // di
  int v13; // edx
  int v14; // edx
  int v15; // edx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyPreProcessSendAndForget(this, m_Globals);
  if ( !this->m_NextStackLocationFormatted )
  {
    m_Irp = this->m_Irp.m_Irp;
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
  }
  if ( !this->m_Reserved )
  {
    if ( !FxObject::EarlyDispose(this) )
    {
      v5 = this->m_Globals;
      if ( v5->FxVerifierOn )
        FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(this, v5);
    }
    p_m_ChildListHead = &this->m_ChildListHead;
    while ( 1 )
    {
      if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
        return;
      Flink = p_m_ChildListHead->Flink;
      v7 = p_m_ChildListHead->Flink->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v7->Blink != Flink )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v7;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v7->Blink = p_m_ChildListHead;
      v9 = (unsigned __int64 *)&Flink[-1];
      Flink->Blink = Flink;
      Flink->Flink = Flink;
      v10 = KeAcquireSpinLockRaiseToDpc(v9);
      m_ObjectState = p_Blink->m_ObjectState;
      v12 = v10;
      p_Blink->m_ParentObject = 0LL;
      v13 = m_ObjectState - 2;
      if ( !v13 )
        goto LABEL_20;
      v14 = v13 - 2;
      if ( !v14 )
        goto LABEL_19;
      v15 = v14 - 4;
      if ( v15 )
      {
        if ( v15 == 1 )
          FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
LABEL_19:
        KeReleaseSpinLock(v9, v12);
      }
      else
      {
LABEL_20:
        FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v10, 1u);
      }
    }
  }
}
