/*
 * XREFs of ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0020680
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetIrp(FxRequest *this, _IRP **ppIrp, unsigned __int8 a3)
{
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int IsNotCompleted; // edi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn )
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
    else
      IsNotCompleted = 0;
    if ( IsNotCompleted >= 0 )
    {
      *ppIrp = this->m_Irp.m_Irp;
    }
    else
    {
      *ppIrp = 0LL;
      IsNotCompleted = -1073741808;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v6);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
    return (unsigned int)IsNotCompleted;
  }
  else
  {
    *ppIrp = this->m_Irp.m_Irp;
    return 0LL;
  }
}
