/*
 * XREFs of ?zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z @ 0x1402A309C
 * Callers:
 *     NtUserSetWindowsHookAW @ 0x1402BECB0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402A3124 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 */

__int64 __fastcall zzzSetWindowsHookAW_New(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v4 = (int)a1;
  v9 = 0;
  v6 = PtiCurrent(a1);
  v7 = zzzSetWindowsHookEx_New(0LL, 0LL, v6, (unsigned int)v4, a2, a3, &v9);
  if ( !v7 )
    return -1LL;
  if ( !v9 || (dword_140362794[v4] & 8) != 0 )
    return v7;
  return 0LL;
}
