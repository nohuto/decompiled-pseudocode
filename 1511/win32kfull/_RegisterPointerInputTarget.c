/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01FBEF8
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C021EE10 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     UpdatePointerRedirIsAlive @ 0x1C0068228 (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v10; // ecx

  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v10 = 87;
    goto LABEL_15;
  }
  UpdatePointerRedirIsAlive(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  if ( a2 == 2 )
    v9 = (_QWORD *)(v8 + 208);
  else
    v9 = (_QWORD *)(v8 + 216);
  if ( !a3 )
  {
    if ( *v9 == a1 )
      HMAssignmentUnlock(v9);
    return 1LL;
  }
  if ( !*v9 )
  {
    HMAssignmentLock(v9, a1);
    return 1LL;
  }
  if ( *v9 == a1 )
    return 1LL;
  v10 = 5;
LABEL_15:
  UserSetLastError(v10);
  return 0LL;
}
