/*
 * XREFs of ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C00991AC
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C00335C8 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0033614 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 * Callees:
 *     ?IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z @ 0x1C0099094 (-IsCallbackPresent@FxCxPnpPowerCallbackContext@@AEAAEW4FxCxCallbackSubType@@@Z.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePostCxCallbacks(FxPrePostCallback *this, FxDevice *Device)
{
  int v2; // esi
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  _LIST_ENTRY *Flink; // rbx
  FxCxPnpPowerCallbackContext *v6; // rcx
  char v7; // dl
  FxCxPnpPowerCallbackContext *v8; // rcx
  __int64 v9; // r8
  int v10; // eax

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
        v6->m_PreCallbackSuccessful = 0;
        if ( FxCxPnpPowerCallbackContext::IsCallbackPresent(v6, 1u) )
        {
          LOBYTE(v9) = v7;
          v10 = this->InvokeCxCallback(this, v8, (FxCxInvokeCallbackSubType)v9);
          if ( v2 >= 0 )
            v2 = v10;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_CxDeviceInfoListHead );
  }
  return (unsigned int)v2;
}
