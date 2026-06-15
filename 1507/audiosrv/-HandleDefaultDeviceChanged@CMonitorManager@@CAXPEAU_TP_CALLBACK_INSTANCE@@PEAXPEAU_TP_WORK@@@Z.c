/*
 * XREFs of ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180095C50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x180095418 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 */

void __fastcall CMonitorManager::HandleDefaultDeviceChanged(
        PTP_CALLBACK_INSTANCE Instance,
        CMonitorManager **Context,
        PTP_WORK Work)
{
  CMonitorManager::DoHandleDefaultDeviceChanged(Context[1], (const unsigned __int16 *)Context);
  DefaultChangedContext::`scalar deleting destructor'((DefaultChangedContext *)Context);
}
