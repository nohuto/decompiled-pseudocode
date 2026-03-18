/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1C0221760
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterUserApiHook @ 0x1C0132880 (_UnregisterUserApiHook.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  v1 = UnregisterUserApiHook(v0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v1;
}
