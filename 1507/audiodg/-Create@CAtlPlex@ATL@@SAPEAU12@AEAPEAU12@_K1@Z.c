/*
 * XREFs of ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140012F30
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140006800 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x14000D0C0 (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140012450 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCStreamInstanceNew@@PEAV312@1@Z @ 0x140012D04 (-NewNode@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL.c)
 *     ?NewNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDisplayNode@@PEAV312@1@Z @ 0x140026410 (-NewNode@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x140028400 (-NewNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x14002852C (-NewNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?NewNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCVirtualProtectedOutput@@PEAV312@1@Z @ 0x140031058 (-NewNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@@.c)
 *     ?NewNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x140033EB4 (-NewNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@AT.c)
 * Callees:
 *     <none>
 */

struct ATL::CAtlPlex *__fastcall ATL::CAtlPlex::Create(
        struct ATL::CAtlPlex **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r9
  struct ATL::CAtlPlex *result; // rax

  if ( a2 )
  {
    if ( a2 == 10 )
      v4 = 0x1999999999999999LL;
    else
      v4 = 0xFFFFFFFFFFFFFFFFuLL / a2;
    if ( v4 < a3 )
      return 0LL;
    v5 = a3 * a2;
  }
  else
  {
    v5 = 0LL;
  }
  if ( -1LL - v5 >= 8 )
  {
    result = (struct ATL::CAtlPlex *)malloc(v5 + 8);
    if ( result )
    {
      *(_QWORD *)result = *a1;
      *a1 = result;
      return result;
    }
  }
  return 0LL;
}
