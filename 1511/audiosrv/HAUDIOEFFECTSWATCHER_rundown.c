/*
 * XREFs of HAUDIOEFFECTSWATCHER_rundown @ 0x180071660
 * Callers:
 *     <none>
 * Callees:
 *     s_afxCloseAudioEffectsWatcher @ 0x180030A30 (s_afxCloseAudioEffectsWatcher.c)
 */

BOOL __fastcall HAUDIOEFFECTSWATCHER_rundown(AudioEffectsWatcher **a1)
{
  AudioEffectsWatcher **v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return s_afxCloseAudioEffectsWatcher(&v2);
}
