/*
 * XREFs of NtUserSetMenuContextHelpId @ 0x1C0220230
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetMenuContextHelpId(__int64 a1, int a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v4 = ValidateHmenu(a1);
  v5 = 0;
  if ( v4 && (*(_DWORD *)(v4 + 40) & 0x40) == 0 )
  {
    *(_DWORD *)(v4 + 96) = a2;
    v5 = 1;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
