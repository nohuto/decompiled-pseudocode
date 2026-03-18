/*
 * XREFs of NtUserCheckMenuItem @ 0x1C0149540
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C0072D9C (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+58h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_6:
    v7 = -1;
    goto LABEL_5;
  }
  v6 = ValidateHmenu(a1);
  if ( !v6 || (*(_DWORD *)(v6 + 40) & 0x40) != 0 )
    goto LABEL_6;
  v7 = MenuItemState((struct tagMENU *)v6, a2, a3, 8LL, 0LL);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
