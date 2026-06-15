/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x18007AEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x180079F30 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, CAudioSessionNotificationProcess *a2)
{
  int MediaEvent; // ebp
  int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  TraceLoggingHProvider v8; // rcx
  int v9; // eax
  unsigned __int16 v10; // dx

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 844LL);
  if ( v5 && v5 != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2);
      WPP_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids,
        v6);
    }
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v7);
  if ( !MediaEvent )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_22;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 47;
    goto LABEL_16;
  }
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 46;
LABEL_16:
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v9);
    v8 = WPP_GLOBAL_Control;
  }
  if ( MediaEvent < 0
    && v8 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v8 + 28) & 0x40) != 0
    && *((_BYTE *)v8 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v8 + 2), 0x31u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, MediaEvent);
  }
LABEL_22:
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(a2);
  return (unsigned int)MediaEvent;
}
