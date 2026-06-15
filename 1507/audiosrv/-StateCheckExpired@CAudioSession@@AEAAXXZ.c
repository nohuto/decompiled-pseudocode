/*
 * XREFs of ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x18000F1F8
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x18000F0D0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800320C0 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

void __fastcall CAudioSession::StateCheckExpired(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  DWORD TickCount; // eax
  unsigned int v4; // esi
  __int64 v5; // rcx
  void (__fastcall *v6)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rdi
  unsigned __int16 v7; // dx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 272);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 272));
  if ( *((_DWORD *)this + 22) )
  {
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_16;
    }
    v7 = 119;
LABEL_33:
    WPP_SF_(*(_QWORD *)(v5 + 16), v7, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids);
    goto LABEL_16;
  }
  if ( *((int *)this + 80) > 0 )
  {
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_16;
    }
    v7 = 120;
    goto LABEL_33;
  }
  if ( *((_BYTE *)this + 226) )
  {
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_10:
    if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x40) != 0 && *(_BYTE *)(v5 + 25) >= 4u )
      WPP_SF_S(*(_QWORD *)(v5 + 16), 124LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, *((_QWORD *)this + 88));
    v6 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 88LL);
    if ( v6 == CPerStreamVolumeAudioSession::NewState )
      CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateExpired);
    else
      v6(this, AudioSessionStateExpired);
    goto LABEL_16;
  }
  TickCount = GetTickCount();
  v4 = TickCount - *((_DWORD *)this + 78);
  v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      121,
      (unsigned int)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((_QWORD *)this + 88),
      TickCount - *((_BYTE *)this + 312));
    v5 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((int *)this + 79) > 0 )
  {
    if ( (struct _GUID *)v5 == &WPP_GLOBAL_Control || (*(_BYTE *)(v5 + 28) & 0x40) == 0 || *(_BYTE *)(v5 + 25) < 4u )
      goto LABEL_16;
    v7 = 122;
    goto LABEL_33;
  }
  if ( v4 >= *((_DWORD *)this + 59) - 16 )
    goto LABEL_10;
  if ( (struct _GUID *)v5 != &WPP_GLOBAL_Control && (*(_BYTE *)(v5 + 28) & 0x40) != 0 && *(_BYTE *)(v5 + 25) >= 4u )
    WPP_SF_D(*(_QWORD *)(v5 + 16), 123LL, &WPP_4588ba28106fc91c9afa31139958994b_Traceguids, v4);
LABEL_16:
  LeaveCriticalSection(v1);
}
