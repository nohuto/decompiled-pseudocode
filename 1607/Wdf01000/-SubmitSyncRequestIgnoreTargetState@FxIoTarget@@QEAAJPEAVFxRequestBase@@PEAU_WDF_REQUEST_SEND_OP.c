/*
 * XREFs of ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00843B8
 * Callers:
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0086400 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C0089C34 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008B940 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008EBF8 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSyncRequestIgnoreTargetState(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  const void *_a1; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 v7; // rax
  _WDF_REQUEST_SEND_OPTIONS Options; // [rsp+30h] [rbp-18h] BYREF

  _a1 = 0LL;
  m_Globals = this->m_Globals;
  if ( RequestOptions )
  {
    v7 = HIDWORD(*(_QWORD *)&RequestOptions->Size);
    Options = *RequestOptions;
    if ( (v7 & 4) == 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x39u, WPP_FxIoTarget_cpp_Traceguids, _a1);
      }
      Options.Flags |= 4u;
    }
  }
  else
  {
    Options.Size = 16;
    Options.Flags = 4;
    Options.Timeout = 0LL;
  }
  return FxIoTarget::SubmitSync(this, Request, &Options, 0LL);
}
