/*
 * XREFs of DestroyThreadsTimers @ 0x14009A500
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTIMER *__fastcall DestroyThreadsTimers(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTIMER *result; // rax
  struct tagTIMER *v5; // rdi
  struct tagTIMER *v6; // rbx
  struct tagTIMER *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  struct tagTIMER *v10; // rcx

  if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
  {
    result = (struct tagTIMER *)W32GetUserSessionState(v3, v2);
    v5 = (struct tagTIMER *)((char *)result + 57536);
    v6 = (struct tagTIMER *)*((_QWORD *)result + 7192);
    while ( v6 != v5 )
    {
      v7 = (struct tagTIMER *)((char *)v6 - 72);
      v6 = *(struct tagTIMER **)v6;
      if ( (*((_DWORD *)v7 + 12) & 0x1000) != 0 )
      {
        result = (struct tagTIMER *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1224LL);
      }
      else if ( *((_QWORD *)v7 + 3) == a1 )
      {
        result = FreeTimer(v7);
        v6 = result;
      }
    }
  }
  else
  {
    result = (struct tagTIMER *)W32GetUserSessionState(v3, v2);
    v8 = (_QWORD *)((char *)result + 57536);
    v9 = (_QWORD *)*((_QWORD *)result + 7192);
    while ( v9 != v8 )
    {
      v10 = (struct tagTIMER *)(v9 - 9);
      v9 = (_QWORD *)*v9;
      if ( *((_QWORD *)v10 + 3) == a1 )
        result = FreeTimer(v10);
    }
  }
  return result;
}
