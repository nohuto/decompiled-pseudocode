/*
 * XREFs of ??0CPipeInstance@@AEAA@W4tPIPE_TYPE@0@@Z @ 0x14000FEC0
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000AE90 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140012120 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002F734 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAV1@PEAPEAV1@@Z @ 0x14002FC94 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAU.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall CPipeInstance::CPipeInstance(__int64 a1, int a2)
{
  struct IUnknown **v3; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 56) = 10;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 10;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = (struct IUnknown **)(a1 + 168);
  *v3 = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 10;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 116) = 0LL;
  *(_DWORD *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 132) = 1LL;
  *(_DWORD *)(a1 + 140) = 0;
  if ( *v3 )
    ATL::AtlComPtrAssign(v3, 0LL);
  if ( *(_QWORD *)(a1 + 176) )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 176), 0LL);
  *(_QWORD *)(a1 + 192) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 200) = 1;
  *(_DWORD *)(a1 + 8) = 0;
  *(GUID *)(a1 + 208) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
