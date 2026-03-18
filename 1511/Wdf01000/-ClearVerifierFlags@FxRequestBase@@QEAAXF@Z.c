/*
 * XREFs of ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0069D34
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000AC10 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001E324 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00229D0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0055ACC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0083A3C (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxRequestBase::ClearVerifierFlags(FxRequestBase *this, __int16 Flags, unsigned __int8 a3)
{
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = irql;
  this->m_VerifierFlags &= ~Flags;
  FxNonPagedObject::Unlock(this, v5, v6);
}
