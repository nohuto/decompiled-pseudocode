/*
 * XREFs of ?GetMeteringChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x180060460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetMeteringChannelCount(
        CServerAudioSessionControl *this,
        unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 384LL))(
           *((_QWORD *)this + 9),
           a2);
}
