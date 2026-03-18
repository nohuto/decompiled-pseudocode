/*
 * XREFs of xxxLoadUserApiHook @ 0x1C0061D40
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C005735C (xxxLoadHmodIndex.c)
 */

__int64 xxxLoadUserApiHook()
{
  unsigned int v0; // ebx
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx
  int v4; // eax
  bool v5; // sf
  int v6; // ecx

  v0 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
    return 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 384LL);
  v4 = *(_DWORD *)(v3 + 380);
  if ( _bittest(&v4, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x1000000D) != 0 )
    return 0LL;
  v5 = (*(_DWORD *)(v3 + 12) & 0x80u) != 0;
  v6 = gihmodUserApiHookWOW;
  if ( !v5 )
    v6 = gihmodUserApiHook;
  LOBYTE(v0) = xxxLoadHmodIndex(v6) != 0;
  return v0;
}
