/*
 * XREFs of NtUserSetKeyboardState @ 0x1C0111C80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetKeyboardState @ 0x1C0111D2C (_SetKeyboardState.c)
 */

__int64 __fastcall NtUserSetKeyboardState(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  EnterCrit(0LL, 1LL);
  v2 = *(_QWORD *)(gptiCurrent + 384LL);
  v3 = *(_QWORD *)(v2 + 380);
  v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
  v5 = 0;
  if ( !gbEnforceUIPI
    || (unsigned int)v4 > (unsigned int)v3
    || (_DWORD)v4 == (_DWORD)v3
    && ((v6 = HIDWORD(v4), v7 = HIDWORD(v3), (_DWORD)v6 == (_DWORD)v7) || (_DWORD)v7 == -1 || (_DWORD)v6 == -1)
    || (*(_DWORD *)(v2 + 340) & 0x2000000) != 0 )
  {
    v5 = SetKeyboardState(a1);
  }
  else
  {
    EtwTraceUIPIInputError(gptiCurrent, 0LL, v2, *(_QWORD *)(v2 + 380), 3);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
