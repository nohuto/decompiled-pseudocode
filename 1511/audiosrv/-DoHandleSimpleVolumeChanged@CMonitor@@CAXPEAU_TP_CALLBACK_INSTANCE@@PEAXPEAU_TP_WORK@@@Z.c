/*
 * XREFs of ?DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180096960
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180096B8C (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 */

void __fastcall CMonitor::DoHandleSimpleVolumeChanged(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WORK Work,
        const struct _GUID *a4)
{
  CMonitor::HandleSimpleVolumeChanged(*((CMonitor **)Context + 3), *(float *)Context, *((_DWORD *)Context + 1), a4);
  SimpleVolumeChangedContext::`scalar deleting destructor'((SimpleVolumeChangedContext *)Context);
}
