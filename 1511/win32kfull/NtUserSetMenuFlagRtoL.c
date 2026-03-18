/*
 * XREFs of NtUserSetMenuFlagRtoL @ 0x1C02202A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetMenuFlagRtoL(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  v2 = ValidateHmenu(a1);
  v3 = 0;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 40) |= 0x20u;
    v3 = 1;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
