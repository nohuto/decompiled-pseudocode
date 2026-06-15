/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180016160
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180016FD0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 * Callees:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180025A10 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026400 (-AddClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x180079A8C (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x180079D40 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        bool a3,
        struct CAudioSession *a4)
{
  int (*v8)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rdi
  int v9; // eax
  _BOOL8 v10; // rdx
  unsigned int v11; // edi
  CAudioSession *v12; // rbx
  __int64 (__fastcall *v13)(CAudioSession *__hidden, bool); // rsi
  TraceLoggingHProvider v15; // rcx
  __int64 v16; // r14

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 12, a3, (_DWORD)this, (char)a4, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  v8 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(**((_QWORD **)this + 9) + 176LL);
  if ( v8 == CAudioSession::AddSessionNotification )
    v9 = CAudioSession::AddSessionNotification(*((CAudioSession **)this + 9), this);
  else
    v9 = ((__int64 (__fastcall *)(_QWORD, CServerAudioSessionControl *))v8)(*((_QWORD *)this + 9), this);
  v11 = v9;
  if ( v9 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, this, a4);
      v15 = WPP_GLOBAL_Control;
    }
    v16 = *((_QWORD *)this + 9);
    if ( !v16 )
      goto LABEL_24;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(*((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  else
  {
    v12 = (CAudioSession *)*((_QWORD *)this + 9);
    *((_BYTE *)this + 84) = a3;
    v13 = *(__int64 (__fastcall **)(CAudioSession *__hidden, bool))(*(_QWORD *)v12 + 272LL);
    if ( v13 == CAudioSession::AddClientReference )
    {
      CAudioSession::AddClientReference(v12, a3);
      return v11;
    }
    LOBYTE(v10) = a3;
    v13(v12, v10);
  }
  v15 = WPP_GLOBAL_Control;
LABEL_24:
  if ( (v11 & 0x80000000) != 0
    && v15 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v15 + 28) & 0x40) != 0
    && *((_BYTE *)v15 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v15 + 2), 13LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v11);
  }
  return v11;
}
