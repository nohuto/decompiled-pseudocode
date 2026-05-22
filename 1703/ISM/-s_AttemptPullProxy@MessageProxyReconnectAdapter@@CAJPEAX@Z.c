/*
 * XREFs of ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x180095D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180095DC4 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::s_AttemptPullProxy(MessageProxyReconnectAdapter *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = MessageProxyReconnectAdapter::AttemptPullProxy(a1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -2147024882 )
        MEMORY[0] = 180;
      MEMORY[0] = 180;
    }
  }
  else
  {
    result = 2147549183LL;
    MEMORY[0] = 179;
  }
  return result;
}
