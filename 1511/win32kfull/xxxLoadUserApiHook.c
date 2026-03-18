/*
 * XREFs of xxxLoadUserApiHook @ 0x1C0070720
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C011ACB4 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 CurrentProcess; // rax
  __int64 v7; // rcx
  int v8; // eax
  bool v9; // sf
  __int64 v10; // rcx

  v4 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
    return 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 376LL);
  v8 = *(_DWORD *)(v7 + 380);
  if ( _bittest(&v8, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x1000000D) != 0 )
    return 0LL;
  v9 = (*(_DWORD *)(v7 + 12) & 0x80u) != 0;
  v10 = (unsigned int)gihmodUserApiHookWOW;
  if ( !v9 )
    v10 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v4) = xxxLoadHmodIndex(v10) != 0;
  return v4;
}
