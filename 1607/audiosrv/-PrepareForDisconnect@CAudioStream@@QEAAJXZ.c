/*
 * XREFs of ?PrepareForDisconnect@CAudioStream@@QEAAJXZ @ 0x180064C58
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18005ADCC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180012E30 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CAudioStream::PrepareForDisconnect(CAudioStream *this)
{
  signed int v2; // ebp
  struct IAudioProcess *Process; // rax
  void *v4; // rsi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax
  signed int LastError; // eax

  v2 = 0;
  Process = CAudioSession::GetProcess(*((CAudioSession **)this + 8));
  v4 = (void *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 168LL))(Process);
  CurrentProcess = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( !DuplicateHandle(v6, v4, CurrentProcess, (LPHANDLE)this + 9, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 < 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Eu,
          (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
          v2);
      }
      AudSrvTraceLoggingErrorHelper("CAudioStream::PrepareForDisconnect", 2048, v2);
    }
  }
  return (unsigned int)v2;
}
