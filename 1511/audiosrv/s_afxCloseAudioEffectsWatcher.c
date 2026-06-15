/*
 * XREFs of s_afxCloseAudioEffectsWatcher @ 0x180030A30
 * Callers:
 *     HAUDIOEFFECTSWATCHER_rundown @ 0x180071660 (HAUDIOEFFECTSWATCHER_rundown.c)
 * Callees:
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x180030ADC (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x180031048 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800314B8 (-RemoveAt@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 */

BOOL __fastcall s_afxCloseAudioEffectsWatcher(AudioEffectsWatcher ***a1)
{
  AudioEffectsWatcher **v1; // rsi
  AudioEffectsWatcher *v3; // rbx
  HANDLE ProcessHeap; // rax
  HANDLE v5; // rax
  BOOL result; // eax

  v1 = *a1;
  v3 = **a1;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    EnterCriticalSection(&TheAudioEffectsWatcherFactory);
    if ( !AudioEffectsWatcher::ReleaseAppRef(v3) )
    {
      ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::RemoveAt(
        &qword_1800E6808,
        *((_QWORD *)v3 + 8));
      AudioEffectsWatcher::~AudioEffectsWatcher(v3);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    LeaveCriticalSection(&TheAudioEffectsWatcherFactory);
    CoUninitialize();
  }
  v5 = GetProcessHeap();
  result = HeapFree(v5, 0, v1);
  *a1 = 0LL;
  return result;
}
