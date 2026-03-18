/*
 * XREFs of ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C002052C
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0012AA0 (imp_WdfRequestSend.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0015EE0 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D07AC (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0B18 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::PreProcessSendAndForget(FxRequest *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _IRP *m_Irp; // rax
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _FX_DRIVER_GLOBALS *v5; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v7; // rax
  FxObject *p_Blink; // rcx

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
    while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
    {
      Flink = p_m_ChildListHead->Flink;
      v7 = p_m_ChildListHead->Flink->Flink;
      if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v7->Blink != Flink )
        __fastfail(3u);
      p_m_ChildListHead->Flink = v7;
      p_Blink = (FxObject *)&Flink[-5].Blink;
      v7->Blink = p_m_ChildListHead;
      p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
      p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
      FxObject::ParentDeleteEvent(p_Blink);
    }
  }
}
