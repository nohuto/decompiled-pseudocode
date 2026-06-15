/*
 * XREFs of PbmReportApplicationState @ 0x180017530
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUApplicationStateChangedContext@@@Z0@Z @ 0x1800178DC (--$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800190D8 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x18001E7D0 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, __int64 a2, unsigned int a3)
{
  signed int v5; // edi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  LPVOID *v9; // rbx
  unsigned int v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v12 = 0LL;
  if ( g_ApplicationManager )
  {
    v6 = RpcClientProcessSessionId(a1, &v11, &v13);
    if ( v6 )
    {
      v5 = (unsigned __int16)v6 | 0x80070000;
      if ( v6 <= 0 )
        return (unsigned int)v6;
    }
    else
    {
      v7 = ApplicationStateChangedContext::CreateInstance(a2, v13, a3, &v12);
      v9 = (LPVOID *)v12;
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = QueueApplicationManagerWorkItem<ApplicationStateChangedContext>(v8, v12);
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
        operator delete(v9, 0x10uLL);
      }
    }
  }
  return (unsigned int)v5;
}
