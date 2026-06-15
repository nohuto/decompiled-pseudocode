/*
 * XREFs of ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180067BA0
 * Callers:
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x180042620 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, a1);
  return a1;
}
