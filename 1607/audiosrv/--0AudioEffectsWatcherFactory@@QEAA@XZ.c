/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18003301C
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x180001070 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  ATL::CCriticalSection::CCriticalSection(&TheAudioEffectsWatcherFactory);
  dword_1800CB4F0 = 10;
  qword_1800CB4C8 = 0LL;
  qword_1800CB4D0 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  qword_1800CB4D8 = 0LL;
  xmmword_1800CB4E0 = 0LL;
  return result;
}
