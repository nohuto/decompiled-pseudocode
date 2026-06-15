/*
 * XREFs of ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x180003DE0
 * Callers:
 *     s_afxCloseAudioEffectsWatcher @ 0x180004140 (s_afxCloseAudioEffectsWatcher.c)
 *     s_afxOpenAudioEffectsWatcher @ 0x1800044C0 (s_afxOpenAudioEffectsWatcher.c)
 * Callees:
 *     ??_GAudioEffectsWatcher@@QEAAPEAXI@Z @ 0x180003188 (--_GAudioEffectsWatcher@@QEAAPEAXI@Z.c)
 *     ?ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ @ 0x1800034A4 (-ReleaseAppRef@AudioEffectsWatcher@@QEAAKXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180004024 (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcherFactory::ReleaseWatcher(
        AudioEffectsWatcherFactory *this,
        struct AudioEffectsWatcher *a2)
{
  __int64 *v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)&TheAudioEffectsWatcherFactory;
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !(unsigned int)AudioEffectsWatcher::ReleaseAppRef(a2) )
  {
    v3 = (__int64 *)*((_QWORD *)a2 + 8);
    if ( !v3 )
      ATL::AtlThrowImpl(-2147467259);
    if ( v3 == (__int64 *)qword_1800CB4C8 )
      qword_1800CB4C8 = *v3;
    else
      *(_QWORD *)v3[1] = *v3;
    if ( v3 == (__int64 *)qword_1800CB4D0 )
      qword_1800CB4D0 = v3[1];
    else
      *(_QWORD *)(*v3 + 8) = v3[1];
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode(&qword_1800CB4C8);
    AudioEffectsWatcher::`scalar deleting destructor'(a2);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
