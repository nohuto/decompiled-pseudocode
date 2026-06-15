/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008F0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x1800681C0 (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
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

  v8 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 9) + 32LL))(
         *((_QWORD *)this + 9),
         a3,
         a4,
         a5);
  if ( v8 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x13u,
        (__int64)&WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
        v8);
    }
  }
  else
  {
    *(_OWORD *)((char *)this + 168) = *(_OWORD *)a3;
    *(_OWORD *)((char *)this + 184) = *((_OWORD *)a3 + 1);
    *(_OWORD *)((char *)this + 200) = *((_OWORD *)a3 + 2);
    *(_OWORD *)((char *)this + 216) = *((_OWORD *)a3 + 3);
    *(_OWORD *)((char *)this + 232) = *((_OWORD *)a3 + 4);
    *(_OWORD *)((char *)this + 248) = *((_OWORD *)a3 + 5);
    *(_OWORD *)((char *)this + 264) = *((_OWORD *)a3 + 6);
    *(_OWORD *)((char *)this + 280) = *((_OWORD *)a3 + 7);
    *(_OWORD *)((char *)this + 296) = *((_OWORD *)a3 + 8);
    v9 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 30) = v9;
    v10 = *(unsigned __int16 *)(v9 + 16);
    v11 = *((_QWORD *)this + 5);
    *((_DWORD *)this + 58) = v10 + 18;
    *((_QWORD *)this + 33) = v11;
    Microsoft::WRL::ComPtr<IStreamGroup>::operator=((__int64 *)this + 39, (__int64)a4);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x14u,
        (__int64)&WPP_18cbaf40400d08387fc9801c804405c7_Traceguids,
        (char *)this - 8);
    }
  }
  return (unsigned int)v8;
}
