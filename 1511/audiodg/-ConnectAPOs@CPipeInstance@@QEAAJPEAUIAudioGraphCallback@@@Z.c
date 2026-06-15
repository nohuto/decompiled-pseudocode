/*
 * XREFs of ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140004310 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140007990 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400345A8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000C380 (-ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000C960 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnections@CPipeInstance@@AEAAJXZ @ 0x14000DD10 (-CreateAPOConnections@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000E1C0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CPipeInstance::ConnectAPOs(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  int APOConnectionList; // ebx

  APOConnectionList = CPipeInstance::CreateAPOConnectionList(this);
  if ( APOConnectionList < 0
    || (APOConnectionList = CPipeInstance::InitializeAPOInterfaces(this), APOConnectionList < 0)
    || (APOConnectionList = CPipeInstance::CreateAPOConnections(this), APOConnectionList < 0)
    || (APOConnectionList = CPipeInstance::ConfigureAPOInterfaces(this, a2), APOConnectionList < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        48LL,
        &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
        (unsigned int)APOConnectionList);
    }
  }
  return (unsigned int)APOConnectionList;
}
