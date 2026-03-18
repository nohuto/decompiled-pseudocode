/*
 * XREFs of NtUserGetPointerType @ 0x1C0214530
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h]

  v4 = 1;
  v5 = EnterSharedCrit(0LL, 1LL);
  v10 = v5;
  if ( !a1 || HIWORD(a1) || !a2 )
  {
    v4 = 0;
    UserSetLastError(87LL);
    goto LABEL_13;
  }
  if ( a1 == 1 )
  {
    v7 = 4LL;
    v9 = 4;
  }
  else
  {
    if ( !GetThreadPointerData((struct _LIST_ENTRY *)(v5 + 968), a1, &v9, 0LL, 0LL) )
    {
      UserSetLastError(87LL);
      v4 = 0;
      goto LABEL_13;
    }
    v7 = v9;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (_DWORD *)W32UserProbeAddress;
  *a2 = v7;
LABEL_13:
  UserSessionSwitchLeaveCrit(v6, v7);
  return v4;
}
