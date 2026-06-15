/*
 * XREFs of ??1?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800097AC
 * Callers:
 *     _CDuckingManager::NotifyFilteredClientsAutoDuck_::_1_::dtor$0 @ 0x180021DEE (_CDuckingManager--NotifyFilteredClientsAutoDuck_--_1_--dtor$0.c)
 *     _CProcess::CProcess_::_1_::dtor$2 @ 0x1800223BB (_CProcess--CProcess_--_1_--dtor$2.c)
 *     _CProcess::_CProcess_::_1_::dtor$2 @ 0x1800224AE (_CProcess--_CProcess_--_1_--dtor$2.c)
 *     _CPickerHostContext::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180022862 (_CPickerHostContext--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::~CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>(
        __int64 a1)
{
  return ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(a1);
}
