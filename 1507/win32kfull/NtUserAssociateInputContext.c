/*
 * XREFs of NtUserAssociateInputContext @ 0x1C00F73F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     AssociateInputContextEx @ 0x1C00F7494 (AssociateInputContextEx.c)
 */

__int64 __fastcall NtUserAssociateInputContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v6 = ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_10;
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120);
    goto LABEL_10;
  }
  if ( a2 )
  {
    v7 = HMValidateHandle(a2, 17);
    if ( v7 )
      goto LABEL_5;
LABEL_10:
    v8 = 2;
    goto LABEL_6;
  }
  v7 = 0LL;
LABEL_5:
  v8 = AssociateInputContextEx(v6, v7, a3);
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v8;
}
