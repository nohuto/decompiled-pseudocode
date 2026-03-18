/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C021CC70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01EBB28 (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = ValidateHwnd(a2);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 == gptiCurrent )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 384LL) == *(_QWORD *)(v8 + 384) )
          v5 = 1;
        else
          v5 = ImpersonateDdeClientWindow((struct tagWND *)v6, (struct tagWND *)v7);
      }
      else
      {
        UserSetLastError(87);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10, v9);
  return v5;
}
