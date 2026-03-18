/*
 * XREFs of NtUserUpdateInputContext @ 0x1C00F54C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     UpdateInputContext @ 0x1C00F5548 (UpdateInputContext.c)
 */

__int64 __fastcall NtUserUpdateInputContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int updated; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( (*gpsi & 4) != 0 )
  {
    v6 = HMValidateHandle(a1, 17);
    updated = 0;
    if ( v6 )
      updated = UpdateInputContext(v6, a2, a3);
  }
  else
  {
    UserSetLastError(120);
    updated = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return updated;
}
