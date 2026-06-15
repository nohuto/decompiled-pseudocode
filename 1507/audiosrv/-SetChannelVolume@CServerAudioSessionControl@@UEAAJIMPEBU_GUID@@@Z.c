/*
 * XREFs of ?SetChannelVolume@CServerAudioSessionControl@@UEAAJIMPEBU_GUID@@@Z @ 0x18007D7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ValidateAudioLevel @ 0x1800322AC (ValidateAudioLevel.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sdg @ 0x1800710E4 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetChannelVolume(
        CServerAudioSessionControl *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // [rsp+20h] [rbp-28h]
  double v11; // [rsp+28h] [rbp-20h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v11 = a3;
    v10 = a2;
    WPP_SF_Sdg(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x29u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      0LL);
  }
  if ( ValidateAudioLevel(a3) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const struct _GUID *, unsigned int, double))(**((_QWORD **)this + 9) + 344LL))(
             *((_QWORD *)this + 9),
             a2,
             v8,
             a4,
             v10,
             COERCE_DOUBLE(*(_QWORD *)&v11));
  if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control && (*(_BYTE *)(v7 + 28) & 0x40) != 0 && *(_BYTE *)(v7 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v7 + 16), 0x2Au, (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids, -2147024809);
  return 2147942487LL;
}
