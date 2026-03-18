/*
 * XREFs of DestroyWindowsTimers @ 0x1401C81D4
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401C7EE4 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x140099030 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagTIMER *__fastcall DestroyWindowsTimers(__int64 a1, __int64 a2)
{
  struct tagTIMER *result; // rax
  struct tagTIMER *v4; // rsi
  struct tagTIMER *v5; // rbx
  struct tagTIMER *v6; // rdi

  result = (struct tagTIMER *)W32GetUserSessionState(a1, a2);
  v4 = (struct tagTIMER *)((char *)result + 57536);
  v5 = (struct tagTIMER *)*((_QWORD *)result + 7192);
  while ( v5 != v4 )
  {
    v6 = (struct tagTIMER *)((char *)v5 - 72);
    v5 = *(struct tagTIMER **)v5;
    if ( (*((_DWORD *)v6 + 12) & 0x1000) != 0 )
    {
      result = (struct tagTIMER *)MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1277LL);
    }
    else if ( *((_QWORD *)v6 + 13) == a1 )
    {
      if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
      {
        result = FreeTimer(v6);
        v5 = result;
      }
      else
      {
        result = FreeTimer(v6);
      }
    }
  }
  return result;
}
