/*
 * XREFs of AUDIOSESSION_rundown @ 0x180003300
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180003368 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOSESSION_rundown(CServerAudioSessionControl *this)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 91LL, &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, this);
  }
  result = CServerAudioSessionControl::RemoveClientReference(this);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_D(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             92LL,
             &WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
             (unsigned int)result);
  }
  return result;
}
