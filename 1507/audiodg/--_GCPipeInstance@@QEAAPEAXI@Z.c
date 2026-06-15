/*
 * XREFs of ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140011960 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140012810 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14001893C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002F4A0 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14002FC0C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x140031698 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140032068 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032130 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x1400086A0 (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CPipeInstance *__fastcall CPipeInstance::`scalar deleting destructor'(CPipeInstance *this)
{
  CPipeInstance::~CPipeInstance(this);
  operator delete(this);
  return this;
}
