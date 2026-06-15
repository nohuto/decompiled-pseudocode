/*
 * XREFs of ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007C430
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x18007BC7C (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 */

void __fastcall CMonitorManager::HandleDefaultDeviceChanged(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager **Context,
        PTP_WORK Work)
{
  CMonitorManager::DoHandleDefaultDeviceChanged(Context[1], (struct IMMDevice *)Context);
  DefaultChangedContext::`scalar deleting destructor'((DefaultChangedContext *)Context);
}
