/*
 * XREFs of PostPlaySoundMessage @ 0x1C00F0C60
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     PlayEventSound @ 0x1C00F0C20 (PlayEventSound.c)
 *     xxxMessageBeep @ 0x1C014F750 (xxxMessageBeep.c)
 * Callees:
 *     <none>
 */

__int64 PostPlaySoundMessage()
{
  if ( gPlaySoundRpcHandle )
    return PlaySoundPostMessage(gPlaySoundRpcHandle);
  else
    return 0LL;
}
