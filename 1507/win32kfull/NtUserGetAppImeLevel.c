/*
 * XREFs of NtUserGetAppImeLevel @ 0x1C0219DD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int Prop; // ebx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(1LL);
  v2 = ValidateHwnd(a1);
  Prop = 0;
  v6 = v2;
  if ( v2 )
  {
    if ( (*gpsi & 4) != 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v4 = *(_QWORD *)(v6 + 16);
      if ( *(_QWORD *)(v4 + 384) == *(_QWORD *)(ThreadWin32Thread + 384) )
        Prop = GetProp(v6, (unsigned __int16)atomImeLevel, 1LL);
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return Prop;
}
