/*
 * XREFs of ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x18007DC5C
 * Callers:
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180088B70 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::SetSampleRate(CAudioStream *this, float a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this + 22);
  if ( !v2 )
  {
    v3 = -2147024809;
LABEL_6:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        v3);
    }
    return v3;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*((_QWORD *)this + 22));
  if ( v4 == -2005139384 )
    v4 = -2147024809;
  v3 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  return v3;
}
