/*
 * XREFs of NtUserSetThreadLayoutHandles @ 0x140253D20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserSetThreadLayoutHandles(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  v6 = PtiCurrent(v4);
  v7 = 0LL;
  v8 = *((_QWORD *)v6 + 59);
  if ( !v8 || *(_QWORD *)(v8 + 40) == a2 )
  {
    v9 = HKLtoPKL(v6, a1);
    if ( v9 )
    {
      LOBYTE(v7) = (WORD1(a2) & 0xF000) == 0xE000;
      if ( (_DWORD)v7 != ((WORD1(a1) & 0xF000) == 0xE000) )
        *((_QWORD *)v6 + 104) = a2;
      v11[1] = v9;
      v11[0] = (char *)v6 + 472;
      HMAssignmentLock(v11, 0LL);
      v7 = 1LL;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
