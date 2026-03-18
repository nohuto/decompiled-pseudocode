/*
 * XREFs of NtUserRegisterHotKey @ 0x1C003D8E0
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v7; // ebx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rcx
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v7 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 384LL)) )
  {
    v12 = 5LL;
LABEL_10:
    UserSetLastError(v12);
    goto LABEL_6;
  }
  if ( (a3 & 0xFFFF1FF0) != 0 )
  {
    v12 = 1004LL;
    goto LABEL_10;
  }
  if ( !a1 )
  {
    v8 = 0LL;
    goto LABEL_5;
  }
  v8 = (struct tagWND *)ValidateHwnd(a1);
  if ( v8 )
LABEL_5:
    v7 = RegisterHotKey(v8, a4);
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
