/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x1403B56AC
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1403B55B0 (PopSessionWinlogonNotification.c)
 *     PopGetLockConsoleTimeout @ 0x1404F3300 (PopGetLockConsoleTimeout.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 PopGetLockConsoleTimeoutUnsafe()
{
  unsigned int v0; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = PopAdaptiveLockConsoleTimeout;
  if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
  {
    if ( PopEnforceConsoleLockScreenTimeout )
    {
      if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        TlgWrite(&pCallbackContext, &unk_140254D0B, 0LL, 0LL, 2u, &pData);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
