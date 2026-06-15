/*
 * XREFs of ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x180034890
 * Callers:
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180025EA0 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObject@@$1?_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800288A8 (--0-$CComQIPtr@UIAudioProcessingObject@@$1-_GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10@@3U__s_GUI.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18002F2CC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMeterSoftware::GetChannelCount(CMeterSoftware *this, unsigned int *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rdx
  int ChannelCountFromDeviceFormat; // ebx
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 5);
  if ( v4 )
  {
    ATL::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>::CComQIPtr<IAudioProcessingObject,&__s_GUID const _GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10>(
      &v8,
      v4);
    v7 = v8;
    if ( v8 )
    {
      ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 5) + 32LL))(
                                       *((_QWORD *)this + 5),
                                       a2);
      v7 = v8;
    }
    else
    {
      ChannelCountFromDeviceFormat = -2147467262;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  }
  if ( ChannelCountFromDeviceFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetChannelCount", 822, ChannelCountFromDeviceFormat);
  return (unsigned int)ChannelCountFromDeviceFormat;
}
