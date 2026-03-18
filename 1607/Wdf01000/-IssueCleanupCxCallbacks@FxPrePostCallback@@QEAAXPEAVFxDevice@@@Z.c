/*
 * XREFs of ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C0099124
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0033614 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C0099094 (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  __int64 m_CallbackType; // rax
  FxCxPnpPowerCallbackContext *v6; // rsi

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  if ( p_m_CxDeviceInfoListHead->Flink != p_m_CxDeviceInfoListHead )
  {
    Flink = p_m_CxDeviceInfoListHead->Flink;
    do
    {
      if ( !Flink )
        break;
      m_CallbackType = (unsigned __int8)this->m_CallbackType;
      v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + m_CallbackType);
      if ( v6
        && FxCxPnpPowerCallbackContext::IsCallbackPresent(
             *((FxCxPnpPowerCallbackContext **)&Flink[6].Flink + m_CallbackType),
             2u)
        && v6->m_PreCallbackSuccessful == 1 )
      {
        this->InvokeCxCleanupCallback(this, v6);
        v6->m_PreCallbackSuccessful = 0;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_CxDeviceInfoListHead );
  }
}
