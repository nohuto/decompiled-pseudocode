/*
 * XREFs of ?SetIconPath@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18007D990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetIconPath(
        CServerAudioSessionControl *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3)
{
  unsigned __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x3E8 )
    return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, const struct _GUID *))(**((_QWORD **)this + 9)
                                                                                             + 232LL))(
             *((_QWORD *)this + 9),
             a2,
             a3);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x14u,
      (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
      -2147024809);
  }
  return 2147942487LL;
}
