/*
 * XREFs of NtUserRegisterDManipHook @ 0x1C0111220
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterDManipHook @ 0x1C0111294 (_RegisterDManipHook.c)
 */

__int64 __fastcall NtUserRegisterDManipHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v12);
  v8 = (int)RegisterDManipHook(a1, a2, a3, a4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v12);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v8;
}
