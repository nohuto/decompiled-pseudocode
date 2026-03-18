/*
 * XREFs of ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C00842B4
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013B60 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00144C0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00148C0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C005C814 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008409C (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084648 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084868 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::PrintDisposeMessage(FxIoTarget *this)
{
  const void *_a1; // rdx

  _a1 = 0LL;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0xAu, WPP_FxIoTarget_cpp_Traceguids, _a1, this->m_DisposeEvent);
}
