/*
 * XREFs of xxxCreateCaret @ 0x14014C980
 * Callers:
 *     NtUserCreateCaret @ 0x14014BBC0 (NtUserCreateCaret.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     zzzInternalDestroyCaret @ 0x14014C894 (zzzInternalDestroyCaret.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 */

__int64 __fastcall xxxCreateCaret(struct tagWND *a1, Gre::Base *a2, int a3, int a4)
{
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int ThreadId; // eax
  int v16; // ecx
  int v17; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v20[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v20, 0, sizeof(v20));
  v8 = PtiCurrent((__int64)a1);
  v9 = *((_QWORD *)v8 + 58);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != v9 || (unsigned int)IsWindowBeingDestroyed(a1) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v11, v10);
  ++*(_DWORD *)(UserSessionState + 70592);
  if ( *(_QWORD *)(v9 + 344) )
  {
    zzzInternalDestroyCaret(v13);
    v9 = *((_QWORD *)v8 + 58);
  }
  v19[1] = a1;
  v19[0] = v9 + 344;
  HMAssignmentLock(v19, 0LL);
  v14 = *(_DWORD *)(v9 + 352) & 0xFFFFFFFE;
  *(_DWORD *)(v9 + 356) = 1;
  *(_DWORD *)(v9 + 352) = v14 | 2;
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v8);
  *(_QWORD *)(v9 + 384) = a2;
  *(_DWORD *)(v9 + 400) = ThreadId;
  v16 = 1;
  v17 = 1;
  if ( a4 )
    v17 = a4;
  if ( a3 )
    v16 = a3;
  if ( (unsigned __int64)a2 > 1 )
  {
    GreExtGetObjectW(a2, 32, v20);
    v17 = v20[2];
    v16 = v20[1];
  }
  *(_DWORD *)(v9 + 372) = v17;
  *(_DWORD *)(v9 + 376) = v16;
  *(_QWORD *)(v9 + 392) = 0LL;
  zzzEndDeferWinEventNotify();
  xxxWindowEvent(0x8000u, a1, -8, 0, 0);
  return 1LL;
}
