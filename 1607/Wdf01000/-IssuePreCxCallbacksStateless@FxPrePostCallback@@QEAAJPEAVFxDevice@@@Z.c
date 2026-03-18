/*
 * XREFs of ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00992C8
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C0099094 (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  int v2; // esi
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  FxCxPnpPowerCallbackContext *v6; // rcx
  FxCxPnpPowerCallbackContext *v7; // rcx
  int v8; // eax

  v2 = 0;
  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  if ( p_m_CxDeviceInfoListHead->Flink != p_m_CxDeviceInfoListHead )
  {
    Flink = p_m_CxDeviceInfoListHead->Flink;
    do
    {
      if ( !Flink )
        break;
      v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + (unsigned __int8)this->m_CallbackType);
      if ( v6 )
      {
        if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v6, 0) )
        {
          v8 = this->InvokeCxCallback(this, v7, FxCxInvokePreCallback);
          if ( v2 >= 0 )
            v2 = v8;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_CxDeviceInfoListHead );
  }
  return (unsigned int)v2;
}
