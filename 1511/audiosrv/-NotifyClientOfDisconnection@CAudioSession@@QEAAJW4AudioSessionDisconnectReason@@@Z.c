/*
 * XREFs of ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800754AC
 * Callers:
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800721B0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
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
  int MediaEvent; // ebx

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x5Cu,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
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
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x5Du,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        (__int64)v8);
    }
    MediaEvent = GenerateMediaEvent(v8, 0LL);
    operator delete(v8);
  }
  else
  {
    MediaEvent = -2147024882;
  }
  if ( MediaEvent < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x5Eu,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      MediaEvent);
  }
  return (unsigned int)MediaEvent;
}
