/*
 * XREFs of ?IssuePreCxCallbacksStateful@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DC10
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00260A0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0037650 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0037720 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C009DA7C (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateful(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *Flink; // rbx
  int v5; // r10d
  __int64 m_CallbackType; // rax
  FxCxPnpPowerCallbackContext *v7; // rdi

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != p_m_CxDeviceInfoListHead && Flink )
  {
    m_CallbackType = (unsigned __int8)this->m_CallbackType;
    v7 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + m_CallbackType);
    if ( v7
      && FxCxPnpPowerCallbackContext::IsCallbackPresent(
           *((FxCxPnpPowerCallbackContext **)&Flink[6].Flink + m_CallbackType),
           FxCxPreCallback) )
    {
      v5 = this->InvokeCxCallback(this, v7, FxCxInvokePreCallback);
      if ( v5 < 0 )
        return (unsigned int)v5;
      v7->m_PreCallbackSuccessful = 1;
    }
    Flink = Flink->Flink;
  }
  return (unsigned int)v5;
}
