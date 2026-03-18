/*
 * XREFs of PrepareForLogoff @ 0x140292110
 * Callers:
 *     NtUserPrepareForLogoff @ 0x14024B350 (NtUserPrepareForLogoff.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RegisterPerUserKeyboardIndicators @ 0x14025A880 (RegisterPerUserKeyboardIndicators.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x14025C788 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PrepareForLogoff(__int64 a1)
{
  struct tagTHREADINFO *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  HANDLE v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  v1 = PtiCurrent(a1);
  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v1 + 130, 0, 0) & 0x20000000) == 0 )
      goto LABEL_3;
    v3 = *(_QWORD *)(*((_QWORD *)v1 + 57) + 752LL);
    if ( (*(_DWORD *)(v3 + 32) & 0x80u) == 0 )
      goto LABEL_3;
    return 0LL;
  }
  if ( tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v1 + 57), 0x80u) )
    return 0LL;
LABEL_3:
  v4 = *(HANDLE *)(W32GetUserSessionState(v3, v2) + 63536);
  if ( PsGetThreadProcessId(*(PETHREAD *)v1) == v4 && !*(_WORD *)(W32GetUserSessionState(v6, v5) + 68744) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)v1 + 57) + 656LL);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 152) || *(_DWORD *)(v7 + 156) )
      {
        v12 = -1LL;
        v11 = 0LL;
        v8 = CreateProfileUserName(&v11);
        RegisterPerUserKeyboardIndicators(v8, v9);
        if ( v12 != -1 )
          PopAndFreeAlwaysW32ThreadLock((__int64)&v11);
      }
    }
  }
  return 1LL;
}
