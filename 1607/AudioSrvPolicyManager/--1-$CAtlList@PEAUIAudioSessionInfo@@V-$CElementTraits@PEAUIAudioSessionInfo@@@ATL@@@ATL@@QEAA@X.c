/*
 * XREFs of ??1?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x180009A50
 * Callers:
 *     _CDuckingManager::NotifyFilteredClientsAutoDuck_::_1_::dtor$0 @ 0x180024F55 (_CDuckingManager--NotifyFilteredClientsAutoDuck_--_1_--dtor$0.c)
 *     _CProcess::CProcess_::_1_::dtor$2 @ 0x180025507 (_CProcess--CProcess_--_1_--dtor$2.c)
 *     _CProcess::_CProcess_::_1_::dtor$2 @ 0x1800255F3 (_CProcess--_CProcess_--_1_--dtor$2.c)
 *     _CPickerHostContext::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800259E0 (_CPickerHostContext--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::~CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>(
        __int64 a1)
{
  return ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(a1);
}
