/*
 * XREFs of ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x18003DD70
 * Callers:
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003F680 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18003F5AC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterHardware::GetChannelCount(CMeterHardware *this, unsigned int *a2)
{
  __int64 v2; // rdi
  int ChannelCountFromDeviceFormat; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v2 + 24LL))(
                                     *((_QWORD *)this + 6),
                                     a2);
  else
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  v4 = ChannelCountFromDeviceFormat;
  if ( ChannelCountFromDeviceFormat < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x16u,
      (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
      ChannelCountFromDeviceFormat);
  }
  return v4;
}
