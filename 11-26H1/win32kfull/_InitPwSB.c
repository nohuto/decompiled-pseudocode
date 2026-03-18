/*
 * XREFs of _InitPwSB @ 0x14018FBCC
 * Callers:
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     xxxShowScrollBar @ 0x1401DA46C (xxxShowScrollBar.c)
 *     xxxEnableWndSBArrows @ 0x1401EFCBC (xxxEnableWndSBArrows.c)
 * Callees:
 *     DesktopAlloc @ 0x14012D510 (DesktopAlloc.c)
 *     GetFnidString @ 0x1401918C4 (GetFnidString.c)
 *     ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z @ 0x1401919F8 (--4-$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QEAAPEAUtagSBINFO@@PEAU2@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall InitPwSB(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 result; // rax
  char v7; // bp
  bool v8; // r15
  __int64 FnidString; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rax

  v4 = a1 + 19;
  result = a1[19];
  if ( !result )
  {
    if ( (*(_WORD *)(a1[5] + 42) & 0x2FFF) == 0x29C )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 169LL);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      FnidString = GetFnidString(*(_WORD *)(a1[5] + 42) & 0x2FFF);
      v10 = *a1;
      v11 = FnidString;
      UserSessionState = W32GetUserSessionState(v13, v12);
      LOBYTE(v15) = v8;
      LOBYTE(v16) = v7;
      WPP_RECORDER_AND_TRACE_SF_qs(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        9,
        10,
        (__int64)&WPP_a346dd17e32f365a4a3d02c66dc02e60_Traceguids,
        v10,
        v11);
    }
    v17 = DesktopAlloc(a1[3], 36LL, 6LL, a4);
    tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(v4, v17);
    if ( *v4 )
    {
      *(_DWORD *)(*v4 + 24LL) = 100;
      *(_DWORD *)(*v4 + 8LL) = 100;
    }
    return *v4;
  }
  return result;
}
