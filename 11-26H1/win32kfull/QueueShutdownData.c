/*
 * XREFs of QueueShutdownData @ 0x14018E3C0
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14013E810 (NtUserShutdownBlockReasonCreate.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14027BDC8 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

unsigned int *__fastcall QueueShutdownData(__int64 a1, unsigned __int64 a2)
{
  unsigned int *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // si
  char v11; // di
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 UserSessionState; // rax

  result = (unsigned int *)W32GetUserSessionState(a1, a2);
  if ( *((_QWORD *)result + 7935) )
  {
    if ( a1 == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19160)
      || a1 == 0xFFFF
      || (v9 = ValidateHwndEx(a1, 0LL, 0LL), v10 = v9, v11 = 1, v9)
      && (v8 = *(_QWORD *)(v9 + 40), *(_DWORD *)(v8 + 236) == 1)
      && (*(_BYTE *)(v8 + 232) & 0x40) == 0 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      return (unsigned int *)PostEventMessageEx(
                               *(struct tagTHREADINFO **)(*(_QWORD *)(UserSessionState + 63480) + 16LL),
                               *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 63480) + 16LL) + 464LL),
                               0x13u,
                               *(struct tagWND **)(UserSessionState + 63480),
                               0x4Au,
                               a2,
                               a1,
                               0LL);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                                 *((_QWORD *)WPP_GLOBAL_Control + 3),
                                 v15,
                                 v14,
                                 *(_QWORD *)(v13 + 69152),
                                 4,
                                 11,
                                 33,
                                 (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
                                 v10);
      }
    }
  }
  return result;
}
