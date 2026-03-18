/*
 * XREFs of NtUserSetCursorContents @ 0x1C021FC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     _SetCursorContents @ 0x1C01EA56C (_SetCursorContents.c)
 */

__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v4 = HMValidateHandle(a1, 3);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = HMValidateHandle(a2, 3);
    if ( v7 )
      v5 = SetCursorContents(v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v9, v8);
  return v5;
}
