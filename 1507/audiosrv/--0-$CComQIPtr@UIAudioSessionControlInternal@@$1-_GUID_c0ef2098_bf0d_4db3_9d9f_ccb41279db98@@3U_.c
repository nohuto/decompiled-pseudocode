/*
 * XREFs of ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800988F8
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180099364 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_c0ef2098_bf0d_4db3_9d9f_ccb41279db98, a1);
  return a1;
}
