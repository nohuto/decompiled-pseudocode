/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x18004125C
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x180001080 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  ATL::CCriticalSection::CCriticalSection(&TheAudioEffectsWatcherFactory);
  dword_1800E8860 = 10;
  qword_1800E8838 = 0LL;
  qword_1800E8840 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  qword_1800E8848 = 0LL;
  xmmword_1800E8850 = 0LL;
  return result;
}
