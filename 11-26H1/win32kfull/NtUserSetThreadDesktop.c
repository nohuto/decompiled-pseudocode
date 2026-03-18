/*
 * XREFs of NtUserSetThreadDesktop @ 0x14005A470
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

_BOOL8 __fastcall NtUserSetThreadDesktop(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  int v6; // eax
  _BOOL8 v7; // rbx
  __int64 v9; // rbx
  __int64 v10; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  EnterCrit(0LL, 0LL);
  LOBYTE(v2) = 1;
  v4 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v4 < 0 )
  {
    if ( a1 || (v9 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40), PsGetCurrentProcess(v10) != v9) )
    {
      v7 = 0LL;
      goto LABEL_4;
    }
    v6 = xxxSetThreadDesktop(0LL, 0LL);
    v4 = v6;
  }
  else
  {
    v4 = xxxSetThreadDesktop(a1, (__int64)Object);
    ObfDereferenceObject(Object);
    v6 = v4;
  }
  v7 = v6 >= 0;
  if ( v4 < 0 )
LABEL_4:
    SetLastNtError((unsigned int)v4);
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
