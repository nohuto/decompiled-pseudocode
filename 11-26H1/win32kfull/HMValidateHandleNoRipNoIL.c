/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x14028AF0C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // r14

  v2 = 0LL;
  PtiCurrent(a1);
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19928) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19920);
    v12 = (__int64 *)HMPkheFromPhe(v10);
    v6 = a1 >> 16;
    LOWORD(v6) = WORD1(a1) & 0x7FFF;
    if ( ((WORD1(a1) & 0x7FFF) == *(_WORD *)(v10 + 26)
       || (_WORD)v6 == 0x7FFF
       || !(_WORD)v6 && PsGetCurrentProcessWow64Process(v6, v11))
      && (*(_BYTE *)(v10 + 25) & 1) == 0
      && *(_BYTE *)(v10 + 24) == 11 )
    {
      v2 = *v12;
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v6) + 130, 0, 0) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v2;
  return v2;
}
