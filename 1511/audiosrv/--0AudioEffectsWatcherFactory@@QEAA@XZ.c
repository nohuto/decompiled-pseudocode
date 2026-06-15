/*
 * XREFs of ??0AudioEffectsWatcherFactory@@QEAA@XZ @ 0x180045A80
 * Callers:
 *     _dynamic_initializer_for__TheAudioEffectsWatcherFactory__ @ 0x180001060 (_dynamic_initializer_for__TheAudioEffectsWatcherFactory__.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

AudioEffectsWatcherFactory *__fastcall AudioEffectsWatcherFactory::AudioEffectsWatcherFactory(
        AudioEffectsWatcherFactory *this)
{
  AudioEffectsWatcherFactory *result; // rax

  ATL::CCriticalSection::CCriticalSection(&TheAudioEffectsWatcherFactory);
  LODWORD(dword_1800E6830) = 10;
  qword_1800E6808 = 0LL;
  qword_1800E6810 = 0LL;
  result = (AudioEffectsWatcherFactory *)&TheAudioEffectsWatcherFactory;
  qword_1800E6818 = 0LL;
  *(_OWORD *)&qword_1800E6820 = 0LL;
  return result;
}
