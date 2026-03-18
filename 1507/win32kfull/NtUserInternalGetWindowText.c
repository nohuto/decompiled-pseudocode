/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00E37F0
 * Callers:
 *     <none>
 * Callees:
 *     TextCopy @ 0x1C00E38A8 (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // ebx

  v3 = a3;
  EnterSharedCrit(1LL);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 && (_DWORD)v3 )
  {
    if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
      ExRaiseAccessViolation();
    ProbeForWrite(a2, 2 * v3, 2u);
    *a2 = 0;
    v7 = v8 + 216;
    if ( *(_DWORD *)(v8 + 216) )
      v9 = TextCopy(v7, a2, (unsigned int)v3);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v9;
}
