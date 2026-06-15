/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008C690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18006679C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        CExclusiveStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax

  v8 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 8) + 32LL))(
         *((_QWORD *)this + 8),
         a3,
         a4,
         a5);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x17u,
        (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
        v8);
    }
  }
  else
  {
    *((_OWORD *)this + 10) = *(_OWORD *)a3;
    *((_OWORD *)this + 11) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 12) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 13) = *((_OWORD *)a3 + 3);
    *((_OWORD *)this + 14) = *((_OWORD *)a3 + 4);
    *((_OWORD *)this + 15) = *((_OWORD *)a3 + 5);
    *((_OWORD *)this + 16) = *((_OWORD *)a3 + 6);
    *((_OWORD *)this + 17) = *((_OWORD *)a3 + 7);
    *((_OWORD *)this + 18) = *((_OWORD *)a3 + 8);
    *((_QWORD *)this + 38) = *((_QWORD *)a3 + 18);
    v9 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 30) = v9;
    v10 = *(unsigned __int16 *)(v9 + 16);
    v11 = *((_QWORD *)this + 5);
    *((_DWORD *)this + 58) = v10 + 18;
    *((_QWORD *)this + 33) = v11;
    Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)this + 39, (__int64)a4);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
        (__int64)this - 8);
    }
  }
  return (unsigned int)v8;
}
