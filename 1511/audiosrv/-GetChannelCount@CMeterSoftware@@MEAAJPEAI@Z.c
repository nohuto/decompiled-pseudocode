/*
 * XREFs of ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x1800432E0
 * Callers:
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180042B90 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180042ABC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x180066460 (--0-$CComQIPtr@UIAudioProcessingObject@@$1-_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterSoftware::GetChannelCount(CMeterSoftware *this, unsigned int *a2)
{
  int ChannelCountFromDeviceFormat; // esi
  __int64 v6; // rbx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 5) )
  {
    ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(&v7);
    v6 = v7;
    if ( v7 )
    {
      ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 5) + 32LL))(
                                       *((_QWORD *)this + 5),
                                       a2);
      v6 = v7;
    }
    else
    {
      ChannelCountFromDeviceFormat = -2147467262;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  }
  if ( ChannelCountFromDeviceFormat < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      ChannelCountFromDeviceFormat);
  }
  return (unsigned int)ChannelCountFromDeviceFormat;
}
