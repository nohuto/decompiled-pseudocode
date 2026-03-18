/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1401E2350
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v11[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v11);
  if ( a1 != 4096 )
    goto LABEL_11;
  v5 = PtiCurrent(v4);
  v6 = *((_QWORD *)v5 + 170);
  if ( a2 )
  {
    if ( (v6 & 0x8000) == 0 )
      goto LABEL_4;
LABEL_11:
    UserSetLastError(87);
    v7 = 0LL;
    goto LABEL_7;
  }
  if ( (v6 & 0x8000) == 0 )
    goto LABEL_11;
LABEL_4:
  v7 = 1LL;
  v8 = v6 & 0xFFFFFFFFFFFF7FFFuLL;
  v9 = v6 | 0x8000;
  if ( !a2 )
    v9 = v8;
  *((_QWORD *)v5 + 170) = v9;
LABEL_7:
  if ( v11[0] )
  {
    v9 = v12;
    --*(_DWORD *)(v12 + 28);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
