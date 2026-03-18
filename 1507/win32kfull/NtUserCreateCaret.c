/*
 * XREFs of NtUserCreateCaret @ 0x1C0077A30
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateCaret @ 0x1C0077AD0 (xxxCreateCaret.c)
 */

__int64 __fastcall NtUserCreateCaret(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int Caret; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]

  EnterCrit(1LL);
  v8 = ValidateHwnd(a1);
  Caret = 0;
  if ( v8 )
  {
    v15 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v15;
    v16 = v8;
    ++*(_DWORD *)(v8 + 8);
    Caret = xxxCreateCaret(v8, a2, a3, a4, v15, v16);
    ThreadUnlock1(v13, v12);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return Caret;
}
