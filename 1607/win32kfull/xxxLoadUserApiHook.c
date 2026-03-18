/*
 * XREFs of xxxLoadUserApiHook @ 0x1C006F6E0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C0109684 (xxxLoadHmodIndex.c)
 */

__int64 xxxLoadUserApiHook()
{
  unsigned int v0; // ebx
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx
  int v4; // eax
  bool v5; // sf
  __int64 v6; // rcx

  v0 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
    return 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 376LL);
  v4 = *(_DWORD *)(v3 + 372);
  if ( _bittest(&v4, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000000D) != 0 )
    return 0LL;
  v5 = (*(_DWORD *)(v3 + 12) & 0x80u) != 0;
  v6 = (unsigned int)gihmodUserApiHookWOW;
  if ( !v5 )
    v6 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v0) = xxxLoadHmodIndex(v6) != 0;
  return v0;
}
