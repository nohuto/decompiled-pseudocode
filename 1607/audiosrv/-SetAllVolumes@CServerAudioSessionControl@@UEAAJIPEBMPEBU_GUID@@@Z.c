/*
 * XREFs of ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x180060B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetAllVolumes(
        CServerAudioSessionControl *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_02a005b273c630b7ddf937521d6439fa_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const float *, const struct _GUID *))(**((_QWORD **)this + 9) + 360LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4);
}
