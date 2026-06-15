/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180018B50
 * Callers:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180019EA0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 * Callees:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18000E7C0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18000F1B0 (-AddClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x18007EB20 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        char a3,
        struct CAudioSession *a4)
{
  __int64 (__fastcall *v8)(CAudioSession *, struct ISessionInternalEvents *); // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  CAudioSession *v12; // rbx
  __int64 (__fastcall *v13)(CAudioSession *, char); // rsi
  __int64 v15; // rcx
  __int64 v16; // r14

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      11,
      (unsigned int)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qqS(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 12, a3, (_DWORD)this, (char)a4, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  v8 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(**((_QWORD **)this + 9) + 176LL);
  if ( v8 == CAudioSession::AddSessionNotification )
    v9 = CAudioSession::AddSessionNotification(*((CAudioSession **)this + 9), this);
  else
    v9 = v8(*((CAudioSession **)this + 9), this);
  v11 = v9;
  if ( v9 )
  {
    v15 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        14LL,
        &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        this,
        a4);
      v15 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
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
    v13 = *(__int64 (__fastcall **)(CAudioSession *, char))(*(_QWORD *)v12 + 272LL);
    if ( v13 == CAudioSession::AddClientReference )
    {
      CAudioSession::AddClientReference(v12, a3);
      return v11;
    }
    LOBYTE(v10) = a3;
    v13(v12, v10);
  }
  v15 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_24:
  if ( (v11 & 0x80000000) != 0
    && (struct _GUID *)v15 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v15 + 28) & 0x40) != 0
    && *(_BYTE *)(v15 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v15 + 16), 13LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v11);
  }
  return v11;
}
