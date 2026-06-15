/*
 * XREFs of PbmReportAppClosing @ 0x180018570
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x1800181C4 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18001B1C4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmReportAppClosing(void *a1, const unsigned __int16 *a2)
{
  __int64 result; // rax
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  result = 2147549183LL;
  if ( g_PlaybackManager )
  {
    v4 = RpcClientProcessSessionId(a1, &v7, &v6);
    v5 = v4;
    if ( v4 )
    {
      result = (unsigned __int16)v4 | 0x80070000;
      if ( v5 <= 0 )
        return (unsigned int)v5;
    }
    else
    {
      return CPlaybackManager::OnAppClosed(0LL, a2, v6);
    }
  }
  return result;
}
