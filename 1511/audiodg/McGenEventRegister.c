/*
 * XREFs of McGenEventRegister @ 0x1400018B4
 * Callers:
 *     wWinMain @ 0x14000195C (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventRegister()
{
  if ( Microsoft_Windows_AudioHandle )
    return 0LL;
  else
    return EtwEventRegister(
             &AUDIO_EVENT_PROVIDER,
             McGenControlCallbackV2,
             &AUDIO_EVENT_PROVIDER_Context,
             &Microsoft_Windows_AudioHandle);
}
