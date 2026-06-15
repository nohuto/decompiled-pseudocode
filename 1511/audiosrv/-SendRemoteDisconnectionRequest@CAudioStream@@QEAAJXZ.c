/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x18007DAC4
 * Callers:
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18007D90C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ @ 0x180001504 (-GetProcess@CAudioSession@@QEAAPEAUIAudioProcess@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_Si @ 0x18007DE7C (WPP_SF_Si.c)
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
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // r14
  unsigned int v11; // eax

  Process = CAudioSession::GetProcess(this[8]);
  if ( Process )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Si(*((_QWORD *)WPP_GLOBAL_Control + 2), v2, v4, *((_QWORD *)this[8] + 107), (char)this[37]);
    }
    v6 = *(_DWORD *)(*((_QWORD *)this[8] + 107) - 16LL);
    v7 = 2 * v6 + 2;
    v8 = 2 * v6 + 66;
    v9 = (unsigned __int16 *)operator new(v8);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)v9 = v8;
      *((_DWORD *)v9 + 6) = v7;
      *((_DWORD *)v9 + 1) = 0x8000;
      *((_QWORD *)v9 + 6) = this[37];
      StringCbCopyW(v9 + 32, v7, *((size_t **)this[8] + 107));
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Au,
          (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          (__int64)v10);
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
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Bu,
        (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
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
