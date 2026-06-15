/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180066524
 * Callers:
 *     s_afxOpenAudioEffectsWatcher @ 0x180030730 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x180031048 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800314B8 (-RemoveAt@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x1800646DC (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 */

void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(AudioEffectsWatcherFactory *this, __int64 **a2)
{
  EnterCriticalSection(&TheAudioEffectsWatcherFactory);
  if ( !(unsigned int)AudioEffectsWatcher::ReleaseAppRef((AudioEffectsWatcher *)a2) )
  {
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::RemoveAt(&qword_1800E6808, a2[8]);
    AudioEffectsWatcher::`scalar deleting destructor'((AudioEffectsWatcher *)a2);
  }
  LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
}
