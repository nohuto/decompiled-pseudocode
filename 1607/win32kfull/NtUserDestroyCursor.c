/*
 * XREFs of NtUserDestroyCursor @ 0x1C008FE20
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserDestroyCursor(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v9 = 0;
  v10 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
LABEL_4:
        v9 = DestroyCursor((struct tagCURSOR *)v10);
        goto LABEL_5;
      }
      v14 = 87LL;
    }
    else
    {
      if ( PsGetCurrentProcess(v8) == gpepCSRSS
        || *(_QWORD *)(v10 + 24) == PsGetCurrentProcessWin32Process(gpepCSRSS, v15) )
      {
        goto LABEL_4;
      }
      v14 = 5LL;
    }
    UserSetLastError(v14);
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
