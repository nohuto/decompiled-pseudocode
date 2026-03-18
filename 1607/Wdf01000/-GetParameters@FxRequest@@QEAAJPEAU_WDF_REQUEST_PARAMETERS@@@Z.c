/*
 * XREFs of ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C001B638
 * Callers:
 *     imp_WdfIoQueueFindRequest @ 0x1C0011080 (imp_WdfIoQueueFindRequest.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C007861C (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     ?Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8ED4 (-Vf_VerifyRequestIsCurrentStackValid@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetParameters(FxRequest *this, _WDF_REQUEST_PARAMETERS *Parameters, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  int IsCurrentStackValid; // edi
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
    FxNonPagedObject::Unlock(this, irql, v7);
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
