/*
 * XREFs of ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C005C2A8
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C0091F90 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxRequest::GetStatus(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  unsigned int Status; // edi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->m_Globals->FxVerifierIO )
    return (unsigned int)this->m_Irp.m_Irp->IoStatus.Status;
  FxNonPagedObject::Lock(this, &irql, a3);
  Status = this->m_Irp.m_Irp->IoStatus.Status;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v4);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  return Status;
}
