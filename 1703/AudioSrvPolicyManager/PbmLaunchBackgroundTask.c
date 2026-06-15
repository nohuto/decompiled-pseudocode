/*
 * XREFs of PbmLaunchBackgroundTask @ 0x1800175F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800190D8 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x18001AA6C (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 */

__int64 __fastcall PbmLaunchBackgroundTask(
        void *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v11[5]; // [rsp+24h] [rbp-14h] BYREF

  v4 = 0;
  v10 = 0;
  v11[0] = 0;
  if ( g_ApplicationManager )
  {
    v8 = RpcClientProcessSessionId(a1, &v10, v11);
    if ( v8 )
    {
      v4 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      return (unsigned int)TsSessionLaunchBackgroundTask(v10, a2, a3, a4);
    }
  }
  return v4;
}
