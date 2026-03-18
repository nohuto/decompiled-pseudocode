/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x1C0056ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     _SetLayeredWindowAttributes @ 0x1C0057144 (_SetLayeredWindowAttributes.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v6 = ValidateHwnd(a1);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    if ( (a4 & 0xFFFFFFFC) != 0 || (unsigned int)IsWindowDesktopComposed(v6) && (*(_DWORD *)(v8 + 288) & 0x20) != 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v9 = SetLayeredWindowAttributes((struct tagWND *)v8);
      if ( v9 < 0 )
        UserSetLastStatus(v9, 1);
      else
        v7 = 1;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v7;
}
