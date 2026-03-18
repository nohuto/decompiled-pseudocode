/*
 * XREFs of PostPlaySoundMessage @ 0x1C010F780
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     PlayEventSound @ 0x1C010F740 (PlayEventSound.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
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
