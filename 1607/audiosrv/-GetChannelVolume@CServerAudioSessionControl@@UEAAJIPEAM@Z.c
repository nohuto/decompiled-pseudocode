/*
 * XREFs of ?GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x180060280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids,
      0LL,
      a2);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 9) + 352LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
