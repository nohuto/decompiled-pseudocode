/*
 * XREFs of NtUserDestroyCursor @ 0x1C00D92C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 */

__int64 __fastcall NtUserDestroyCursor(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // ecx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v4 = HMValidateHandle(a1, 3);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
LABEL_4:
        v7 = DestroyCursor((struct tagCURSOR *)v8);
        goto LABEL_5;
      }
      v12 = 87;
    }
    else
    {
      if ( PsGetCurrentProcess(v6, v5) == gpepCSRSS
        || *(_QWORD *)(v8 + 24) == PsGetCurrentProcessWin32Process(gpepCSRSS) )
      {
        goto LABEL_4;
      }
      v12 = 5;
    }
    UserSetLastError(v12);
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v7;
}
