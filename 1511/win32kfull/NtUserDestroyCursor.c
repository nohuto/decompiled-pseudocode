/*
 * XREFs of NtUserDestroyCursor @ 0x1C0123C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 */

__int64 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // ecx
  char v15; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  v4 = HMValidateHandle(a1, 3);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
LABEL_4:
        v9 = DestroyCursor(v10, a2);
        goto LABEL_5;
      }
      v14 = 87;
    }
    else
    {
      if ( PsGetCurrentProcess(v6, v5, v7, v8) == gpepCSRSS
        || *(_QWORD *)(v10 + 24) == PsGetCurrentProcessWin32Process(gpepCSRSS) )
      {
        goto LABEL_4;
      }
      v14 = 5;
    }
    UserSetLastError(v14);
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v12, v11);
  return v9;
}
