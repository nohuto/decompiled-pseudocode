/*
 * XREFs of ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x140151A28
 * Callers:
 *     _anonymous_namespace_::HandlePointerCursorSideOp @ 0x1400F8920 (_anonymous_namespace_--HandlePointerCursorSideOp.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x14008A600 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x140151F68 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x140152004 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 */

void __fastcall xxxEnsureAllDpiCursors(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  ULONG_PTR *v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 i; // rcx
  __int64 v15; // rbx
  struct tagCURSOR *v16; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = PtiCurrent(a1);
  v3 = 0;
  v4 = 0LL;
  BugCheckParameter3[0] = *((_QWORD *)v1 + 56);
  v5 = BugCheckParameter3;
  *((_QWORD *)v1 + 56) = BugCheckParameter3;
  BugCheckParameter3[1] = 0LL;
  do
  {
    v5 = *(ULONG_PTR **)(W32GetUserSessionState(v5, v2) + v4 + 21912);
    if ( v5 )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)v5, (__int64)BugCheckParameter3);
      xxxEnsureDpiCursorsForSysCur(v3);
    }
    ++v3;
    v4 += 552LL;
  }
  while ( v3 < 0x13 );
  v6 = *(__int64 **)(W32GetUserSessionState(v5, v2) + 19864);
  UserSessionState = W32GetUserSessionState(v8, v7);
  v10 = *(_QWORD *)(UserSessionState + 19920);
  for ( i = v10 + 32LL * *(unsigned int *)(W32GetUserSessionState(v12, v11) + 19848);
        v10 <= i;
        i = v15 + 32LL * *(unsigned int *)(W32GetUserSessionState(i, v13) + 19848) )
  {
    if ( *(_BYTE *)(v10 + 24) == 3 )
    {
      v16 = (struct tagCURSOR *)*v6;
      if ( (*(_DWORD *)(*v6 + 80) & 0x5240) == 0x4000 )
      {
        Win32HM_ExchangeThreadLock<1>(*v6, (__int64)BugCheckParameter3);
        xxxEnsureDpiCursors(v16, 0LL, 0);
      }
    }
    v15 = *(_QWORD *)(UserSessionState + 19920);
    v10 += 32LL;
    v6 += 5;
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
}
