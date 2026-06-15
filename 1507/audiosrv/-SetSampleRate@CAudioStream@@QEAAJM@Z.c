/*
 * XREFs of ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x180082A98
 * Callers:
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x18008C1F0 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetSampleRate(CAudioStream *this, float a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this + 23);
  if ( !v2 )
  {
    v3 = -2147024809;
LABEL_6:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Au,
        (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
        v3);
    }
    return v3;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*((_QWORD *)this + 23));
  if ( v4 == -2005139384 )
    v4 = -2147024809;
  v3 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  return v3;
}
