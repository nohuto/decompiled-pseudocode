/*
 * XREFs of AudioSessionManagerDestroy @ 0x180034270
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180016770 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x180032AC0 (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall AudioSessionManagerDestroy(CAudioSessionManager ***a1)
{
  CAudioSessionManager **v1; // rbx
  TraceLoggingHProvider v3; // rcx
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rsi

  v1 = *a1;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 78LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, *v1);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v3 + 28) & 0x40) != 0
      && *((_BYTE *)v3 + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)v3 + 2), 79LL, &WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids, *v1);
    }
  }
  v4 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)*v1 + 16LL);
  if ( v4 == CAudioSessionManager::Release )
    CAudioSessionManager::Release(*v1);
  else
    v4(*v1);
  CAudioSessionManagerProxy::`scalar deleting destructor'((CAudioSessionManagerProxy *)v1);
  *a1 = 0LL;
  return 0LL;
}
