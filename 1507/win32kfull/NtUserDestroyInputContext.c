/*
 * XREFs of NtUserDestroyInputContext @ 0x1C0218CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     DestroyInputContext @ 0x1C01E2EAC (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
  if ( (*gpsi & 4) != 0 )
  {
    v3 = (_QWORD *)HMValidateHandle(a1, 17);
    v2 = 0;
    if ( v3 )
      v2 = DestroyInputContext(v3);
  }
  else
  {
    UserSetLastError(120);
    v2 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
