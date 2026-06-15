/*
 * XREFs of ?GetSessionFromSessionId@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAUIAudioSessionInfo@@@Z @ 0x180063D80
 * Callers:
 *     <none>
 * Callees:
 *     ?ToString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180005E40 (-ToString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@AT.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180010DAC (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180011770 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180050280 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800664A4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetSessionFromSessionId(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct IAudioSessionInfo **a3)
{
  CAudioSessionInstanceId *v6; // rax
  CAudioSessionInstanceId *v7; // r14
  int v8; // esi
  __int64 v9; // r8
  struct CAudioSession *v10; // rdi
  struct CAudioSession *v11; // rbx
  int AudioSession; // eax
  __int64 (__fastcall *v13)(CAudioSessionManager *); // rax
  struct CAudioSession *v15[2]; // [rsp+20h] [rbp-10h] BYREF
  CAudioSessionManager *v16; // [rsp+78h] [rbp+48h] BYREF

  v6 = (CAudioSessionInstanceId *)operator new(0x50uLL);
  if ( v6 )
    v7 = CAudioSessionInstanceId::CAudioSessionInstanceId(v6);
  else
    v7 = 0LL;
  if ( v7 )
    v8 = CAudioSessionInstanceId::Initialize(v7, a2);
  else
    v8 = -2147024882;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v15);
  if ( v8 >= 0 )
    v8 = CAudioEndpointId::ToString((__int64 *)v7, v15, v9);
  v16 = 0LL;
  v10 = v15[0];
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(CAudioSessionManagerProvider *, struct CAudioSession *, CAudioSessionManager **))(*(_QWORD *)this + 48LL))(
           this,
           v15[0],
           &v16);
  v11 = 0LL;
  v15[0] = 0LL;
  if ( v8 >= 0 )
  {
    AudioSession = CAudioSessionManager::FindAudioSession(v16, v7, v15);
    v11 = v15[0];
    v8 = AudioSession;
    if ( AudioSession >= 0 )
      v8 = (**(__int64 (__fastcall ***)(struct CAudioSession *, GUID *, struct IAudioSessionInfo **))v15[0])(
             v15[0],
             &GUID_1eb85143_ba0d_4e03_baf4_19220a4c6c6f,
             a3);
  }
  if ( v7 )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x50);
  }
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetSessionFromSessionId", 705, v8);
  if ( v11 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v16 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v16 + 16LL);
    if ( v13 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v16);
    else
      v13(v16);
  }
  ATL::CStringData::Release((struct CAudioSession *)((char *)v10 - 24));
  return (unsigned int)v8;
}
