/*
 * XREFs of ForwardTouchMessage @ 0x1401EDF48
 * Callers:
 *     NtUserPostMessage @ 0x140022150 (NtUserPostMessage.c)
 *     NtUserfnTOUCH @ 0x1401EDE40 (NtUserfnTOUCH.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1401EE0CC (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 *     _PostMessageCheckIL @ 0x1401EE5AC (_PostMessageCheckIL.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        volatile void *Address,
        int a6,
        __int64 a7,
        int a8,
        _QWORD *a9)
{
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rsi
  __int64 UserSessionState; // rax
  int v20; // ebx
  unsigned int v21; // edi
  int v22; // ebx
  int v23; // ebx

  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL || !Address || (unsigned __int64)(a4 - 1) > 0xFFFFFFFE )
  {
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL, a2);
  ProbeForRead(Address, 48LL * (unsigned int)a4, CurrentProcessWow64Process != 0 ? 1 : 4);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, v15, a4, (struct tagTOUCHINPUT *const)Address);
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v21 = PostMessageCheckIL(a2, a3);
    v20 = a8;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v17, v16);
    v20 = a8;
    *a9 = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, struct HTOUCHINPUT__ *, __int64))(UserSessionState + 8LL * (((_BYTE)a8 + 6) & 0x1F) + 70904))(
            a2,
            a3,
            a4,
            ValidTouchInputInfo,
            a7);
    v21 = 1;
  }
  if ( !v21 || (v22 = v20 - 683) == 0 || (v23 = v22 - 1) == 0 || v23 == 8 )
    FreeTouchInputInfo(ValidTouchInputInfo, 1LL);
  return v21;
}
