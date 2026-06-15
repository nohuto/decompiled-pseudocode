/*
 * XREFs of ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023D90
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180023EC0 (-GetStreamGroup@CDeviceGraphManager@@IEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPT.c)
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180024440 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::CreateStream(
        CDeviceGraphManager *this,
        struct IAudioStreamInfo *a2,
        int a3,
        enum _AUDCLNT_SHAREMODE a4,
        struct IAudioGraphCallback *a5,
        unsigned int a6,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a7,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a8,
        struct StreamGroupParams *a9,
        struct SYSTEM_AUDIO_STREAM *a10)
{
  RPC_STATUS v11; // eax
  CDeviceGraphManager *v12; // rcx
  signed int StreamGroup; // ebx
  CSharedStreamGroupProxy *v14; // rcx
  __int64 (__usercall *v15)@<rax>(CSharedStreamGroupProxy *__hidden@<rcx>, struct IAudioStreamInfo *@<rdx>, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *@<r8>, struct IAudioGraphCallback *@<r9>, struct SYSTEM_AUDIO_STREAM *); // rax
  int Stream; // eax
  CSharedStreamGroupProxy *v17; // rcx
  CSharedStreamGroupProxy *v19; // [rsp+30h] [rbp-18h] BYREF

  if ( (a3 & 0x1800004) != 0
    || (a3 & 0xFFF8) != 0
    || a4 == AUDCLNT_SHAREMODE_EXCLUSIVE && a3 < 0
    || (a3 & 0x88000000) == 0x8000000 )
  {
    return 2147942487LL;
  }
  v11 = RpcImpersonateClient(0LL);
  StreamGroup = v11;
  if ( v11 > 0 )
    StreamGroup = (unsigned __int16)v11 | 0x80070000;
  if ( StreamGroup >= 0 )
  {
    v19 = 0LL;
    StreamGroup = CDeviceGraphManager::GetStreamGroup(v12, a9, a6, a7, &v19);
    if ( StreamGroup < 0
      || ((v14 = v19,
           *((_QWORD *)a8 + 12) = *(_QWORD *)a9,
           v15 = *(__int64 (__usercall **)@<rax>(CSharedStreamGroupProxy *__hidden@<rcx>, struct IAudioStreamInfo *@<rdx>, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *@<r8>, struct IAudioGraphCallback *@<r9>, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)v14 + 88LL),
           v15 != CSharedStreamGroupProxy::CreateStream)
        ? (Stream = ((__int64 (__fastcall *)(CSharedStreamGroupProxy *, struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *))v15)(
                      v14,
                      a2,
                      a8,
                      a5))
        : (Stream = CSharedStreamGroupProxy::CreateStream(v14, a2, a8, a5, a10)),
          StreamGroup = Stream,
          Stream < 0) )
    {
      v17 = v19;
    }
    else
    {
      v17 = 0LL;
      *((_QWORD *)a10 + 8) = v19;
    }
    if ( v17 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(CSharedStreamGroupProxy *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  RpcRevertToSelf();
  return (unsigned int)StreamGroup;
}
