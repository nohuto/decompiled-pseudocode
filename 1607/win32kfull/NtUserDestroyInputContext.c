/*
 * XREFs of NtUserDestroyInputContext @ 0x1C02117F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DestroyInputContext @ 0x1C01D9C00 (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v4 = gpsi;
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    v6 = (_QWORD *)HMValidateHandle(a1, v4, v2, v3);
    v5 = 0;
    if ( v6 )
      v5 = DestroyInputContext(v6);
  }
  else
  {
    UserSetLastError(120LL);
    v5 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8, v7);
  return v5;
}
