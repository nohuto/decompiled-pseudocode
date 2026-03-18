/*
 * XREFs of _SetProgmanWindow @ 0x14024A668
 * Callers:
 *     NtUserSetProgmanWindow @ 0x14024A5F0 (NtUserSetProgmanWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SetProgmanWindow(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)PtiCurrent(a1) + 62);
  v3 = 0LL;
  v4 = (_QWORD *)(v2 + 192);
  if ( a1 && *v4 )
  {
    UserSetLastError(5);
    return 0LL;
  }
  else
  {
    if ( a1 )
      v3 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(*(v4 - 24) + 40LL) = v3;
    v6[0] = v4;
    v6[1] = a1;
    HMAssignmentLock(v6, 0LL);
    return 1LL;
  }
}
