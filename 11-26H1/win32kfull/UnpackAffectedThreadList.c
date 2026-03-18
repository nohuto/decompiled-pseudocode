/*
 * XREFs of UnpackAffectedThreadList @ 0x140219200
 * Callers:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140059A70 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1401D2F9C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnpackAffectedThreadList(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  void *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 16872);
  v5 = (_QWORD *)*v4;
  while ( v5 && v5 != v4 )
  {
    v6 = v5;
    v5 = (_QWORD *)v5[189];
    Win32FreePool(v6);
  }
  v7 = (_QWORD *)(W32GetUserSessionState(v3, v2) + 16872);
  v7[1] = v7;
  *v7 = v7;
  result = W32GetUserSessionState(v9, v8);
  *(_DWORD *)(result + 16888) = 0;
  return result;
}
