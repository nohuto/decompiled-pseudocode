/*
 * XREFs of AudioSessionManagerAddAudioSessionClientNotification @ 0x18007B9E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionManagerAddAudioSessionClientNotification(__int64 a1)
{
  _QWORD *v1; // r14
  int v2; // ebx

  v1 = *(_QWORD **)a1;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8LL) + 104LL))(*(_QWORD *)(*(_QWORD *)a1 + 8LL)) )
  {
    v2 = -2147024891;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 120LL))(*v1, v1[1]);
    if ( v2 >= 0 )
      return (unsigned int)v2;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x58u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, v2);
  }
  return (unsigned int)v2;
}
