/*
 * XREFs of s_pbmReportAppClosing @ 0x180003DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180003D58 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x18000A160 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall s_pbmReportAppClosing(void *a1, const unsigned __int16 *a2)
{
  __int64 result; // rax
  CPlaybackManager *v4; // rcx
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+20h] BYREF

  result = 2147549183LL;
  if ( g_PlaybackManager )
  {
    result = RpcClientProcessSessionId(a1, &v6, &v5);
    if ( (_DWORD)result )
    {
      if ( (int)result > 0 )
        return (unsigned __int16)result | 0x80070000;
    }
    else
    {
      return CPlaybackManager::OnAppClosed(v4, a2, v5);
    }
  }
  return result;
}
