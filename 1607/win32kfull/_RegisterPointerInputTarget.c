/*
 * XREFs of _RegisterPointerInputTarget @ 0x1C01F3278
 * Callers:
 *     NtUserRegisterPointerInputTarget @ 0x1C0218A40 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C0055884 (UpdatePointerRedirIsAlive.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall RegisterPointerInputTarget(__int64 a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx

  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v10 = 87LL;
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
  v10 = 5LL;
LABEL_15:
  UserSetLastError(v10);
  return 0LL;
}
