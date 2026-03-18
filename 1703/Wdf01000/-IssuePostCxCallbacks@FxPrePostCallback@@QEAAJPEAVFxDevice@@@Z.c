/*
 * XREFs of ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C009DB84
 * Callers:
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00260A0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0037600 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0037650 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0037720 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C009DA7C (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePostCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  int v5; // esi
  FxCxPnpPowerCallbackContext *v6; // rcx
  char v7; // dl
  FxCxPnpPowerCallbackContext *v8; // rcx
  __int64 v9; // r8
  int v10; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != p_m_CxDeviceInfoListHead && Flink )
  {
    v6 = (FxCxPnpPowerCallbackContext *)*((_QWORD *)&Flink[6].Flink + (unsigned __int8)this->m_CallbackType);
    if ( v6 )
    {
      v6->m_PreCallbackSuccessful = 0;
      if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v6, FxCxPostCallback) )
      {
        LOBYTE(v9) = v7;
        v10 = this->InvokeCxCallback(this, v8, (FxCxInvokeCallbackSubType)v9);
        if ( v5 >= 0 )
          v5 = v10;
      }
    }
    Flink = Flink->Flink;
  }
  return (unsigned int)v5;
}
