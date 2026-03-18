/*
 * XREFs of ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C005C174
 * Callers:
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C0075088 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0F50 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetParameters(FxRequest *this, _WDF_REQUEST_PARAMETERS *Parameters, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v6; // r8
  int IsCurrentStackValid; // edi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( m_Globals->FxVerifierOn )
      IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsCurrentStackValid(this, m_Globals);
    else
      IsCurrentStackValid = 0;
    if ( IsCurrentStackValid >= 0 )
    {
      if ( m_Globals->FxVerifierOn )
        IsCurrentStackValid = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      else
        IsCurrentStackValid = 0;
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
    if ( IsCurrentStackValid < 0 )
      return (unsigned int)IsCurrentStackValid;
  }
  Parameters->Size = 40;
  Parameters->Type = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  Parameters->MinorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  memmove(&Parameters->Parameters, &this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters, 0x20uLL);
  if ( m_Globals->FxVerifierIO )
  {
    CurrentStackLocation = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 14
      && (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3 )
    {
      Parameters->Parameters.DeviceIoControl.Type3InputBuffer = 0LL;
    }
  }
  return 0LL;
}
