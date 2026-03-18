/*
 * XREFs of xxxLoadUserApiHook @ 0x140292FB4
 * Callers:
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     NtUserLoadUserApiHook @ 0x14020A370 (NtUserLoadUserApiHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxLoadHmodIndex @ 0x1400396C0 (xxxLoadHmodIndex.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1)
{
  struct tagTHREADINFO *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = PtiCurrent(a1);
  v5 = 0;
  if ( !IsInsideUserApiHook(v3, v2) )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(v4);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess)
    || (unsigned int)PsGetWin32KFilterSet() == 5
    || (_InterlockedCompareExchange((volatile signed __int32 *)v1 + 130, 0, 0) & 0x1000000D) != 0 )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)v1 + 57);
  v8 = *(unsigned int *)(v7 + 12);
  if ( (v8 & 0x80u) == 0LL )
    v9 = *(unsigned int *)(W32GetUserSessionState(v7, v8) + 64208);
  else
    v9 = *(unsigned int *)(W32GetUserSessionState(v7, v8) + 64732);
  LOBYTE(v5) = xxxLoadHmodIndex(v9) != 0;
  return v5;
}
