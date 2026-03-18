/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C021B5F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GetPointerCursorIdInternal @ 0x1C01E0B90 (GetPointerCursorIdInternal.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(int a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int PointerCursorIdInternal; // ebx
  int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h]

  v9 = 0;
  v4 = EnterSharedCrit(1LL);
  v10 = v4;
  if ( a1 && !HIWORD(a1) && a2 )
  {
    PointerCursorIdInternal = GetPointerCursorIdInternal(v4, a1, &v9);
    if ( PointerCursorIdInternal )
    {
      v6 = W32UserProbeAddress;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_DWORD *)W32UserProbeAddress;
      *a2 = v9;
    }
  }
  else
  {
    PointerCursorIdInternal = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return PointerCursorIdInternal;
}
