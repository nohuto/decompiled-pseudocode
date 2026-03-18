/*
 * XREFs of NtUserUpdateInputContext @ 0x1C0117B60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     UpdateInputContext @ 0x1C0117BE8 (UpdateInputContext.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int updated; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v6) = 17;
    v8 = HMValidateHandle(a1, v6, v7, gpsi);
    updated = 0;
    if ( v8 )
      updated = UpdateInputContext(v8, a2, a3);
  }
  else
  {
    UserSetLastError(120LL);
    updated = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11, v10);
  return updated;
}
