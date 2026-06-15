/*
 * XREFs of AudioSessionManagerDeleteAudioSessionClientNotification @ 0x18007BAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerDeleteAudioSessionClientNotification(_QWORD **a1)
{
  int v1; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 128LL))(**a1, (*a1)[1]);
  if ( v1 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x59u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v1);
  }
  return (unsigned int)v1;
}
