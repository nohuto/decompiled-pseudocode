/*
 * XREFs of ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800714C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x180030BAC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 */

void __fastcall AudioEffectsWatcher::EffectsChangedWaitCallback(
        PTP_CALLBACK_INSTANCE Instance,
        PVOID Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos((AudioEffectsWatcher *)Context);
    SetThreadpoolWait(*((PTP_WAIT *)Context + 24), *((HANDLE *)Context + 23), 0LL);
    CoUninitialize();
  }
}
