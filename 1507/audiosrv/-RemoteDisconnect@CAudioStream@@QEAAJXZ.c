/*
 * XREFs of ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x1800827F4
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJPEAV?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@@Z @ 0x180077940 (-DisconnectStreamList@CAudioSession@@AEAAJPEAV-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PE.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x180077B50 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180082900 (-SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioStream::RemoteDisconnect(CAudioStream *this)
{
  struct IAudioProcess *Process; // r14
  signed int v3; // esi
  DWORD v4; // edi
  DWORD v5; // eax
  signed int LastError; // eax
  HANDLE Handles; // [rsp+20h] [rbp-18h] BYREF

  Process = CAudioSession::GetProcess(*((CAudioSession **)this + 9));
  v3 = CAudioStream::SendRemoteDisconnectionRequest(this);
  if ( v3 < 0 )
    goto LABEL_12;
  v4 = 1;
  Handles = (HANDLE)*((_QWORD *)this + 36);
  if ( (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 160LL))(Process) )
    v4 = 2;
  v5 = WaitForMultipleObjects(v4, &Handles, 0, 0x3E8u);
  if ( v5 == -1 )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  else if ( v5 == 258 )
  {
    v3 = -2147467259;
  }
  if ( v3 < 0 )
  {
LABEL_12:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Cu,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
