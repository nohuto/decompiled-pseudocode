/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x180026448
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026320 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039F50 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035880 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  int TickCount64; // eax
  unsigned int v4; // esi
  TraceLoggingHProvider v5; // rcx
  void (__fastcall *v6)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rdi
  unsigned __int16 v7; // dx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 416);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
  if ( *((_DWORD *)this + 22) )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_14;
    }
    v7 = 119;
LABEL_33:
    WPP_SF_(*((_QWORD *)v5 + 2), v7, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids);
    goto LABEL_14;
  }
  if ( *((int *)this + 117) > 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_14;
    }
    v7 = 120;
    goto LABEL_33;
  }
  if ( *((_BYTE *)this + 370) )
  {
    v5 = WPP_GLOBAL_Control;
    goto LABEL_15;
  }
  TickCount64 = GetTickCount64();
  v4 = TickCount64 - *((_DWORD *)this + 114);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      121,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((_QWORD *)this + 107),
      TickCount64 - *((_BYTE *)this + 456));
    v5 = WPP_GLOBAL_Control;
  }
  if ( *((int *)this + 116) > 0 )
  {
    if ( v5 == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)v5 + 28) & 0x40) == 0
      || *((_BYTE *)v5 + 25) < 4u )
    {
      goto LABEL_14;
    }
    v7 = 122;
    goto LABEL_33;
  }
  if ( v4 < *((_DWORD *)this + 95) - 16 )
  {
    if ( v5 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v5 + 28) & 0x40) != 0
      && *((_BYTE *)v5 + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)v5 + 2), 123LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, v4);
    }
    goto LABEL_14;
  }
LABEL_15:
  if ( v5 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v5 + 28) & 0x40) != 0
    && *((_BYTE *)v5 + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)v5 + 2), 124LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, *((_QWORD *)this + 107));
  }
  v6 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
  if ( v6 == CPerStreamVolumeAudioSession::NewState )
    CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateExpired);
  else
    v6(this, AudioSessionStateExpired);
LABEL_14:
  LeaveCriticalSection(v1);
}
