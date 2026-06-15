/*
 * XREFs of ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x18005D6F0
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18005AA40 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::NotifyClientOfDisconnection(
        const wchar_t **this,
        enum AudioSessionDisconnectReason a2)
{
  const wchar_t *v4; // rax
  unsigned int v5; // esi
  unsigned int v6; // ebp
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int MediaEvent; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this[107]);
  }
  v4 = this[107];
  v5 = 2 * *((_DWORD *)v4 - 4) + 2;
  v6 = 2 * *((_DWORD *)v4 - 4) + 66;
  v7 = (unsigned __int16 *)operator new(v6);
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)v7 = v6;
    *((_DWORD *)v7 + 6) = v5;
    *((_DWORD *)v7 + 1) = 32;
    *((_DWORD *)v7 + 12) = a2;
    StringCbCopyW(v7 + 32, v5, (size_t *)this[107]);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Du,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        (__int64)v8);
    }
    MediaEvent = GenerateMediaEvent(v8, 0LL, v9, v10);
    operator delete(v8);
  }
  else
  {
    MediaEvent = -2147024882;
  }
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::NotifyClientOfDisconnection", 2917, MediaEvent);
  return (unsigned int)MediaEvent;
}
