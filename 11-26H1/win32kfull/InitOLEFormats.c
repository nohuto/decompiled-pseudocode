/*
 * XREFs of InitOLEFormats @ 0x1403FBCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitOLEFormats(__int64 a1, __int64 a2)
{
  char v2; // bl
  bool v3; // di
  unsigned int i; // ebx
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v3;
    LOBYTE(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      13,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 0x15 )
      return 1LL;
    if ( !(unsigned __int16)UserAddAtomEx(off_140359910[i], 1LL, 2LL) )
      break;
  }
  return 0LL;
}
