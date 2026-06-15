/*
 * XREFs of PbmReportApplicationState @ 0x180001E2C
 * Callers:
 *     s_pbmReportApplicationState @ 0x180001E20 (s_pbmReportApplicationState.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUApplicationStateChangedContext@@@Z0@Z @ 0x180001EC4 (--$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x1800039C4 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x180007F94 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rcx
  CHostedAppInteractivity *v10; // rdi
  unsigned int v12; // [rsp+20h] [rbp-18h] BYREF
  CHostedAppInteractivity *v13; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v13 = 0LL;
  if ( g_ApplicationManager )
  {
    v6 = RpcClientProcessSessionId(a1, &v12, &v14);
    v5 = v6;
    if ( v6 )
    {
      if ( v6 > 0 )
        return (unsigned __int16)v6 | 0x80070000;
    }
    else
    {
      v7 = ApplicationStateChangedContext::CreateInstance(a2, v14, a3, &v13);
      v10 = v13;
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = QueueApplicationManagerWorkItem<ApplicationStateChangedContext>(v9, v13);
        if ( v5 >= 0 )
          v10 = 0LL;
      }
      if ( v10 )
        CHostedAppInteractivity::`scalar deleting destructor'(v10, v8);
    }
  }
  return (unsigned int)v5;
}
