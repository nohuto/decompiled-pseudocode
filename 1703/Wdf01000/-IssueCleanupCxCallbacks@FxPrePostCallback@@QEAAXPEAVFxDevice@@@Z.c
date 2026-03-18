/*
 * XREFs of ?IssueCleanupCxCallbacks@FxPrePostCallback@@QEAAXPEAVFxDevice@@@Z @ 0x1C009DAFC
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00260A0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0037650 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0037720 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C009DA7C (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

void __fastcall FxPrePostCallback::IssueCleanupCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  _LIST_ENTRY *i; // rbx
  __int64 m_CallbackType; // rax
  FxCxPnpPowerCallbackContext *v6; // rdi

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  for ( i = Device->m_CxDeviceInfoListHead.Flink; i != p_m_CxDeviceInfoListHead && i; i = i->Flink )
  {
    m_CallbackType = (unsigned __int8)this->m_CallbackType;
    v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&i[6].Flink + m_CallbackType);
    if ( v6
      && FxCxPnpPowerCallbackContext::IsCallbackPresent(
           *((FxCxPnpPowerCallbackContext **)&i[6].Flink + m_CallbackType),
           FxCxCleanupCallback)
      && v6->m_PreCallbackSuccessful == 1 )
    {
      this->InvokeCxCleanupCallback(this, v6);
      v6->m_PreCallbackSuccessful = 0;
    }
  }
}
