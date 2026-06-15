/*
 * XREFs of PbmReportApplicationState @ 0x1800193D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUApplicationStateChangedContext@@@Z0@Z @ 0x180019790 (--$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x180021CE0 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, __int64 a2, unsigned int a3)
{
  signed int v5; // edi
  int v6; // eax
  int Instance; // eax
  __int64 v8; // rcx
  LPVOID *v9; // rbx
  HANDLE ProcessHeap; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h] BYREF
  LPVOID lpMem[2]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  lpMem[0] = 0LL;
  if ( g_ApplicationManager )
  {
    v6 = RpcClientProcessSessionId(a1, &v12, &v14);
    if ( v6 )
    {
      v5 = (unsigned __int16)v6 | 0x80070000;
      if ( v6 <= 0 )
        return (unsigned int)v6;
    }
    else
    {
      Instance = ApplicationStateChangedContext::CreateInstance(a2, v14, a3, lpMem);
      v9 = (LPVOID *)lpMem[0];
      v5 = Instance;
      if ( Instance >= 0 )
      {
        v5 = QueueApplicationManagerWorkItem<ApplicationStateChangedContext>(v8, lpMem[0]);
        if ( v5 >= 0 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        if ( *v9 )
        {
          CoTaskMemFree(*v9);
          *v9 = 0LL;
        }
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v9);
      }
    }
  }
  return (unsigned int)v5;
}
