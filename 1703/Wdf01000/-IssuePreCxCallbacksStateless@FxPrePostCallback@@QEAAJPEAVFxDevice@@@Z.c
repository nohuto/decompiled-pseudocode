/*
 * XREFs of ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DCA4
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C009DA7C (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  int v5; // esi
  FxCxPnpPowerCallbackContext *v6; // rcx
  FxCxPnpPowerCallbackContext *v7; // rcx
  int v8; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != p_m_CxDeviceInfoListHead && Flink )
  {
    v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + (unsigned __int8)this->m_CallbackType);
    if ( v6 )
    {
      if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v6, FxCxPreCallback) )
      {
        v8 = this->InvokeCxCallback(this, v7, FxCxInvokePreCallback);
        if ( v5 >= 0 )
          v5 = v8;
      }
    }
    Flink = Flink->Flink;
  }
  return (unsigned int)v5;
}
