/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800768A4
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x180076AB0 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x180076B10 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180072FF0 (-RemoveAt@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z.c)
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x180075F24 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x180076814 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 */

void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(
        AudioEffectsWatcherFactory *this,
        struct AudioEffectsWatcher *a2)
{
  EnterCriticalSection(&TheAudioEffectsWatcherFactory);
  if ( !(unsigned int)AudioEffectsWatcher::ReleaseAppRef(a2) )
  {
    ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&qword_1800E8838, *((_QWORD **)a2 + 8));
    AudioEffectsWatcher::`scalar deleting destructor'(a2);
  }
  LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
}
