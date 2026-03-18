/*
 * XREFs of NtUserRegisterDManipHook @ 0x1C0152620
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterDManipHook @ 0x1C0152690 (_RegisterDManipHook.c)
 */

__int64 __fastcall NtUserRegisterDManipHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  LODWORD(a4) = RegisterDManipHook(a1, a2, a3, a4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return (unsigned int)a4;
}
