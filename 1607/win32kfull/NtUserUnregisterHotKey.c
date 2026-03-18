/*
 * XREFs of NtUserUnregisterHotKey @ 0x1C0097B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterHotKey @ 0x1C0097BF4 (_UnregisterHotKey.c)
 */

__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, int a2)
{
  int v4; // ebx
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v4 = 0;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = (struct tagWND *)ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = UnregisterHotKey(v5, a2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
