/*
 * XREFs of ??1?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x180066C54
 * Callers:
 *     _CProcess::_CProcess_::_1_::dtor$2 @ 0x18004B532 (_CProcess--_CProcess_--_1_--dtor$2.c)
 *     _CProcess::CProcess_::_1_::dtor$2 @ 0x18004B5E6 (_CProcess--CProcess_--_1_--dtor$2.c)
 *     _CDuckingManager::NotifyFilteredClientsAutoDuck_::_1_::dtor$0 @ 0x1800A285F (_CDuckingManager--NotifyFilteredClientsAutoDuck_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::~CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>(
        __int64 *a1)
{
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(a1);
}
