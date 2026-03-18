/*
 * XREFs of ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0099238
 * Callers:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0033614 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C0099094 (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateful(FxPrePostCallback *this, FxDevice *Device)
{
  int v2; // r10d
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  __int64 m_CallbackType; // rax
  FxCxPnpPowerCallbackContext *v7; // rsi

  v2 = 0;
  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  if ( p_m_CxDeviceInfoListHead->Flink != p_m_CxDeviceInfoListHead )
  {
    Flink = p_m_CxDeviceInfoListHead->Flink;
    do
    {
      if ( !Flink )
        break;
      m_CallbackType = (unsigned __int8)this->m_CallbackType;
      v7 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + m_CallbackType);
      if ( v7
        && FxCxPnpPowerCallbackContext::IsCallbackPresent(
             *((FxCxPnpPowerCallbackContext **)&Flink[6].Flink + m_CallbackType),
             0) )
      {
        v2 = this->InvokeCxCallback(this, v7, FxCxInvokePreCallback);
        if ( v2 < 0 )
          return (unsigned int)v2;
        v7->m_PreCallbackSuccessful = 1;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_CxDeviceInfoListHead );
  }
  return (unsigned int)v2;
}
