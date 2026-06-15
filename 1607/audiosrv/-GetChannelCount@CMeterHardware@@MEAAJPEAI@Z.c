/*
 * XREFs of ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x180004970
 * Callers:
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180025EA0 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18002F2CC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterHardware::GetChannelCount(CMeterHardware *this, unsigned int *a2)
{
  __int64 v2; // r8
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
  if ( ChannelCountFromDeviceFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetChannelCount", 0x159u, ChannelCountFromDeviceFormat);
  return v4;
}
