/*
 * XREFs of ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180062790
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ??1CAudioSessionNotificationProcess@@QEAA@XZ @ 0x180061948 (--1CAudioSessionNotificationProcess@@QEAA@XZ.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManagerNotification::Invoke(__int64 a1, CAudioSessionNotificationProcess *a2)
{
  int MediaEvent; // edi
  int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned __int16 v10; // dx

  MediaEvent = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 844LL);
  if ( v5 && v5 != (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2);
      WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids);
    }
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), v6, v7, v8);
  if ( !MediaEvent )
  {
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_19;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 42;
    goto LABEL_16;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2);
    v10 = 41;
LABEL_16:
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, (__int64)&WPP_b87c05f66e103c86bed05124f7970fa0_Traceguids, v9);
  }
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerNotification::Invoke", 1064, MediaEvent);
LABEL_19:
  CAudioSessionNotificationProcess::~CAudioSessionNotificationProcess(a2);
  return (unsigned int)MediaEvent;
}
