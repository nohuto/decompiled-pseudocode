/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180082900
 * Callers:
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x1800827F4 (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180004450 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002EF60 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_Si @ 0x180082FF8 (WPP_SF_Si.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioSession **this)
{
  int v2; // edx
  struct IAudioProcess *Process; // rsi
  int v4; // r8d
  int MediaEvent; // edi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebp
  char *v9; // rax
  char *v10; // r14
  unsigned int v11; // eax

  Process = CAudioSession::GetProcess(this[9]);
  if ( Process )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_Si(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        v2,
        v4,
        *((_QWORD *)this[9] + 88),
        (char)this[37]);
    }
    v6 = *(_DWORD *)(*((_QWORD *)this[9] + 88) - 16LL);
    v7 = 2 * v6 + 2;
    v8 = 2 * v6 + 66;
    v9 = (char *)operator new(v8);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v8;
      *((_DWORD *)v9 + 6) = v7;
      *((_DWORD *)v9 + 1) = 0x8000;
      *((_QWORD *)v9 + 6) = this[37];
      StringCbCopyW(v9 + 64, v7, *((char **)this[9] + 88));
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x4Eu,
          (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
          v10);
      }
      v11 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 40LL))(Process);
      MediaEvent = GenerateMediaEvent(v10, v11);
      operator delete(v10);
    }
    else
    {
      MediaEvent = -2147024882;
    }
    if ( MediaEvent < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Fu,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        MediaEvent);
    }
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)Process + 16LL))(Process);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)MediaEvent;
}
