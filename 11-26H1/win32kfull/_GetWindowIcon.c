/*
 * XREFs of _GetWindowIcon @ 0x14013E208
 * Callers:
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14013DE70 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
 *     NtUserInternalGetWindowIcon @ 0x14013E190 (NtUserInternalGetWindowIcon.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x14013E294 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 */

__int64 __fastcall GetWindowIcon(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax
  _BOOL8 v7; // rdx
  __int64 v8; // rcx
  struct tagCURSOR *v10; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v4 = 112LL;
  if ( a2 == 1 )
    v4 = 80LL;
  v5 = 272LL;
  if ( a2 != 1 )
    v5 = 264LL;
  v6 = (struct tagCURSOR *)HMValidateHandleNoRip(*(_QWORD *)(v5 + v2), 3);
  if ( (v6
     || (v6 = *(struct tagCURSOR **)(v4 + *(_QWORD *)(a1 + 136))) != 0LL
     || (v6 = *(struct tagCURSOR **)(W32GetUserSessionState(v8, v7) + 35160)) != 0LL)
    && (v10 = _DuplicateCursor(v6, v7)) != 0LL )
  {
    return *(_QWORD *)v10;
  }
  else
  {
    return 0LL;
  }
}
