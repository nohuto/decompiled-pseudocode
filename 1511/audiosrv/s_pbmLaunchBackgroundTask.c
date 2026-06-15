/*
 * XREFs of s_pbmLaunchBackgroundTask @ 0x180091570
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18002C620 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x18009D738 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z.c)
 */

__int64 __fastcall s_pbmLaunchBackgroundTask(void *a1, const unsigned __int16 *a2, const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0;
  v8[0] = 0;
  if ( g_ApplicationManager )
  {
    v6 = RpcClientProcessSessionId(a1, &v9, v8);
    if ( v6 )
    {
      if ( v6 > 0 )
        return (unsigned __int16)v6 | 0x80070000;
    }
    else
    {
      return (unsigned int)TsSessionLaunchBackgroundTask(v9, a2, a3);
    }
    return (unsigned int)v6;
  }
  return v3;
}
