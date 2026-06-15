/*
 * XREFs of McGenEventRegister @ 0x140017A08
 * Callers:
 *     wWinMain @ 0x1400177C0 (wWinMain.c)
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
