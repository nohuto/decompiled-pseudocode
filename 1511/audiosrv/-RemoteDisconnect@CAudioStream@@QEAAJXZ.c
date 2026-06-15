/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18007D90C
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x1800725C0 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800727E0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180001504 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x18007DAC4 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(CAudioStream *this)
{
  DWORD v2; // eax
  signed int v3; // esi
  struct IAudioProcess *Process; // r14
  DWORD v5; // edi
  DWORD v6; // ecx
  signed int LastError; // eax
  int v8; // eax
  HANDLE Handles; // [rsp+20h] [rbp-18h] BYREF

  v2 = WaitForSingleObject(*((HANDLE *)this + 36), 0x3E8u);
  if ( v2 == -1 )
    goto LABEL_8;
  if ( v2 != 258 )
  {
    Process = CAudioSession::GetProcess(*((CAudioSession **)this + 8));
    v3 = CAudioStream::SendRemoteDisconnectionRequest(this);
    if ( v3 < 0 )
      goto LABEL_14;
    v5 = 1;
    Handles = (HANDLE)*((_QWORD *)this + 35);
    if ( (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 160LL))(Process) )
      v5 = 2;
    v6 = WaitForMultipleObjects(v5, &Handles, 0, 0x3E8u);
    if ( v6 != -1 )
    {
      v8 = v3;
      if ( v6 == 258 )
        v8 = -2147467259;
      v3 = v8;
LABEL_13:
      if ( v3 >= 0 )
        return (unsigned int)v3;
      goto LABEL_14;
    }
LABEL_8:
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_13;
  }
  v3 = -2147467259;
LABEL_14:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x48u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v3);
  }
  return (unsigned int)v3;
}
