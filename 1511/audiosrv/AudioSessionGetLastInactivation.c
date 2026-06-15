/*
 * XREFs of AudioSessionGetLastInactivation @ 0x180079220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioSessionGetLastInactivation(_QWORD *a1, __int64 a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 160LL))(*a1, a2);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x41u, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, v2);
  }
  return (unsigned int)v2;
}
