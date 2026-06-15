/*
 * XREFs of ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400250A4
 * Callers:
 *     ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@Z @ 0x140002110 (-ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4STREAMGROUP_CONNECT_OPTIONS@@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x140002EC0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000D930 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140025460 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

LPVOID *__fastcall CPipeInstance::`scalar deleting destructor'(LPVOID *this)
{
  CPipeInstance::~CPipeInstance(this);
  operator delete(this);
  return this;
}
