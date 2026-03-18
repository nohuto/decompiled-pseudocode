/*
 * XREFs of ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1C0150220
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C0020220 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 */

__int64 __fastcall DetermineDefaultTopology(int a1, enum MultiScreenShellCapabilities *a2)
{
  char v3; // di
  int MultiScreenDefaultShellTopology; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int16 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = (char)a2;
  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v12, a2);
  v9 = MultiScreenDefaultShellTopology;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = v12;
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdAssertion(v10);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    if ( !a1 )
      return 4LL;
    result = 3LL;
    if ( v3 )
      return 4LL;
  }
  return result;
}
