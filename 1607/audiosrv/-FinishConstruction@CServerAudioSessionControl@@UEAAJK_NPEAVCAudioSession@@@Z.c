/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x18000F100
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800102F0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180012FC0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180013A10 (-AddClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SS @ 0x1800615EC (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x180061808 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        bool a3,
        struct CAudioSession *a4)
{
  CAudioSession *v8; // rcx
  int (*v9)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v10; // eax
  int v11; // edi
  CAudioSession *v12; // rcx
  __int64 (__fastcall *v13)(CAudioSession *__hidden, bool); // rax
  __int64 (__fastcall *v14)(CAudioSession *__hidden, bool); // rdx
  __int64 v16; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 12, a3, (_DWORD)this, (char)a4, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  v8 = (CAudioSession *)*((_QWORD *)this + 9);
  v9 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v8 + 176LL);
  if ( v9 == CAudioSession::AddSessionNotification )
    v10 = CAudioSession::AddSessionNotification(v8, this);
  else
    v10 = ((__int64 (__fastcall *)(CAudioSession *, CServerAudioSessionControl *))v9)(v8, this);
  v11 = v10;
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
        this,
        a4);
    }
    v16 = *((_QWORD *)this + 9);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  else
  {
    v12 = (CAudioSession *)*((_QWORD *)this + 9);
    v14 = CAudioSession::AddClientReference;
    *((_BYTE *)this + 84) = a3;
    v13 = *(__int64 (__fastcall **)(CAudioSession *__hidden, bool))(*(_QWORD *)v12 + 272LL);
    LOBYTE(v14) = a3;
    if ( v13 == CAudioSession::AddClientReference )
    {
      CAudioSession::AddClientReference(v12, a3);
      return (unsigned int)v11;
    }
    v13(v12, (bool)v14);
  }
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::FinishConstruction", 0x82u, v11);
  return (unsigned int)v11;
}
