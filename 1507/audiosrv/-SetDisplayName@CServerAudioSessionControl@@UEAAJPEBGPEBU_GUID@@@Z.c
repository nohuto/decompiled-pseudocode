/*
 * XREFs of ?SetDisplayName@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x18007D8E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetDisplayName(
        CServerAudioSessionControl *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 <= 0x3E8 )
  {
    LOBYTE(a4) = 1;
    return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, const struct _GUID *, __int64))(**((_QWORD **)this + 9) + 216LL))(
             *((_QWORD *)this + 9),
             a2,
             a3,
             a4);
  }
  else
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x13u,
        (__int64)&WPP_72a29e54739c88f9bde176df428e8cf6_Traceguids,
        -2147024809);
    }
    return 2147942487LL;
  }
}
