/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x18004F59C
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180062150 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x18004F4CC (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x18004F56C (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_qS @ 0x180055818 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        char a4,
        struct CServerAudioSessionControl **a5)
{
  CServerAudioSessionControl *v8; // rax
  __int64 v9; // r8
  CServerAudioSessionControl *v10; // rbx
  int v11; // edi

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, 0LL);
  }
  v8 = (CServerAudioSessionControl *)operator new(0x58uLL);
  if ( v8 )
    v10 = CServerAudioSessionControl::CServerAudioSessionControl(v8);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 469, v11);
    goto LABEL_17;
  }
  LOBYTE(v9) = a4;
  v11 = (*(__int64 (__fastcall **)(CServerAudioSessionControl *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v10 + 256LL))(
          v10,
          a3,
          v9,
          a2);
  if ( v11 < 0 )
    goto LABEL_16;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16,
      (unsigned int)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids,
      (_DWORD)v10,
      0LL);
  }
  CServerAudioSessionControl::AddClientReference(v10);
  *a5 = v10;
LABEL_17:
  if ( v10 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v11;
}
