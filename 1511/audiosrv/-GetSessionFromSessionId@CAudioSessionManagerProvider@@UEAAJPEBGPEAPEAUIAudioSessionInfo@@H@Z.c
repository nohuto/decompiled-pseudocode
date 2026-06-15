/*
 * XREFs of ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@H@Z @ 0x18007C690
 * Callers:
 *     <none>
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180011BD0 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180014328 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180014D68 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@H@Z @ 0x1800178A0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18007EB78 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetSessionFromSessionId(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IAudioSessionInfo **a3,
        int a4)
{
  CAudioSessionInstanceId *v8; // rax
  CAudioSessionInstanceId *v9; // r15
  int v10; // r14d
  struct CAudioSession *v11; // rdi
  struct CAudioSession *v12; // rbx
  int AudioSession; // eax
  __int64 (__fastcall *v14)(CAudioSessionManager *); // rbx
  CAudioSessionManager *v16; // [rsp+20h] [rbp-10h] BYREF
  struct CAudioSession *v17; // [rsp+28h] [rbp-8h] BYREF

  v8 = (CAudioSessionInstanceId *)operator new(0x50uLL);
  if ( v8 )
    v9 = CAudioSessionInstanceId::CAudioSessionInstanceId(v8);
  else
    v9 = 0LL;
  if ( v9 )
    v10 = CAudioSessionInstanceId::Initialize(v9, a2);
  else
    v10 = -2147024882;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v17);
  if ( v10 >= 0 )
    v10 = CAudioEndpointId::ToString(v9, &v17);
  v16 = 0LL;
  v11 = v17;
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(CAudioSessionManagerProvider *, struct CAudioSession *, CAudioSessionManager **))(*(_QWORD *)this + 48LL))(
            this,
            v17,
            &v16);
  v12 = 0LL;
  v17 = 0LL;
  if ( v10 >= 0 )
  {
    AudioSession = CAudioSessionManager::FindAudioSession(v16, v9, &v17, a4);
    v12 = v17;
    v10 = AudioSession;
    if ( AudioSession >= 0 )
      v10 = (**(__int64 (__fastcall ***)(struct CAudioSession *, GUID *, struct IAudioSessionInfo **))v17)(
              v17,
              &GUID_39182157_2a5f_4dfe_8c14_0d483f84b4fa,
              a3);
  }
  if ( v9 )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId(v9);
    operator delete(v9);
  }
  if ( v10 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids, v10);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v16 )
  {
    v14 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v16 + 16LL);
    if ( v14 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v16);
    else
      v14(v16);
  }
  ATL::CStringData::Release((struct CAudioSession *)((char *)v11 - 24));
  return (unsigned int)v10;
}
