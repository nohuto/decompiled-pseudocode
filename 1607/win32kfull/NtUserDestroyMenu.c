/*
 * XREFs of NtUserDestroyMenu @ 0x1C01253A0
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserDestroyMenu(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  v2 = ValidateHmenu(a1);
  v3 = 0;
  if ( v2 && (*(_DWORD *)(v2 + 40) & 0x40) == 0 )
    v3 = DestroyMenu((struct tagMENU *)v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
