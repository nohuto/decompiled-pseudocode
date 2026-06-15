/*
 * XREFs of ?OnSessionDisconnected@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4AudioServerSessionDisconnectReason@@@Z @ 0x18007B4C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 */

__int64 CAudioSessionManager::OnSessionDisconnected()
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, (__int64)&WPP_9fafadcf3cd06ed99ec4193376114500_Traceguids);
  }
  return 0LL;
}
