/*
 * XREFs of PostPlaySoundMessage @ 0x1C00EBE50
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     PlayEventSound @ 0x1C00EBE10 (PlayEventSound.c)
 *     xxxMessageBeep @ 0x1C01FEAE0 (xxxMessageBeep.c)
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
