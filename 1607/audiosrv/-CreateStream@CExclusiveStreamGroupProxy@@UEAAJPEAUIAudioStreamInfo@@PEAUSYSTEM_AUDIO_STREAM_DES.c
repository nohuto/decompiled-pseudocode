/*
 * XREFs of ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180074B80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::CreateStream(
        CExclusiveStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v8; // ebp
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx

  v8 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 8) + 32LL))(
         *((_QWORD *)this + 8),
         a3,
         a4,
         a5);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_744b99acf30f393db0480888c2449482_Traceguids,
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
    if ( *((struct IAudioGraphCallback **)this + 39) != a4 )
    {
      if ( a4 )
        (*(void (__fastcall **)(struct IAudioGraphCallback *))(*(_QWORD *)a4 + 8LL))(a4);
      v12 = *((_QWORD *)this + 39);
      *((_QWORD *)this + 39) = a4;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_744b99acf30f393db0480888c2449482_Traceguids,
        (__int64)this - 8);
    }
  }
  return (unsigned int)v8;
}
