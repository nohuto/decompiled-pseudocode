/*
 * XREFs of NtUserSetMenuDefaultItem @ 0x1C00EDA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetMenuDefaultItem @ 0x1C00EDA84 (_SetMenuDefaultItem.c)
 */

__int64 __fastcall NtUserSetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v6 = ValidateHmenu(a1);
  v7 = 0;
  if ( v6 && (*(_DWORD *)(v6 + 40) & 0x40) == 0 )
    v7 = SetMenuDefaultItem(v6, a2, a3);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
