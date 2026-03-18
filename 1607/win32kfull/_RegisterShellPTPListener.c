/*
 * XREFs of _RegisterShellPTPListener @ 0x1C0133068
 * Callers:
 *     NtUserRegisterShellPTPListener @ 0x1C0132FC0 (NtUserRegisterShellPTPListener.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellPTPListener(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && (v4 = *(_QWORD *)(v2 + 8)) != 0 )
  {
    v5 = (_QWORD *)(v4 + 224);
    if ( !a2 )
    {
      if ( *v5 == a1 )
        HMAssignmentUnlock(v5);
      return 1LL;
    }
    if ( !*v5 )
    {
      HMAssignmentLock(v5, a1);
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(87LL);
  }
  return 0LL;
}
